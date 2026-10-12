#include <stdio.h>
#include <string.h>

int main()
{
    char str1[2000], str2[2000];
    int i, j, k, flag,count = 0;
    printf("Give the first string\n");
    gets(str1);

    printf("Which char position do you have to know\n");
    gets(str2);

    for (i = 0; str1[i] != '\0'; i++)
    {
        if (str1[i] == str2[0])
        {
            break;
        }
    }
    for(i=0;str2[i] !='\0';i++){
        for(j=0;str1[j]!='\0';j++){
            if(str2[i]==str1[j]){
                 flag=1;
            }
            else{
                flag=0;
            }
        }
        count++;
    }
    for(i=count;str1[i]!='\0';i++){
        printf("%c",str1[i]);
    }

}