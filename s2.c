#include <stdio.h>
struct Student 
{
    char name[50];
    int roll;
    float cgpa;
};
int main() {
    struct Student s[3];
    int i;
    for (i = 0; i < 3; i++) 
    {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Roll number: ");
        scanf("%d", &s[i].roll);
        printf("CGPA: ");
        scanf("%f", &s[i].cgpa);
    }
    printf("\nAll Student Records:\n");
    for (i = 0; i < 3; i++) {
        printf("Student %d: %s, Roll: %d, CGPA: %.2f\n",
               i + 1, s[i].name, s[i].roll, s[i].cgpa);
    }
    return 0;
}
