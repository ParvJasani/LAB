#include<stdio.h>
#include<math.h>

int main(){
    char ch;
    printf("Give any one digit,number or character");
    scanf("%c",&ch);


    if(ch>='A' && ch<='Z'){
        printf("%c is upper case character",ch);
    }
    else if(ch>='a' && ch<='z'){
        printf("%c is lower case character",ch);
    }
    else if(ch>='0' && ch<='9'){
        printf("%c is integer",ch);
    }
    else{
        printf("special input");
    }
    return 0;
}