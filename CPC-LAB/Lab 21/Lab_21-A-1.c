#include<stdio.h>
#include<string.h>

struct employee
{
    int id;
    char name[50];
    float salary;
    char department[50];
};

void main(){
    struct employee emp1;
    printf("give employee id: \n");
    scanf("%d",&emp1.id);
    printf("give employee Name:");
    scanf(" %s",emp1.name);
    printf("give employee salary: \n");
    scanf("%f",&emp1.salary);
    printf("give employee department: \n");
    scanf(" %s",emp1.department);

    printf("employee id: %d\n",emp1.id);
    printf("employee Name: %s\n",emp1.name);
    printf("employee salary: %f\n",emp1.salary);
    printf("employee department: %s\n",emp1.department);
}
