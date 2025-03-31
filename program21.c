/*
 * Program: Simple Banking System
 * --------------------------------
 * This program simulates a simple banking system with the following functionalities:
 * 
 * 1. Deposit Money: Allows the user to add money to their account balance.
 * 2. Withdraw Money: Enables the user to withdraw money from their account, ensuring sufficient funds are available.
 * 3. Check Balance: Displays the current balance of the user's account.
 * 4. Exit: Terminates the program.
 * 
 * The program ensures input validation for deposit and withdrawal transactions.
 * 
 * Example:
 * - Input: Deposit 100, Withdraw 50, Check Balance
 * - Output: "Successfully deposited 100.00. New balance: 100.00"
 *           "Successfully withdrew 50.00. New balance: 50.00"
 *           "Your current balance is: 50.00"
 */

#include <stdio.h>

// Function prototypes
void displayMenu();
void deposit(float *balance);
void withdraw(float *balance);
void checkBalance(float balance);

int main()
{
    float balance = 0.0; // Initial balance
    int choice;

    do
    {
        displayMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            deposit(&balance);
            break;
        case 2:
            withdraw(&balance);
            break;
        case 3:
            checkBalance(balance);
            break;
        case 4:
            printf("Exiting the program. Thank you!\n");
            break;
        default:
            printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}

// Function to display the menu
void displayMenu()
{
    printf("\n--- Banking System Menu ---\n");
    printf("1. Deposit Money\n");
    printf("2. Withdraw Money\n");
    printf("3. Check Balance\n");
    printf("4. Exit\n");
}

// Function to deposit money
void deposit(float *balance)
{
    float amount;
    printf("Enter the amount to deposit: ");
    scanf("%f", &amount);
    if (amount > 0)
    {
        *balance += amount;
        printf("Successfully deposited %.2f. New balance: %.2f\n", amount, *balance);
    }
    else
    {
        printf("Invalid amount. Deposit failed.\n");
    }
}

// Function to withdraw money
void withdraw(float *balance)
{
    float amount;
    printf("Enter the amount to withdraw: ");
    scanf("%f", &amount);
    if (amount > 0 && amount <= *balance)
    {
        *balance -= amount;
        printf("Successfully withdrew %.2f. New balance: %.2f\n", amount, *balance);
    }
    else if (amount > *balance)
    {
        printf("Insufficient balance. Withdrawal failed.\n");
    }
    else
    {
        printf("Invalid amount. Withdrawal failed.\n");
    }
}

// Function to check the balance
void checkBalance(float balance)
{
    printf("Your current balance is: %.2f\n", balance);
}