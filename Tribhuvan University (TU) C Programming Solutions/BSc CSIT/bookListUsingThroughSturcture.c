#include <stdio.h>

struct booklist {
    char title[30];
    char author[30];
    int cost;
};

int main() {
    struct booklist book[4];
    int totalCost = 0;

    printf("...............Entering Into BookList...............\n");
int i;
    for (i = 0; i < 4; i++) {
        printf("Enter %d book name/title: ", i + 1);
        scanf(" %[^\n]", book[i].title);  // Space before %[^\n] handles previous newline

        printf("Enter %d book author: ", i + 1);
        scanf(" %[^\n]", book[i].author);

        printf("Enter %d book cost: ", i + 1);
        scanf("%d", &book[i].cost);

        totalCost += book[i].cost;
    }

    printf("\n...............BookList Details...............\n");

    for (i = 0; i < 4; i++) {
        printf("Book %d:\n", i + 1);
        printf("Title : %s\n", book[i].title);
        printf("Author: %s\n", book[i].author);
        printf("Cost  : %d\n\n", book[i].cost);
    }

    printf("Total Cost of all books: %d\n", totalCost);

    return 0;
}

