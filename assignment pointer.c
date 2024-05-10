#include <stdio.h>

int main(){

    int *pc, c;

    c = 12;
    printf("Address of C: %x\n", &c);
    printf("value of C  : %d\n\n", c);

    pc = &c;
    printf("Addres of pc: %x\n", pc);
    printf("Value of pc : %d\n\n", *pc);

    c = 30;
    printf("Address of C: %x\n", &c);
    printf("Value of C: %d\n\n", c);

    *pc = 2;
    printf("Address of *pc: %x\n", pc);
    printf("Value of *pc: %d\n\n", *pc);
    return 0;
}