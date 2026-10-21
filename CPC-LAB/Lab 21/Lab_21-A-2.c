#include<stdio.h>
#include<string.h>

struct book{
    char title[1000];
    char author[1000];
    char publication[1000];
    int price;
};
void main(){

    struct book book1;
    printf("give the name of book:");
    scanf(" %s",book1.title);

    printf("give the name of author:");
    scanf(" %s",book1.author);

    printf("give the name of publication:");
    scanf(" %s",book1.publication);

    printf("give the price of book: ");
    scanf("%d",&book1.price);

    struct book book2;
    printf("give the name of book:");
    scanf(" %s",book2.title);

    printf("give the name of author:");
    scanf(" %s",book2.author);

    printf("give the name of publication:");
    scanf(" %s",book2.publication);

    printf("give the price of book: ");
    scanf("%d",&book2.price);

    struct book book3;
    printf("give the name of book:");
    scanf(" %s",book3.title);

    printf("give the name of author:");
    scanf(" %s",book3.author);

    printf("give the name of publication:");
    scanf(" %s",book3.publication);

    printf("give the price of book: ");
    scanf("%d",&book3.price);


    printf("Book1 name : %s\n",book1.title);
    printf("Book1 author : %s\n",book1.author);
    printf("Book1 publication : %s\n",book1.publication);
    printf("Book1 price : %d\n",book1.price);

    printf("Book2 name : %s\n",book2.title);
    printf("Book2 author : %s\n",book2.author);
    printf("Book2 publication : %s\n",book2.publication);
    printf("Book2 price : %d\n",book2.price);

    printf("Book3 name : %s\n",book3.title);
    printf("Book3 author : %s\n",book3.author);
    printf("Book3 publication : %s\n",book3.publication);
    printf("Book3 price : %d\n",book3.price);
}