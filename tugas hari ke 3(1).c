#include <stdio.h>
#include <stdbool.h>

int main(){
    char huruf;
    printf("Input huruf: ");
    scanf("%c", &huruf);

    switch (huruf)
    {
    case 'a':
    case 'i':
    case 'u':
    case 'e':
    case 'o':
        printf("Ini adalah huruf vokal!");
        break;
    
    default:
        printf("Ini huruf konsonan!");
        break;
    }
    return 0;
}