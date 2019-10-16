#include <stdio.h>
int main()
{
int n,i,j,k,a,f,c,l,m,x=0;
printf("Enter the number of element to be entered in the array");
scanf("%d",&n);
int arr[n],brr[n];
for (a=0;a<=n-1;a++)
{
    f=a+1;
    printf("\nEnter %d element of the array",f);
    scanf("%d",&arr[a]);
}
for (i=0;i<=n-1;i++)
{
   c=0;
   for (l=0;l<=n-1;l++)
{
    if(arr[i]==brr[l])
        c=c+1;
}
if (c==0)
{
  brr[x]=arr[i];
  x++;
  int d=0;
  for (m=0;m<=n-1;m++)
{
    if(arr[i]==arr[m])
        d=d+1;
}
printf("\nFrequency of %d is %d",arr[i],d);
}
}
return 0;
}
