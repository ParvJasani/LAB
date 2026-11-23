#include <stdio.h>

struct Student
{
    int rollno;
    char name[50];
    int backlogs;
};

int main()
{
    struct Student s;
    FILE *fp;
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    fp = fopen("student.txt", "w");

    if (fp == NULL)
    {
        printf("File cannot found");
        return 1;
    }
    for (i = 0; i < n; i++)
    {
        printf("\nEnter Roll Number: ");
        scanf("%d", &s.rollno);

        printf("Enter Name: ");
        gets(s.name);

        printf("Enter Backlogs: ");
        scanf("%d", &s.backlogs);

        fprintf(fp, "%d %s %d\n",
                s.rollno, s.name, s.backlogs);
    }
    fclose(fp);
    fp = fopen("student.txt", "r");
    if (fp == NULL)
    {
        printf("File cannot found");
        return 1;
    }
     printf("\nStudents having more than 5 backlogs:\n");

    while (fscanf(fp, "%d %49s %d",
                  &s.rollno, s.name, &s.backlogs) == 3) {

        if (s.backlogs > 5) {
            printf("Roll Number: %d\n", s.rollno);
        }
    }

    fclose(fp);

    return 0;
}