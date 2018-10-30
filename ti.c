#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,b,c,i,j,k,h,f,w,u;
        scanf("%d",&a);
   
    for(i=1;i<=a;i++)
    { 
        scanf("%d",&b);
        int ar[b],t[b],g[b];
        
        for(j=0;j<b;j++)
        {
            scanf("%d",&ar[j]);
        }
            for(k=0;k<b;k++)
            { for(h=0;h<b;h++)
               {if(ar[k]==ar[h])
                    c++;
                }
            
            t[k]=c;
             g[k]=ar[k];
             c=0;
            }
           for(h=0;h<b;h++)
        {if(t[h]%2!=0)
             { u=g[h];
               f++;
             }
             else 
        { w++;
              
        }
        }
        if(f>0 && w>0)
        {  printf("YES %d\n",u);
         
        }
            if(w>0 && f==0)
            { printf("NO\n");
               
            }
        u=0;
        w=0;
        f=0;
        }
     
    
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
