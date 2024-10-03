-include <iostream>
using namespace std;

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

<!---
RachelNyakio/RachelNyakio is a ✨ special ✨ repository because its `README.md` (this file) appears on your GitHub profile.
You can click the Preview link to take a look at your changes.
--->
