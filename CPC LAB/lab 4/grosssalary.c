#include<stdio.h>
#include<math.h>

int main(){
    float bsalary,gsalary,hra,da;
    printf("type your Basic Salary");
    scanf("%f",&bsalary);

    if(bsalary>=30000){
        hra=(0.3)*bsalary;
        da=(0.95)*bsalary;
        gsalary=hra+da;
        printf("YOUR GROSS SALARY IS=%f",gsalary);
    }
    else if(bsalary>=20000){
        hra=(0.25)*bsalary;
        da=(0.90)*bsalary;
        gsalary=hra+da;
        printf("YOUR GROSS SALARY IS=%f",gsalary);
    }
    else if(bsalary>=10000){
        hra=(0.20)*bsalary;
        da=(0.80)*bsalary;
        gsalary=hra+da;
        printf("YOUR GROSS SALARY IS=%f",gsalary);
    }
    else{
        printf("YOUR INCOME IS IMAGINURY");
    }
    return 0;
}