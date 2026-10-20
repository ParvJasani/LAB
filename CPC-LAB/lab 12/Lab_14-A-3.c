#include<stdio.h>
int main(){
    int n,i,odd=0,even=0;
    printf("tell me how many numbers do you have to add");
    scanf("%d",&n);

    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]%2!=0){
            odd++;
        }
        else{
            even++;
        }
    }
    printf("even numbers=%d\n",even);
    printf("odd numbers=%d",odd);
}