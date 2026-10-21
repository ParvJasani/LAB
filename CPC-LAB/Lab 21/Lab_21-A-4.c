#include<stdio.h>
#include<string.h>

struct student{
    char name[1000];
    float percentage;
    int age;
};
void main()
{
    struct student st[5];
    int i;
    for(i=1;i<5;i++){
        printf("Student %d name",i);
        scanf("%s",st[i].name);

        printf("Student %d percentage",i);
        scanf("%f",&st[i].percentage);

        printf("Student %d age",i);
        scanf("%d",&st[i].age);
    }

    for (i = 1; i < 5; i++)
    {
        printf("student %d name : %s\n",i,st[i].name);
        printf("student %d percentage: %f\n",i,st[i].percentage);
        printf("student %d age : %d\n",i,st[i].age);
    }
    
}