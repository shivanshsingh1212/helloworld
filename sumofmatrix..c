#include <stdio.h>
int main()
{
int m,n,p,q,a[10][10],b[10][10],s[10][10],i,j;
printf("Enter number of rows and colomn in first matrix wth spaces in them: ");
scanf("%d %d",&m,&n);
printf("Enter number of rows and colomn in second matrix with spaces in them: ");
scanf("%d %d",&p,&q);
if (m==p && p==q)
{
printf("Enter the entries of first matrix\n");
for (i=0;i<m;i++)
{
for (j=0;j<n;j++)
{
printf("Enter element number %d %d\n",i,j);
scanf("%d",&a[i][j]);
}
}
printf("Enter the entries of second matrix\n");
for (i=0;i<m;i++)
{
for (j=0;j<n;j++)
{
printf("Enter element number %d %d\n",i,j);
scanf("%d",&b[i][j]);
}
}
for (i=0;i<m;i++)
{
for (j=0;j<n;j++)
{
s[i][j]=a[i][j]+b[i][j];
}
}
printf("Sum of entered matrix is:\n");
for (i=0;i<m;i++)
{
for (j=0;j<n;j++)
{
printf("%d ",s[i][j]);
}
printf("\n");
}
}
else
printf("Entered matrix can not be added");
}
