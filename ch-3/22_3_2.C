#include<stdio.h>
#include<conio.h>
main()
{
     int a,b ;
     clrscr();
     printf("Value of a : ");
     scanf("%d",&a);
     printf("Value of b : ");
     scanf("%d",&b);
     a = b ;
     b = a ;
     printf("a = %d",a);
     printf("b = %d",b);
     getch();

}