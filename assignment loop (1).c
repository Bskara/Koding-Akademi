#include <stdio.h>
int main(){
    int n;
    int i,j;

    printf("Input your number: ");
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        printf("you must input odd number!");
    }
    
    if (n % 2 == 1)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (i == j || i+j == n+1) printf("# ");
                else printf("* ");
               
            }
            printf("\n");
        }
        printf("<============================>\n");
        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                    printf("%d ", i + j*5);
            }
            
            printf("\n");
        }
        
    }
    return 0;
}