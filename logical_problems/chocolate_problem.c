/*
#chocolate Problem🍫🍬🍫🍬🎆

You can have initially "n" number of chocolates in your hand. 
If you return 3 chocolate wrappers you will get a new chocolate. 
If doing so how many chocolates you will have at the end.

Input must be positive integer n 🌟

*/
#include <stdio.h>

int main() {
 
 int i,j,n,m,sum=0;
 scanf("%d",&n);
 // n is total number of chocolates initially.
 m = n;// assigning n value for future purpose.
 while (n>2)
 {
     i = n/3;
     // i is chocolates for n chocolate wrappers.
     j = n%3;
  // remining wrappers after getting chocolates.
    n = i+j;
    sum = sum+i;
 }
 sum = sum +m;// Total chocolates.
 printf("## Total number of chocolates obtained in the end is %d\n\n",sum);
 
 
 printf("## Total number of wrappers remained in hand is %d",j);
    return 0;
}