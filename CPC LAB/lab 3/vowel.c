#include<stdio.h>

int main(){
    char L;
    printf("ENTER AN ALFHABET ");
    scanf("%c",&L);

    if(L=='A'|| L=='E' ||L=='I' || L=='O'|| L=='U'){
        printf("it's Vowel");
    }
    else{
        printf("it's Constant");
    }
    
    return 0;
}