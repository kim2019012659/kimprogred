#include <stdio.h>
#include <stdlib.h>

struct book_information
{
    char title[80];
    char author[80];
    int page;
    int price;
};


int main()
{


    struct book_information list[3] = {
       {"The French Laundry, Per Se", "Thomas Keller", 400 ,95000},
       {"Batman: Year One", "Frank Miller", 144, 19400},
       {"Billy Summers", "Stephen King", 608, 16500}
    };

    for (int i = 0; i < 3; i++)
        printf("%s\t%s\t%d\t%d\n", list[i].title, list[i].author, list[i].page, list[i].price);

    return 0;
}