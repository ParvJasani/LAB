#include<stdio.h>
int main(){
    FILE *fp;
    char ch;
    int chars=0,spaces=0,tabs=0,lines=0;
    fp=fopen("File.txt","w");

    if(fp == NULL){
        printf("File is not found");
        return 1;
    }
    while ((ch=fgetc(fp)) !=EOF)
    {
        chars++;

        if(ch==' '){
            spaces++;
        }
        if(ch=='/t'){
            tabs++;
        }
        if(ch=='/n'){
            lines++;
        }
    }
    printf("charactors = %d\n",chars);
    printf("spaces = %d\n",spaces);
    return 0;
}
//     

//     

//     fp = fopen("student.txt", "r");

//     if (fp == NULL) {
//         printf("File cannot be opened!");
//         return 1;
//     }

//     printf("\nStudents having more than 5 backlogs:\n");

//     while (fscanf(fp, "%d %49s %d",
//                   &s.rollno, s.name, &s.backlogs) == 3) {

//         if (s.backlogs > 5) {
//             printf("Roll Number: %d\n", s.rollno);
//         }
//     }

//     fclose(fp);

//     return 0;
// }
