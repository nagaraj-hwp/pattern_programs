/* This code is written by 

   "NAGARAJ P"
   
   Enter your name as input without special characters...
   
   I have used the for loops and conditionals along with Switch case...
*/


#include<stdio.h>
#include<string.h>
#define n 9
int main()
{
 int i,j,p,q,ki;
 char name[300];
 fgets(name,300,stdin);
 printf("HEY IS YOUR NAME IS %s\n\n",name);
 printf ("YOUR NAME IS UNIQUE AS YOU\n\n\n");
 int len=strlen(name);
 for(ki=0;ki<len;ki++)
 switch (name[ki])
 {
     case ' ':
     continue;
 // PRINTING A
 //**************
 case 'A':
 case 'a':
 p=n;q=n;
 for(i=1;i<=n;i++)
 {
 for(j=1;j<=n+n;j++)
 {
 if((j==p||j==q)||((i==(n-n/3))&&(p<j)&&(q>j)))
 {
 printf("*");
 }
 else printf(" ");
 }
 q++;p--;
 printf("\n");
 }
 printf("\n\n");
 break;
 case 'B':
 case 'b':
 //PRINTING B
 //**************

 for(i=1;i<=n;i++)
 {
for(j=1;j<=n;j++)
 {
 if((i==1 && j!=n)||(i==n/2+1 && j!=n)||(j==1)||(j==n && i!=1 && i!=n)||(i==n && j!=n))
 {
     printf("*");
 }
 else
 printf(" ");
 }
 printf("\n");
 }
 printf("\n\n");
 break;
 case 'C':
 case 'c':
 //PRINTING C
 //*************

 for(i=1;i<=n;i++)
 {
 for(j=1;j<=n;j++)
 {
 if((i==1&&j==1)||(i==n && j==1))printf(" ");
 else if((i==1 && j!=1)||(j==1 && i!=1)||(j==1 && i!=n)||(i==n && j!=1))
  printf("*");
 else
 printf(" ");
 }
 printf("\n");
 }
 printf("\n\n");
 break;
case 'D':
case  'd':
 //PRINTING D
 //***************
for(i=1;i<=n;i++)
 {
 for(j=1;j<=n;j++)
 {
 if((i==1 && j!=n)||(j==2)||(j==n && i!=1 && i!=n)||(i==n && j!=n))
 {
 printf("*");
 }
 else
 printf(" ");
 }
 printf("\n");
 }
printf("\n\n");
break;
case 'E':
case 'e' :
 //PRINTING E
 //***************
 for(i=1;i<=n;i++)
 {
 for(j=1;j<=n;j++)
 {
 if((i==1 && j!=n)||(i==n/2+1 && j!=n)||(j==1)||(i==n && j!=n))
 {
 printf("*");
 }
 else
 printf(" ");
 }
 printf("\n");
 }
printf("\n\n");
break;
  case 'f':
 case 'F':
 //PRINTING F
 //**************
 
 for(i=1;i<=n;i++)
 {
 for(j=1;j<=n;j++)
 {
 if((i==1 && j!=n)||(i==n/2+1 && j<n-2)||(j==1))
 {
 printf("*");
 }
else
 printf(" ");
 }
printf("\n");
 }
printf("\n\n");

break;

case 'g'        :
case 'G'        :
//PRINTING G
//****************

 for(i=1;i<=n;i++)
 {
    for(j=1;j<=n;j++)
    {
        if((i==1 && j==1) || (i==n &&j==1))
        {
            printf(" ");
        }
        else if(i==1 || j== 1 || i==n || (i==n/2+1 && j>i) || (j==n && i>n/2+1))
            printf("*");
        else
            printf(" ");
    }
        printf("\n");
 }
    printf("\n\n");
break;

case 'h'      :
case 'H'       :
// PRINTING H
//****************

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
        if((j==1)||(j==n)||(i==n/2+1))
            printf("*");
         else
             printf(" ");
        }
        printf("\n");
    }
    printf("\n\n");
break;

case 'i'       :
case 'I'    :
//PRINTING I
//**************

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if((i==1)||(i==n)||(j==n/2+1))
                printf("*");
            else
                printf(" ");
        }
            printf("\n");
    }
    printf("\n\n");
break;

case 'j'      :
case 'J'       :
//PRINTING J
//***************

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if((i==1)||(i==n && j<=n/2)||(j==n/2+1 && i !=n))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n\n");
break;

case 'k':
case 'K':
// PRINTING K
//***************

    for(i=1;i<=n/2+1;i++)
    {
         for(j=1;j<=n/2+1;j++)
        {
            if((j==1)||(i+j==n/2+1+1))
                 printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    for(i=2;i<=n/2+1;i++)
    {
        for(j=1;j<=n/2+1;j++)
        {
            if((j==1)|| i==j)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    printf("\n\n");
    break;
    
case 'l' :
case 'L':
//PRINTING L
//****************

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if((j==1)||(i==n))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n\n");
    break;
case 'm'   :
case 'M'      :
//PRINTING M
//****************

    for(i =1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if((j == 1) ||(j==n) || ((i==j )&&(i<= n/2+1)) || ((i+j == n+1) && (i<= n/2+1)))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n\n");
    break;
    case 'n':
    case 'N':
    //PRINTING N
    //****************

        for(i =1;i<=n;i++)
            {
        for(j=1;j<=n;j++)
        {
                if((j == 1) ||(j==n) || (i==j))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
printf("\n\n");
break;
case 'o'  :
case 'O'       :
    //PRINTING O
    //****************
    
        for(i =1;i<=n;i++)
        {
        for(j=1;j<=n;j++)
        {
            if((i==1&& j!=1 && j!=n) ||(j==n && i!=n && i!=1)||(i==n && j!=n && j!=1)||(j==1 && i!=1 && i!=n))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
printf("\n\n");
break;

case 'p'    :
case 'P'         :
//PRINTING P
//**************

        for(i =1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
             if((i==1 && j!=n)||(i==n/2+1 && j!=n)||(j==1)||(j==n && i!=1 && i!=n && i<=n/2+1))
                 printf("*");
                     else
                     printf(" ");
        }
        printf("\n");
    }
printf("\n\n");
break;

case 'q' :
case 'Q' :
//PRINTING Q
//**************

        for(i =1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
             if((i==1 && j<n-1) || (i==n-1 && j<n-1) || (j==1 && i<n-1)|| ( j==n-1 && i<n-1) || (i==j && i>n/2+1))
                 printf("*");
                     else
                     printf(" ");
        }
        printf("\n");
    }
printf("\n\n");
break;

case 'r'     :
case 'R'       :
//PRINTING R
//**************
    for(i =1;i<n/2+1;i++)
    {
        for(j=1;j<=n/2+1;j++)
        {
            if((i == 1)|| (j==1)|| (j==n/2+1))
                printf("* ");
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
        
    for(i =1;i<=n/2+1;i++)
    {
        for(j=1;j<=n/2+1;j++)
        {
            if(j==1 || i==j || i==1)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
printf("\n\n");
break;

//PRINTING S
//***************
case 's'     :
case 'S'        :
for(i =1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if((i == 1) ||(i ==n) ||(i==n/2+1)|| ((j==n )&&(i>= n/2+1)) || ((j==1 && (i<= n/2+1))))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }    
    printf("\n\n");
    break;
    
    case 't'        :
    case 'T'       :
    //PRINTING T
    //**************
    
    for(i =1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if((j == n/2+1)|| (i==1)|| (i==n && j>(n/2-1) && j<(n/2+3)))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
        printf("\n\n");
break;

case 'u':
case 'U':
    //PRINTING U
    //**************
    
    for(i =1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if((j==1 && i!=n) || (i==n && j!=1 && j!=n) || (j==n && i!= n))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    
    printf("\n\n");
    break;
    
    case 'v':
    case 'V':
    //PRINTING V
    //**************
    
    for(i =1;i<=n/2+1;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(((i==j )&&(i<= n/2+1)) || ((i+j == n+1) && (i<= n/2+1)))
            printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n\n");
    break;
    
    case 'w'         :
    case 'W'       :
    //PRINTING W
    //***************
    
    for(i =1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if((j == 1) ||(j==n) || ((i==j )&&(i> n/2)) || ((i+j == n+1) && (i> n/2)))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    
    printf("\n\n");
    break;
    
    case 'x'         :
    case 'X'        :
    //PRINTING X
    //***************
    
    for(i =1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if((j == i)||(i+j == n+1))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n\n");
    break;
    
    case 'Y'           :
    case 'y'         :
    //PRINTING Y
    //**************
    
    for(i =1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(((i==j )&&(i<= n/2+1)) || ((i+j == n+1) && (i<= n/2+1))|| (j== n/2+1 && i>n/2+1))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    
    printf("\n\n");
    break;
    
    case 'z':
    case 'Z':
    //PRINTING Z
    //**************
    
    for(i =1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if((i==1) || (i==n)|| (i+j ==n+1))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n\n");
    break;
    
    default :
    printf("Enter a name or string");
 }
 printf ("Hope you like this...\n");
 printf ("ALL RIGHTS RESERVED\"-\"");
 printf("\n");
 return 0;

 }