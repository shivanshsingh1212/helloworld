#include <stdio.h>
int main()
{
int a[10][10],b[10][10],c[10][10],i,j,m,n,ip,k,p,q;
printf("Input row and column of A matrix with spaces in them: ");
scanf("%d %d",&m,&n);
printf("Input row and column of B matrix with spaces in them: ");
scanf("%d %d",&k,&q);
if (n==k)
{
printf("Matrices can be multiplied");
printf("Resultant matrix is %d X %d\n",m,n);
printf("Input A matrix\n");
read_mat(a,m,n);
printf("Input B-matrix\n");
/*function call to read matrix*/
read_mat(b,k,q);
/*Multiplication of to matrices*/
for (i=0;i<m;++i)
for (j=0;j<q;++j)
{
c[i][j]=0;
for (ip=0;ip<n;++ip)
c[i][j]=c[i][j]+a[i][ip]*b[ip][j];
}
printf("Resultant of A and B matrices are :\n");
write_mat(c,m,q);
}/*end else*/
}/*end of main*/
read_mat(a,m,n)
int a[10][10],m,n;
{
int i,j;
for (i=0;i<m;i++)
for (j=0;j<n;j++)
{
printf("Enter the %d %d element\n",i,j);
scanf("%d",&a[i][j]);
}}
write_mat(a,m,n)
int a[10][10],m,n;
{
int i,j;
for (i=0;i<m;i++)
{
for (j=0;j<n;j++)
printf("%5d",a[i][j]);
printf("\n");
}
}
