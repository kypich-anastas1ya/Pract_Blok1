#include <stdio.h>

int main() {
    int t1, t2, t3;
    float totaltime;

    // User input of variable t1, t2, t3
    printf("Enter three values:\n ");
    scanf("%d %d %d", &t1, &t2, &t3);
    // Checking the fulfillment of the condition
 if(t1>10000 | t2>10000 |  t3>10000){
   printf("Error! Enter a number not exceeding 10000!");
   return 0;
 }
  else{
    // Finding the total time
    totaltime = (1.0)/((1.0/t1) + (1.0/t2) + (1.0/t3));
    // The result is rounded to 2 decimal places
    printf("The time required to eat the pie is %.2f hours\n", time);
  }
}
