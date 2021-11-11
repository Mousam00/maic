#include <stdio.h>

int main(){
    int year,n,i;
    printf("enter how many times you want to run the programe ");
    scanf("%d",&n);
    
    for (i = 0; i < n; i++)
    {
        printf("Enter the year");
        scanf("%d",&year);
        if ((( year % 4 == 0) && (year%100 !=0)) || (year%400==0)&&(year%100==0))
    {
        printf("The year is leap year\n");
    }
        else
   {
       printf("not a leap year\n");
   }
   
    }
    

    return 0;
    
}
