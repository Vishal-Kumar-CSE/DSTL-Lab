#include<stdio.h>
int flag,i,j,k;
void main()
{   int m,n,ch;
    printf("enter the no. of element in set A\t");
    scanf("%d", &m);
    int a[m];
    printf("enter the elements..\n");
    for(i=0; i<m; i++)
    {
       scanf("%d", &a[i]);
    }
    printf("entered elements in set A : \n");
    for(i=0; i<m; i++)
    {
    printf("%d\n", a[i]);
    }
    printf("enter the no. of element in set B\t");
    scanf("%d", &n);
    int b[n];
    printf("enter the elements..\n");
    for(i=0; i<n; i++)
    {

        scanf("%d", &b[i]);
    }
    printf("entered elements in set B : \n");
    for(i=0; i<n; i++)
    {
    printf("%d\n", b[i]);
    }
  printf("\n1.Union\n2.Intersection\n3.Set Difference\n4.Symmetric Differene\nEnter your choice\t");
  scanf("%d", &ch);
  switch(ch)
  {
      case 1: unio(a,b,m,n);
      break;
    case 2: inter(a,b,m,n);
    break;
    case 3: set_diff(a,b,m,n);
    break;
    case 4: sym_diff(a,b,m,n);
    break;
      default: printf("Wrong");
  }
}
void unio(int a[],int b[],int m, int n)
{
    int c[20];
    printf("----------------------------\n");
    k=0;
    flag=0;
    for(i=0; i<m; i++)
    {
        c[k]=a[i];
        k++;
    }
    for(i=0; i<n; i++)
    {   flag=0;
        for(j=0; j<m; j++)
        {
            if(b[i]==c[j])

        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        c[k]=b[i];
        k++;
    }
    }
    printf(" The Resultant A U B is\n");
    for(i=0; i<k; i++)

        printf("%3d", c[i]);

}
void inter(int a[],int b[], int m, int n)
{
     printf("----------------------------\n");
    printf("\nIntersection is \t");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
           if(b[i]==a[j])
            flag=1;
}
if(flag==1)
printf("%3d", b[i] );

flag=0;
    }

}
void set_diff(int a[], int b[], int m, int n)
{
     int c[20];
      printf("\nA-B ={ ");
   for(i=0;i<m;i++)
{
flag=1;
for(j=0;j<n;j++)
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
	 printf("%d }",c[i]);
	 }
}
void sym_diff(int a[], int b[], int m, int n)
{
    int c[20];
    printf("\nSymmetric Difference is (A-B)U(B-A) ={ ");
   for(i=0;i<m;i++)
{
flag=0;
for(j=0;j<n;j++)
{
if(a[i]==b[j])
{
flag=1;
break;
}
}
if(flag==0)

c[k++]=a[i];


} for(i=0;i<n;i++){
      flag=0;
      for(j=0;j<m;j++)
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










