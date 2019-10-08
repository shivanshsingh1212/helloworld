#include <stdio.h>
int main()
{
int i,j,n,t;
printf("Enter the number of element to be entered in the array: ");
scanf("%d",&n);
int a[n];
printf("Enter elements of array:\n");
for (i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for (i=0;i<n;i++)
{
for (j=i+1;j<n;j++)
{
if (a[i]>a[j])
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
}
}
for (i=0;i<n;i++)
{
printf("%d ",a[i]);
}
}
