#include<stdio.h>
void indian();
void french();
int main(){
    printf("if you are indian then type 'I' otherwisec'F'");
    char ch;
    scanf("%c",ch);
    if(ch=='I'){
        indian();
    }
    else{
        french();
    }
return 0;
}
void indian() {
    printf("namaste");
}
void french() {
    printf("hello");
}


