#include<stdio.h>
int main()
{
    int a,i,j,c,d;
    printf("enter the limit\n");
    scanf("%d",&a);
    int ar[a];
    for(i=0;i<a;i++)
    { printf("enter the element\n");
      scanf("%d",&ar[i]);
    }
    printf("enter the indices from where to where printing is to be done\n");
    scanf("%d%d",&c,&d);
    for(j=c;j<=d;j++)
    {
       printf("%d ",ar[j]);
    }
    return 0;
}