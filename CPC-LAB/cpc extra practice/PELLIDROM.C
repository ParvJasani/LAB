    #include<stdio.h>
    #include<string.h>

    int main(){
        char str[1000];
        int flag=0;
        printf("Give the string\n");
        gets(str);

        int len= strlen(str);

        for(int i=0;i<=len/2;i++){
            if(str[i]!= str[len-i-1]){
                flag=1;
                break;
            }
        }
        if(flag==1){
            printf("given string is not a palidrom");
        }
        else{
            printf("given string is a palidrom");
        }
    }