//structure 3
#include <stdio.h>

struct Book {

    char title[100];
    char author[100];
    float price;
    int publicationYear;

};

int main() {
    int n;
    printf("Enter the number of books: ");
    scanf("%d", &n);

    struct Book books[n];

    for (int i = 1; i <= n; i++) {
        printf("\nEnter details for Book %d:\n", i);
        printf("Title: ");
        scanf(" %s", books[i].title);
        printf("Author: ");
        scanf(" %s", books[i].author);
        printf("Price: ");
        scanf("%f", &books[i].price);
        printf("Publication Year: ");
        scanf("%d", &books[i].publicationYear);
    }

    printf("\nBook Details:\n");
    for (int i = 1; i <= n; i++) {
        printf("Book %d:\n", i );
        printf("Title: %s\n", books[i].title);
        printf("Author: %s\n", books[i].author);
        printf("Price: %.2f\n", books[i].price);
        printf("Publication Year: %d\n", books[i].publicationYear);
        printf("\n");
    }

    return 0;
}


