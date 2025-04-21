#include <stdio.h>

struct Student {
    int id;
    float marks;
};

int main() {
    struct Student s1 = {1, 95.5};
    struct Student *ptr = &s1;

    printf("ID = %d\n", ptr->id);
    printf("Marks = %.2f\n", ptr->marks);

    return 0;
}
