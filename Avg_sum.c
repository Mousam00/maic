#include <studio.h>

int main(){
    int n,i,sum=0,avg;
    printf("enter the no.\n");
    scanf("%d",&n);
    for (i = 0; i < n; i++)
    {
        sum=sum+i;
    }
    avg=sum/n;
    printf("your sum of n number is %d\n",sum);
    printf("And average is %d",avg);
    return 0;
}
