#include<stdio.h>
void main()
{
    int n,i,j,m,k=0,flag,c[5];
    printf("\nEnter no. of elements in Universal set\t");
    scanf("%d", &n);
    int a[n];
 printf("\nElemenets in Universal Set");
for(i=0; i<n; i++)
{
  a[i]=i+1;
  printf("%5d", a[i]);
}
    printf("\nEnter no. of elements in set\t");
    scanf("%d", &m);
    int b[m];
    printf("\nEnter the elements...\n");
    for(i=0; i<m; i++)
    {
        scanf("%d", &b[i]);
    }
    printf("\nComplement of A or U-A = ");
   for(i=0;i<n;i++)
{
flag=1;
for(j=0;j<m;j++)
{
if(a[i]==b[j])
{
flag=0;
break;
}
}
if(flag==1)
{
c[k]=a[i];
k++;
}
}

for(i=0;i<k;i++)


printf("\t%d",c[i]);



}








