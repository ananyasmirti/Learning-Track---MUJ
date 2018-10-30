#include<stdio.h>
int main()
{
    int a,t,h,i,j;
    printf("enter the limit\n");
    scanf("%d",&a);
    int ar[a];
    for(i=0;i<a;i++)
    { printf("enter the element\n");
        scanf("%d",&ar[i]);
    }


    t=ar[0];
    h=ar[0];
for(j=0;j<a;j++)
{
    if(t>ar[j])
    t=ar[j];
    if(h<ar[j])
    h=ar[j];
}
printf("smallest element is %d\n",t);
printf("largest element is %d\n",h);
return 0;
}