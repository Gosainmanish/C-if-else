#include<stdio.h>
main()
{
          float a,b,c;
          printf("\n enter the value of a , b & c ");
          scanf("%f%f%f",&a,&b,&c);
          printf("\n a=%f",a);
          printf("\n b=%f",b);
             printf("\n c=%f",c);
             if (a>b)
             {
                       if (a>c)
                              printf("\n largest number=%f",a);
                       else
                              printf("\n largest number=%f",c);
             }
             else if (c>b)
                 printf("\n largest number=%f",c);
             else
                    printf("\n largest number=%f",b);
          return 0;
}
