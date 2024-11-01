#include <stdio.h>
#include <stdlib.h>

struct student {
    char name[50];
    int marks;
};

int main() {
    struct student students[100];
    FILE *file;
    int i, count = 0, n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    printf("Enter the names and marks of %d students:\n", n);
    for (i = 0; i < n; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Marks: ");
        scanf("%d", &students[i].marks);
    }

    file = fopen("students.dat", "rb");
    if (file!= NULL) {
        for (i = 0; i < count; i++) {
            fread(students[i].name, sizeof(char), strlen(students[i].name), file);
            fread(&students[i].marks, sizeof(int), 1, file);
        }
        count += n;
    } else {
        count = n;
    }

    file = fopen("students.dat", "wb");
    if (file == NULL) {
        printf("Error opening file");
        return 1;
    }

    for (i = 0; i < count; i++) {
        fwrite(students[i].name, sizeof(char), strlen(students[i].name), file);
        fwrite(&students[i].marks, sizeof(int), 1, file);
    }

    fclose(file);
    printf("Student information updated in file\n");

    return 0;
}