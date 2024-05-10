#include <stdio.h>

int main(){
    char myName[6] = "safwan";
    char *ptr1 = myName;
    char *ptr2 = &myName[5];
    for (int i = 0; i < 3; i++)
    {
        char poin = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = poin;
        ptr1++;
        ptr2--;
    }
    for (int i = 0; i < 6; i++)
    {
        printf("%c", myName[i]);
    }
    

        

    return 0;
}