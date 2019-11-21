#include<stdio.h>
#include<conio.h>
void main()
{
          int CP,SP,PROFIT,LOSS;
          printf("\n enter the value of CP & SP");
          scanf("%d%d",&CP,&SP);
          if(CP<SP)
          {
                    printf("\n GAIN = %d",PROFIT);
          }
          else
          {
              printf("\n SUFFER = %d",LOSS);
          }
          getch();
}
