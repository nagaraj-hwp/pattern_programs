/* 
Please provide a string input without space and odd number of letters will be good
example : Hello world! 

*/
#include <stdio.h>
#include<string.h>

int main() {

char a[100];
int i,j,n,q=15;
fgets(a,100,stdin);
n= strlen(a);
while(q>0){
for(i=0;i<=n;i++)
{
    for(int k=0;k<30;k++)
    printf(" ");
    for(j=0;j<=n;j++)
    {
        if(i==j||(i+j)==(n-1))
        printf("%c",a[j]);
        else
        printf("  ");
    }
    printf ("\n");
}
q--;
}
    return 0;
}