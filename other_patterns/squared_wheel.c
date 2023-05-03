#include <stdio.h>

int main(void) {
  int a ;
  printf("Enter a number : ");
  scanf("%d", &a);
  if(a < 6)
  a = 6;
  if(a%2==0)
  a+=1;
  printf("\n\n");
  for (int i = 1; i <= a; i++)
  {
      for(int j = 1; j <= a; j++)
      {
          if((i == 1 || i == j || i == a || i == a/2+1 || j == 1 || i + j == a+1 || j == a || j == a/2+1))
          {
              printf("* ");
          }
          else
          {
              printf("  ");
          }
      }
      printf("\n");
  }
  return 0;
}

example output:
Enter a number : 10

* * * * * * * * * * * 
* *       *       * * 
*   *     *     *   * 
*     *   *   *     * 
*       * * *       * 
* * * * * * * * * * * 
*       * * *       * 
*     *   *   *     * 
*   *     *     *   * 
* *       *       * * 
* * * * * * * * * * * 