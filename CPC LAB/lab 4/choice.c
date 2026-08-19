#include<stdio.h>
#include<math.h>

int main(){
    int n1,n2,a,add,sub,mul,div;
    printf("give a number A:");
    scanf("%d",&n1);

    printf("give a number B:");
    scanf("%d",&n2);

    printf("type 1 for add,2 for sub,3 for mul. and 4 for divition");
    scanf("%d",&a);

    if(a==1){
        add = n1 + n2;
        printf("Sum of two numbers is %d",add);
    }
    else if(a==2){
        sub = n1 - n2;
        printf("Sum of two numbers is %d",sub);
    }
    else if(a==3){
        mul = n1 * n2;
        printf("Sum of two numbers is %d",mul);
    }
    else if(a==4){
        div = n1 / n2;
        printf("Sum of two numbers is %d",div);
    }
    else{
        printf("invalide numbers");
    }
    return 0;
}