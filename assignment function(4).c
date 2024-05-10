#include <stdio.h>

int fibo(int x)
{
    if (x <= 1)
        return x;
    return fibo(x-1)+fibo(x-2);
}
int main()
{
    int num, fibonacci;
    printf("Input your number here: ");
    scanf("%d", &num);
    fibonacci = fibo(num);
    printf("%d", fibonacci );
    return 0;
}