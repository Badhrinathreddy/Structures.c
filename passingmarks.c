#include <stdio.h>

struct Student
{
    int roll;
    float marks;
};
int main() 
{
    struct Student s[3];
    int i;

    for (i = 0; i < 3; i++) {
        printf("Enter roll and marks for student %d: ", i + 1);
        scanf("%d %f", &s[i].roll, &s[i].marks);
    }
    printf("\nStudents Who Passed:\n");
    for (i = 0; i < 3; i++) {
        if (s[i].marks >= 35) {
            printf("Roll: %d, Marks: %.2f\n", s[i].roll, s[i].marks);
        }
    }

    return 0;
}
