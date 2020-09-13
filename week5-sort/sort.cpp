#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>
#include<string.h>

const int n = 5;
int main()
{
    int i, j, num[n], tmp;
    char key;
    for (i = 0; i < n; i++)
    {
        printf("Enter Number [%d]:", i + 1);
        scanf_s("%d", &num[i]);
    }

    do
    {
        printf("\n (a) Max to Min");
        printf("\n (b) Min to Max\n");
        printf("Select a or b : ");
        key = _getche();
        printf("\n");
    } while (!(key == 'a' || key == 'b'));
    printf("\n Input Before Sort : ");


    for (i = 0; i < n; i++)
    {
        printf("%5d", num[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1; j++)
        {
            if (key == 'a')
            {
                if (num[j] < num[j + 1])
                {
                    tmp = num[j];
                    num[j] = num[j + 1];
                    num[j + 1] = tmp;
                }
            }
            else
            {
                if (num[j] > num[j + 1])
                {
                    tmp = num[j];
                    num[j] = num[j + 1];
                    num[j + 1] = tmp;
                }
            }
        }
    }
    printf("\n Output After Sort : ");
    for (j = 0; j < n; j++)
    {
        printf("%5d", num[j]);
    }
    return 0;
}

