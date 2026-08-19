#include<stdio.h>

int main(){
int num;
printf("ENTER current month(1-12)");
scanf("%d",&num);

switch (num)
{
case 1:{
    printf("No. of days in month is:31");
    break;}

case 2:{
    printf("No. of days in month is:28");
    break;}

case 3:{
    printf("No. of days in month is:31");
    break;}

case 4:{
    printf("No. of days in month is:30");
    break;}

case 5:{
    printf("No. of days in month is:31");
    break;}

case 6:{
    printf("No. of days in month is:30");
    break;}

case 7:{
    printf("No. of days in month is:31");
    break;}

case 8:{
    printf("No. of days in month is:31");
    break;}

case 9:{
    printf("No. of days in month is:30");
    break;}

case 10:{
    printf("No. of days in month is:31");
    break;}

case 11:{
    printf("No. of days in month is:30");
    break;}

case 12:{
    printf("No. of days in month is:31");
    break;}

default:printf("invalid number");
    break;
}
return 0;
}