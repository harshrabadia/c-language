#include<stdio.h>
#include<conio.h>
main()
{
      int a,b,c ;
      clrscr();
      printf("Enter the value of a : ");
      scanf("%d",&a);
      printf("Enter the value of b : ");
      scanf("%d",&b);
      c = a;
      a = b;
      b = c;
      printf(" a = %d",a);
      printf(" b = %d",b);

      getch();
}