#include<stdio.h>
int main(){
    int n,m,marks,roll,i,j;
    printf("tell the numbers of student");
    scanf("%d",&m);
    int arr[m][2];
    for(i=0;i<m;i++){
        printf("give student roll no. and marks respectivly");
        scanf("%d",&arr[i][0]);
        scanf("%d",&arr[i][1]);
    }
    printf("tell roll number");
    scanf("%d",&roll);
    for(i=0;i<m;i++){
        for(j=0;j<1;j++){
            if(roll==arr[i][0]){
                printf("%d",arr[i][1]);
            }
        }
    }
}