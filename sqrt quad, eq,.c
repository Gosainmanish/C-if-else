#include<stdio.h>
#include<math.h>
main()
{
          float a,b,D,x1,x2,c,Z;
          int x3;
    printf("\n enter the value of a & b & c");
    scanf("%f%f%f",&a,&b,&c);
    printf("\n a=%f",a);
     printf("\n b=%f",b);
    printf("\n c=%f",c);
    D=pow(b,2)-4*a*c;
Z=sqrt(D);
    if (D>0)
          {
                    x1=-b+Z/2*a;
                    x2=-b-Z/2*a;
          }
          else
                    x3=-b/2*a;
printf("\n X=%f",x1);
printf("\n X=%f",x2);
printf("\n X=%d",x3);
          return 0;
}
