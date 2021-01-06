#include<stdio.h>
int main()
{

    int m,n,a[20], b[20], c[10],k,flag,i,j;
    printf("enter the no. of element in set A\t");
    scanf("%d", &m);
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

    printf("----------------------------\n");
    printf("\nIntersection is \t");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
           if(a[i]==b[j])
            flag=1;
}
if(flag==1)
{
    printf("%3d", a[i] );
}
flag=0;
    }
    return 0;
    }


