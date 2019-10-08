#include <stdio.h>
int main()
{
int x,n,r=0,num;
printf("Enter the number: ");
scanf("%d",&n);
num=n;
while (n!=0)
{
x=n%10;
r=x+r*10;
n=n/10;
}
if (num==r)
printf("\n%d is palindrome",num);
else
printf("\n%d is not palindrome",num);
return 0;
}
