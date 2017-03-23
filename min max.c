#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  n,i,a[20],min,max;
    printf("enter the no of elements\n");
    scanf("%d",&n);
    printf("enter the elements ");
    for(i=0;i<n;i++)
       {
           scanf("%d",a[i]);
       }
        max=a[0];
        min=a[0];
        for(i=1;i<n;i++)
        {
            if(a[i]>max)
                max=a[i];
        }
        printf("max array is &d",a[i]);

    return 0;
}
