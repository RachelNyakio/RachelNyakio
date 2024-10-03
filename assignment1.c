#include <iostream>

int main() {
    int age;
    float income;

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter income: ");
    scanf("%f", &income);

    if (age >= 21 && income >= 2100) {
        printf("Congratulations.\n");
    } else {
        printf("Sorry, try next time.\n");
    }

    return 0;
}
