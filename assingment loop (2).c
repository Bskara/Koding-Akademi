#include <stdio.h>
int main()
{

    int num, i;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("The factor of %d are: \n", num);
    if (num % 2 == 1)
    {
        for (int i = 1; i <= num; i++)
        {
            if (num % i == 0)
                printf("%d, ", i);
        }
    }
    else
    {
        int i = 1;
        while (i <= num)
        {
            if (num % i == 0)
            {
                printf("%d, ", i);
            }
            i++;
        }
    }

    return 0;
}