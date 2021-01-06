#include<stdio.h>
void main()
{
    int n,i,j,m,k=0,l=0, flag,c[5],d[10],flag2;
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
    printf("\nA-B ={ ");
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

c[k++]=a[i];


}
for(i=0;i<k;i++){
      if(i!=k-1)
	 printf("%d,",c[i]);
      else
	 printf("%d }",c[i]);}


/*printf("\nB-A = ");
  for(i=0;i<m;i++)
{
flag2=1;
for(j=0;j<n;j++)
{
if(b[i]==a[j])
{
flag2=0;
break;
}
}
if(flag2==1)
{
d[l++]=b[i];
}
}
int q=l;
for(l=0;l<q;l++)

{
printf(" \t%d", d[l]);
}
*/

}








