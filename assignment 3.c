#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 100

// Function to write user input to a file
void writeToFile(char *sentence) {
 FILE *file = fopen("data.txt", "w");
 if (file == NULL) {
 printf("Error opening file for writing\n");
 return;
 }
 fprintf(file, "%s", sentence);
 if (ferror(file)) {
 printf("Error writing to file\n");
 }
 fclose(file);
}

// Function to read content from a file and display it
void readFromFile() {
 FILE *file = fopen("data.txt", "r");
 if (file == NULL) {
 printf("Error opening file for reading\n");
 return;
 }
 char line[MAX_LENGTH];
 while (fgets(line, MAX_LENGTH, file)!= NULL) {
 printf("%s", line);
 }
 if (ferror(file)) {
 printf("Error reading from file\n");
 }
 fclose(file);
}

// Function to append a sentence to a file
void appendToFile(char *sentence) {
 FILE *file = fopen("data.txt", "a");
 if (file == NULL) {
 printf("Error opening file for appending\n");
 return;
 }
 fprintf(file, "%s", sentence);
 if (ferror(file)) {
 printf("Error writing to file\n");
 }
 fclose(file);
}

int main() {
 char sentence[MAX_LENGTH];
 int choice;

 do {
 printf("\nMenu:\n");
 printf("1. Write a sentence to data.txt\n");
 printf("2. Read data.txt\n");
 printf("3. Append a sentence to data.txt\n");
 printf("4. Quit\n");
 printf("Enter your choice: ");
 scanf("%d", &choice);

 switch (choice) {
 case 1:
 printf("Enter a sentence: ");
 fgets(sentence, MAX_LENGTH, stdin);
 writeToFile(sentence);
 printf("Sentence written to data.txt\n");
 break;
 case 2:
 readFromFile();
 printf("Content read from data.txt\n");
 break;
 case 3:
 printf("Enter a sentence to append: ");
 fgets(sentence, MAX_LENGTH, stdin);
 appendToFile(sentence);
 printf("Sentence appended to data.txt\n");
 break;
 case 4:
 printf("Goodbye!\n");
 return 0;
 default:
 printf("Invalid choice\n");
 break;
 }
 } while (choice!= 4);

 return 0;
}