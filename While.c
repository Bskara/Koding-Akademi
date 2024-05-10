#include <stdio.h>
int main (){
   /* 
    int count = 1;
    do
    {
        printf("%d\n", count);
        count++;
    } while (count <= 5);
    */
   /*
   int yes, no;
   for (yes = 0; yes < 2; yes++)
   {
    printf("Outer: %d\n\n", yes);

    for ( no = 0; no < 4; no++)
    {
        printf("inner: %d\n", no);
    }
    
   }
   */
  int myNumbers[] = {20, 40, 60, 80, 100};
  int i;
  int lenght = sizeof(myNumbers) / sizeof(myNumbers[0]);

    for (i = 0; i < lenght; i++)
    {
        printf("%d\n", myNumbers[i]);
    }
    
    return 0;
}