#include<stdio.h>
int main()
{
    int c,r,k,l,t,m,n,s,b,d,i,j;
    printf("enter the no. of rows and columns\n");
    scanf("%d %d",&r,&c);
    int a[r][c];
    for(i=0;i<r;i++)
   { 
         for(j=0;j<c;j++)
         {
             printf("enter the element\n");
             scanf("%d",&a[i][j]);

         }
   }
    for(b=0;b<r;b++)
   { 
         for(d=0;d<c;d++)
         {
             
            printf("%d",a[b][d]);

         }
         printf("\n");
   }

 
   for(k=0;k<r;k++)
   { t=a[k][0];
       for(l=0;l<c;l++)
       {
           
           if(t>a[k][l])
           t=a[k][l];

       }
       printf("the smallest no of row %d is %d\n",(k+1),t);
       s=s+t;
   }
  
for(m=0;m<c;m++)
   { t=a[0][m];
       for(n=0;n<r;n++)
       {
         
           if(t>a[n][m])
           t=a[n][m];

       }
       printf("the smallest no of column %d is %d\n",(m+1),t);
       s=s+t;
       
   }
   printf("sum:%d\n",s);
   return 0;
}