#include<stdio.h>
#include<conio.h>
void main()
{
int x1,x2,x3,x4,y1,y2,y3,y4,a1,a2,a3,a4,b1.b2,b3,b4;
clrscr();
scanf("%d,%d",x1,y1);
printf("(%d,%d)",x1,y1);
x2=x1;
scanf("%d",&y2);
printf("(%d,%d)",x2,y2);
y3=y1;
scanf("%d",&x3);
printf("(%d,%d)",x3,y3);
x4=x3;
y4=y2;
printf("(%d,%d)",x4,y4);
scanf("%d,%d",a1,b1);
printf("(%d,%d)",a1,b1);
a2=a1;
scanf("%d",&b2);
printf("(%d,%d)",a2,b2);
b3=b1;
scanf("%d",&a3);
printf("(%d,%d)",a3,b3);
a4=a3;
b4=b2;
printf("(%d,%d)",a4,b4);
if((x1<=a1&&x2<=b2)&&(x3<=b3&&x4<=b4))
{
printf("False");
}
else
{
printf("True");
}
getch();
}
