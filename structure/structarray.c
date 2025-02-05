#include <stdio.h>
void main()
{
    struct book{
        char name; float price;int pages;
    };
    struct book b;
    
        printf("Enter the name, price and number of pages of book");
        scanf("%c %f %d",&b.name,&b.price,&b.pages);
        // while((dn=getchar())!='\n');
        fflush(stdin);
    printf("Name %c  Price = %f  No. of pages = %d",b.name,b.price,b.pages);

}
