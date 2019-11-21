#include<stdio.h>
#include<conio.h>
void main()
{
          int a,b,c;
          printf("Enter the values of a ,b , c \n");
scanf("%d%d%d",&a,&b,&c);
if (a>b)
{
          if(a>c)
          {
              printf("\n largest number %d",a );
          }
          else{
                              printf("\n largest number %d",c );

          } }
          else
          {
                    if (c>b)
          { printf("\n largest number %d",c );
        }
         else

{ printf("\n largest number %d",b );
          }
          }
          getch();
}

