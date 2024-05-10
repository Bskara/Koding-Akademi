#include <stdio.h>

int fibo(int x)
{
    int num1 = 1;
    int num2 = 1;
    int A;
    printf("%d %d ", num1, num2);
    for (int i = 3; i <= x ; i++)
    {
        A = num1 + num2;
        printf("%d ", A);
        num1 = num2;
        num2 = A;
    }
    return A;
}

int main()
{
    int num, fibonacci;
    printf("Input your number here: ");
    scanf("%d", &num);
    fibonacci = fibo(num);

    return 0;
}