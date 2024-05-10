#include <stdio.h>

int fact(int a)
{
    int factorial = 1;
    for (int count = 1; count <= a; count++)
    {
        factorial = factorial * count;
    }
    return factorial;
}
 
int main()
{ 
    int num,result;
    printf("Input your number: ");
    scanf("%d", &num);
    
    result = fact(num);
    printf("%d", result);
    
    return 0;   
}