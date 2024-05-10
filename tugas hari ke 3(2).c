#include <stdio.h>
#include <stdbool.h>
int main(){
    char Check;
    printf("Check In Here: ");
    scanf("%c", &Check);
    if (Check >= 65 && Check <= 90)
    {
       printf("This is a capital Alphabet!");
    }
    else if (Check >= 97 && Check <= 122)
    {
        printf("This is an lowercase Alphabet!");
    }
    else
    {
        printf("This is not an Alphabet!");
    }
   
    return 0;

}