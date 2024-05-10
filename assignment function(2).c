#include <stdio.h>
int fact(int x)
{
    if (x==0) return 1;
    return x * fact(x-1);
}

int main()
{
    int n,result;
    printf("Input your number here: ");
    scanf("%d", &n);
    result = fact(n);
    printf("%d", result);
    return 0;
}