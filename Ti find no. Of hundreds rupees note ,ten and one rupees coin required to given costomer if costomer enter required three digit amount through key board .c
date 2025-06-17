#include <stdio.h>
int main() {
    int amount, hundreds, tens, ones;
    // Prompt user to enter a three-digit amount
    printf("Enter a three-digit amount in rupees: ");
    scanf("%d", &amount);
    // Check if the amount is a three-digit number
    if (amount < 100 || amount > 999) {
        printf("Please enter a valid three-digit amount!\n");
        return 1;
    }
    // Calculate number of 100-rupee notes
    hundreds = amount / 100;
    amount = amount % 100; // Remaining amount after 100s
    // Calculate number of 10-rupee notes
    tens = amount / 10;
    amount = amount % 10; // Remaining amount after 10s
    // Calculate number of 1-rupee coins
    ones = amount;
    // Print the result
