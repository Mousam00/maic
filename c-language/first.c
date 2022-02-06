#include <stdio.h>
// code to find the max no in arry
int main(){
    int a[]={1,4,8,9,3,2};
    int i,max=0;
    for ( i = 0; i < 6; i++)
    {
        if (max<a[i])
        {
            max=a[i];
        }
        
    }
        // printf("%d\n",a[i]);
        printf("the max no in arry is %d",max);
    
    
    return 0;
}