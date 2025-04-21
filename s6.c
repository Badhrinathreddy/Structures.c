#include <stdio.h>

struct Student {
    int roll;
    char name[30];
    float marks;
};

int main() {
    struct Student s[3];
    int i, maxIndex = 0;

    for (i = 0; i < 3; i++) {
        printf("Enter details for student %d:\n", i + 1);
        scanf("%d %s %f", &s[i].roll, s[i].name, &s[i].marks);
    }

    for (i = 1; i < 3; i++) {
        if (s[i].marks > s[maxIndex].marks) {
            maxIndex = i;
        }
    }

    printf("\nTop Scorer:\nRoll: %d, Name: %s, Marks: %.2f\n", 
           s[maxIndex].roll, s[maxIndex].name, s[maxIndex].marks);

    return 0;
}
