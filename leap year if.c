#include<stdio.h>
#include<conio.h>
void main()
{
          int year;
          printf("enter the value of year \n");
          scanf("%d",&year);
          if(year%4 == 0)
          {
 printf("\n LEAP YEAR = %d", year);}
          else{
                    printf("\n NOT LEAP YEAR = %d",year);
          }
          getch();
}
