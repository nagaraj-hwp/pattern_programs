#include<stdio.h>

#include<string.h>

#define n 9
int main() {
  int i, j, k;
  char num[25];
  scanf("%s", num);
  printf("You entered %s", num);
  printf("\n\n");
  for (k = 0; k < strlen(num); k++)
    switch (num[k]) {
    case '0':
      //PRINTING 0
      //******************
      for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
          if ((i == 1 && j != 1 && j != n) || (j == n && i != n && i != 1) || (i == n && j != n && j != 1) || (j == 1 && i != 1 && i != n))
            printf("*");
          else
            printf(" ");
        }
        printf("\n");
      }
      printf("\n\n");
      break;

    case '1':
      //PRINTING 1
      //******************

      for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
          if ((i == 3 && j == n / 2 - 1) || (i == 2 && j == n / 2) || (j == n / 2 + 1) || (i == n))
            printf("*");
          else
            printf(" ");
        }
        printf("\n");
      }
      printf("\n\n");
      break;

    case '2':
      //PRINTING 2
      //******************
      for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
          if ((i == 1 && j != n) || (i == n / 2 + 1 && j != 1 && j != n) || (j == n && i <= n / 2 && i != 1) || (i == n && j != 1) || (j == 1 && i > n / 2 + 1 && i != n))
            printf("*");
          else
            printf(" ");
        }
        printf("\n");
      }
      printf("\n\n");
      break;

    case '3':
      //PRINTING 3
      //******************
      for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
          if ((i == 1 && j != n) || (i == n / 2 + 1 && j != 1 && j != n) || (j == n && i <= n / 2 && i != 1) || (i == n && j != n) || (j == n && i > n / 2 + 1 && i != n))
            printf("*");
          else
            printf(" ");
        }
        printf("\n");
      }
      printf("\n\n");
      break;

    case '4':
      //PRINTING 4
      //******************
      for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
          if (i == n - 2 || j == n - 2 || i + j == n - 1)
            printf("*");
          else
            printf(" ");
        }
        printf("\n");
      }
      printf("\n\n");
      break;

    case '5':

      //PRINTING 5
      //******************
      for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
          if ((i == 1) || (i == n / 2 + 1 && j != n) || (j == n && i > n / 2 + 1 && i != n) || (i == n && j != n) || (j == 1 && i < n / 2 + 1))
            printf("*");
          else
            printf(" ");
        }
        printf("\n");
      }
      printf("\n\n");
      break;

    case '6':
      //PRINTING 6
      //******************
      for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
          if ((i == 1 && j != 1) || (i == n / 2 + 1 && j != n) || (j == n && i > n / 2 + 1 && i != n) || (i == n && j != n) || (j == 1 && i != 1 && i != n))
            printf("*");
          else
            printf(" ");
        }
        printf("\n");
      }
      printf("\n\n");
      break;

    case '7':
      //PRINTING 7
      //*****************
      for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
          if ((i == 1) || (j == n - 1) || (i == n / 2 + 1 && j > n / 2 + 1) || (i == n && j > n / 2 + 2))
            printf("*");
          else
            printf(" ");
        }
        printf("\n");
      }
      printf("\n\n");
      break;

    case '8':
      //PRINTING 8
      //******************
      for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
          if ((i == 1 && j != 1 && j != n) || (i == n / 2 + 1 && j != n && j != 1) || (j == n && i != n / 2 + 1 && i != n && i != 1) || (i == n && j != n && j != 1) || (j == 1 && i != 1 && i != n && i != n / 2 + 1))
            printf("*");
          else
            printf(" ");
        }
        printf("\n");
      }
      printf("\n\n");
      break;

    case '9':
      //PRINTING 9
      //******************
      for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
          if ((i == 1 && j != 1 && j != n) || (i == n / 2 + 1 && j != n && j != 1) || (j == n && i != n && i != 1) || (i == n && j != n && j != 1) || (j == 1 && i != 1 && i < n / 2 + 1))
            printf("*");
          else
            printf(" ");
        }
        printf("\n");
      }
      printf("\n\n");
      break;
    default:
      printf("Sorry here numbers only, letters allowed  in Enter you name check out that code \n\n");
      break;
    }
  printf("Hope you like this...\n");

  printf("\n");
  printf("\n");
  printf("\n");
  printf("ALL RIGHTS RESERVED");
  printf("\n");
  return 0;
}