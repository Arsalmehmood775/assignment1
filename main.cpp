#include<stdio.h>
#include<conio.h>
int main()
{
 float amount,result;
int choice;
printf("1, for dollar\n");
printf("2, for  Euro\n");
printf("3, for Bitcoin\n");
printf("enter amount in rupee\n");
scanf ("%f",&amount);
printf("enter your choice\n");
scanf ("%d",&choice);
switch(choice)
{
case 1 :
    result=amount/155;
    printf("%f amount equal to %f dollar",amount,result);
    break;


case 2 :
    result=amount/185;
    printf("%f amount equal to %f Euro",amount,result);
    break;

case 3 :
    result=amount/9127261.04;
    printf("%f amount equal to %f Bitcoin",amount,result);
    break;

default :
    printf ("invalid choice");
}
getch();
}
