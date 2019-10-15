#include <stdio.h>
int main()
{
int m,n,p,q,a[10][10],t[10][10],i,j;
printf("Enter number of rows and colomn in first matrix: ");
scanf("%d %d",&m,&n);
printf("Enter the entries of first matrix\n");
for (i=0;i<m;i++)
{
for (j=0;j<n;j++)
{
printf("Enter element number %d %d\n",i,j);
scanf("%d",&a[i][j]);
}
}
for (i=0;i<n;i++)
{
for (j=0;j<m;j++)
{
t[i][j]=a[j][i];
}
}
for (i=0;i<n;i++)
{
for (j=0;j<m;j++)
{
printf("%d ",t[i][j]);
}
printf("\n");
}
return 0;
}
