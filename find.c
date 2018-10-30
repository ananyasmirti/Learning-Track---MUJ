#include<stdio.h>
int main()
{
    int a,c,f,i,j;
    printf("enter the limit\n");
    scanf("%d",&a);
    int ar[a];
    for(i=0;i<a;i++)
    { printf("enter the element\n");
        scanf("%d",&ar[i]);
    }
printf("enter the elemnet to be found\n");
scanf("%d",&f);
for(j=0;j<a;j++)
{
if(ar[a==f])
{c=1;
break;
}
}
if(c==1)
printf("element found\n");
else
printf("element not found\n");
return 0;
}