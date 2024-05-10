#include <stdio.h>
#include <string.h>
int main() {

/*
  int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};
 
  float avg, sum = 0;
  int i;
  
  int length = sizeof(ages) / sizeof(ages[0]);
    
  for (int i = 0; i < length; i++) {
    sum += ages[i];
  }
  
  avg = sum / length;

  printf("The average age is: %.2f", avg);
  */

   // An array storing different ages
  int ages[] = {20, 22, 18, 35, 7, 26, 87, 70};
  
  // Get the length of the array
  int length = sizeof(ages) / sizeof(ages[0]);
  
  // Create a 'lowest age' variable and assign the first array element of ages to it
  int lowestAge = ages[0];

  // Loop through the elements of the ages array to find the lowest age
  for (int i = 0; i < length; i++) 
  
    // Check if the current age is smaller than current the 'lowest age'
    if (lowestAge > ages[i]) {
    
      // If the smaller age is found, update 'lowest age' with that element
      lowestAge = ages[i];
    }
  
 str
 
  printf("The lowest age in the array is: %d", lowestAge);

  return 0;
}