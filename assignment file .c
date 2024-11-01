#include <stdio.h>
#include <stdlib.h>
#define MAX_STUDENTS 5

struct student {
    char name[50];
    int marks;
};

int main() {
    struct student students[MAX_STUDENTS];
    FILE *file;
    int i, count = 0;
    printf("Enter and marks of %d students:\n", MAX_STUDENTS);
    for (i = 0; i < MAX_STUDENTS; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Marks: ");
        scanf("%d", &students[i].marks);
    }

    file = fopen("students.dat", "wb");
    if (file == NULL) {
        printf("Error opening file");
        return 1;
    }

    for (i = 0; i < MAX_STUDENTS; i++) {
        fwrite(students[i].name, sizeof(char), strlen(students[i].name), file);
        fwrite(&students[i].marks, sizeof(int), 1, file);
    }

    fclose(file);
    printf("Student information saved to file\n");

    return 0;
    }