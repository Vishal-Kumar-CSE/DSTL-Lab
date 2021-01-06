#include<stdio.h>
void main()
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
    {
        printf("%3d", c[i]);
    }


}
