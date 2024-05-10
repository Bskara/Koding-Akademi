#include <stdio.h>
#include <stdbool.h>

int main(){
    int Monitor_price = 150;
    int Keyboard_price = 35;
    int Keyboard;
    int Monitor;
    float Disc1 = 0.05;
    float Disc2 = 0.03;
    float Disc3 = 0.01;
        printf("How many keybord do you need: ");
        scanf("%d", &Keyboard);
        printf("you bought: %d keyboard\n", Keyboard);
        int total_priceK = Keyboard * Keyboard_price;
        printf("So the total price: %d\n\n", total_priceK);

        printf("How many monitor do you need: ");
        scanf("%d", &Monitor);
        printf("you bought: %d monitor\n", Monitor);
        int total_priceM = Monitor * Monitor_price;
        printf("So the total price: %d\n", total_priceM);

        printf("So your total pay for keyboard: %d$, and for Monitor: %d$\n\n", total_priceK, total_priceM);
        
        float hasil_bersihK, hasil_bersihM;
        if (Keyboard >= 12 && Monitor < 12)
        {
            float discountK = (float)total_priceK * Disc2;
            hasil_bersihK = (float)total_priceK - discountK;
        }
       
         if (Keyboard < 12 && Monitor >= 12)
        {
            float discountM = (float)total_priceM * Disc1;
            hasil_bersihM = (float)total_priceM - discountM;
        }
        
         if ((Monitor + Keyboard) % 12 == 0 )
        {
            float totalBersih = hasil_bersihK+hasil_bersihM;
            float discount = totalBersih * (Disc3 * ((Monitor+Keyboard)/12));
            float hasil = totalBersih - discount;
            printf("your total price with discounts applied: %.2f\n", hasil);
        }
    return 0;
}