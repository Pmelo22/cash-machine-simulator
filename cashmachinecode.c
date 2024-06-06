#include <stdio.h>
#include <stdlib.h>

// Functions for ATM operations
void viewBalance(float balance) {
    printf("Your current balance is: $ %.2f\n", balance);
}

float depositMoney(float balance) {
    float deposit;
    printf("Enter the amount to deposit: $ ");
    scanf("%f", &deposit);

    balance += deposit;
    printf("Amount successfully deposited!\n");
    printf("Your new balance is: $ %.2f\n", balance);

    return balance;
}

float withdrawMoney(float balance) {
    float withdrawal;
    printf("Enter the amount to withdraw: $ ");
    scanf("%f", &withdrawal);

    if (withdrawal <= balance) {
        balance -= withdrawal;
        printf("Please take your money.\n");
        printf("Your new balance is: $ %.2f\n", balance);
    } else {
        printf("Insufficient balance!\n");
    }

    return balance;
}

int main() {
    int option;
    float balance = 1000.0;  // Initial balance

    do {
        printf("\n----- ATM Simulator -----\n");
        printf("1. View balance\n");
        printf("2. Deposit money\n");
        printf("3. Withdraw money\n");
        printf("4. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                viewBalance(balance);
                break;
            case 2:
                balance = depositMoney(balance);
                break;
            case 3:
                balance = withdrawMoney(balance);
                break;
            case 4:
                printf("Thanks for using Patrick's ATM!\n");
                break;
            default:
                printf("Invalid option! Try again.\n");
        }
    } while (option != 4);

    return 0;
}