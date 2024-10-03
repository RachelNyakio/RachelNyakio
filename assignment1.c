// question one
#include <stdio.h>

int main() {
    int age;
    float income;

    // Prompt the user for their age and income
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your annual income in Ksh: ");
    scanf("%f", &income);

    // Check if the customer qualifies for a loan
    if (age >= 21 && income >= 21000) {
        printf("Congratulations you qualify for a loan.\n");
    } else {
        printf("Unfortunately, we are unable to offer you a loan at this time.\n");
    }

    return 0;
}


// questiontwo

#include <stdio.h>

int main() {
    int bookID, dueDate, returnDate, daysOverdue;
    float fineRate, fineAmount;

    // Prompt the user for book details
    printf("Enter Book ID: ");
    scanf("%d", &bookID);
    printf("Enter Due Date (in days, as an integer): ");
    scanf("%d", &dueDate);
    printf("Enter Return Date (in days, as an integer): ");
    scanf("%d", &returnDate);

    // Calculate the number of days overdue
    daysOverdue = returnDate - dueDate;

    // Determine the fine rate based on days overdue
    if (daysOverdue <= 7) {
        fineRate = 20.0;
    } else if (daysOverdue <= 14) {
        fineRate = 50.0;
    } else {
        fineRate = 100.0;
    }

    // Calculate the total fine amount
    fineAmount = daysOverdue * fineRate;

    // Display the results
    printf("\nBook ID: %d\n", bookID);
    printf("Due Date: %d\n", dueDate);
    printf("Return Date: %d\n", returnDate);
    printf("Days Overdue: %d\n", daysOverdue);
    printf("Fine Rate: Ksh %.2f per day\n", fineRate);
    printf("Total Fine Amount: Ksh %.2f\n", fineAmount);

    return 0;
}

