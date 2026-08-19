#include<stdio.h>
#include<math.h>

int main(){
    int n1,n2,a,add,sub,mul,div;
    printf("give a number A:");
    scanf("%d",&n1);

    printf("give a number B:");
    scanf("%d",&n2);

    printf("type 1 for add,2 for sub,3 for mul. and 4 for divisions");
    scanf("%d",&a);

    switch(a)
    {
        case 1:{
            printf("Sum of two numbers is %d",n1+n2);
            break;
        }
        case 2:{
            printf("Sum of two numbers is %d",n1-n2);
            break;
        }
        case 3:{
            printf("Sum of two numbers is %d",n1*n2);
            break;
        }
        case 4:{
            printf("Sum of two numbers is %d",n1/n2);
            break;
        }
        default:{
            printf("invalid number");
            break;
        }
    }
}