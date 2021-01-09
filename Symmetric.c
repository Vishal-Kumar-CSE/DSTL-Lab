#include<stdio.h>
void main()
{
    int n,i,j,m,k=0,flag=0,c[20];
    printf("\nEnter no. of elements in set A\t");
    scanf("%d", &n);
    int a[n];
    printf("\nEnter the elements...\n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\nEnter no. of elements in set B\t");
    scanf("%d", &m);
    int b[m];
    printf("\nEnter the elements...\n");
    for(i=0; i<m; i++)
    {
        scanf("%d", &b[i]);
    }
    printf("\nSymmetric Difference is (A-B)U(B-A) ={ ");
   for(i=0;i<n;i++)
{
flag=0;
for(j=0;j<m;j++)
{
if(a[i]==b[j])
{
flag=1;
break;
}
}
if(flag==0)

c[k++]=a[i];


} for(i=0;i<m;i++){
      flag=0;
      for(j=0;j<n;j++)
	 if(b[i]==a[j])
	    flag=1;
      if(flag==0)
      c[k++]=b[i];
      }

for(i=0;i<k;i++)
      if(i!=k-1)
	 printf("%d,",c[i]);
      else
	 printf("%d }",c[i]);


}








