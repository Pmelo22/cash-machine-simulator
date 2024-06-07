#### Header Inclusions
```c
#include <stdio.h>
#include <stdlib.h>
```
These header files are included to provide standard input/output and general utility functions. `stdio.h` is used for functions like `printf` and `scanf`, while `stdlib.h` is included for general utility functions.

#### Function Definitions

1. **viewBalance**
    ```c
    void viewBalance(float balance) {
        printf("Your current balance is: $ %.2f\n", balance);
    }
    ```
    This function takes a float `balance` as an argument and prints the current balance to the console.

2. **depositMoney**
    ```c
    float depositMoney(float balance) {
        float deposit;
        printf("Enter the amount to deposit: $ ");
        scanf("%f", &deposit);

        balance += deposit;
        printf("Amount successfully deposited!\n");
        printf("Your new balance is: $ %.2f\n", balance);

        return balance;
    }
    ```
    This function prompts the user to enter an amount to deposit. It reads the amount, adds it to the balance, and returns the updated balance.

3. **withdrawMoney**
    ```c
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
    ```
    This function prompts the user to enter an amount to withdraw. It checks if the balance is sufficient for the withdrawal. If sufficient, it deducts the amount from the balance and returns the updated balance. Otherwise, it prints an insufficient balance message.

#### Main Function

```c
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
```

1. **Variable Declarations**
    ```c
    int option;
    float balance = 1000.0;  // Initial balance
    ```
    - `option`: An integer to store the user's choice.
    - `balance`: A float to store the user's account balance, initialized to 1000.0.

2. **Main Loop**
    ```c
    do {
        printf("\n----- ATM Simulator -----\n");
        printf("1. View balance\n");
        printf("2. Deposit money\n");
        printf("3. Withdraw money\n");
        printf("4. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &option);
    ```
    This loop repeatedly presents a menu to the user and reads their choice.

3. **Switch Case**
    ```c
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
    ```
    - `case 1`: Calls `viewBalance` to display the current balance.
    - `case 2`: Calls `depositMoney` to deposit money and updates the balance.
    - `case 3`: Calls `withdrawMoney` to withdraw money and updates the balance.
    - `case 4`: Prints a thank-you message and exits the loop.
    - `default`: Prints an error message for invalid options.

4. **Loop Condition**
    ```c
    } while (option != 4);
    ```
    The loop continues until the user chooses the exit option (4).

5. **Return Statement**
    ```c
    return 0;
    ```
    The program returns 0 to indicate successful execution.
