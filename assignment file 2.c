#include <stdio.h>
#include <stdlib.h>

struct student {
    char name[50];
    int marks;
};

int main() {
    struct student students[100];
    FILE *file;
    int i, count = 0;

    file = fopen("students.dat", "rb");
    if (file == NULL) {
        printf("Error opening file");
        return 1;
    }

    for (i = 0; i < count; i++) {
        fread(students[i].name, sizeof(char), strlen(students[i].name), file);
        fread(&students[i].marks, sizeof(int), 1, file);
    }

    count = 5; // Assuming the file has 5 students for this example

    printf("Students:\n");
    for (i = 0; i < count; i++) {
        printf("Name: %s, Marks: %d\n", students[i].name, students[i].marks);
    }

    return 0;
}