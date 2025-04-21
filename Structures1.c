#include <stdio.h>

struct book {
    char title[55];
    char author[55];
    float price;
};

int main() {
    struct book b[5];
    int i;

    for (i = 0; i < 5; i++) {
        printf("Enter title, author, price of book %d:\n", i + 1);
        scanf("%s %s %f", b[i].title, b[i].author, &b[i].price);
    }

    printf("\nBook Details:\n");
    for (i = 0; i < 5; i++) {
        printf("Title: %s, Author: %s, Price: ₹%.2f\n", b[i].title, b[i].author, b[i].price);
    }

    return 0;
}
