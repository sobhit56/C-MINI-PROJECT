#include <stdio.h>

int main() {
    int total_seconds;
    
    // Step 1: Ask the user to enter the total number of seconds.
    printf("Enter the total number of seconds: ");
    
    // Step 2: Read the input using scanf and store it in a variable.
    scanf("%d", &total_seconds);
    
    // Step 3: Calculate hours by dividing total seconds by 3600.
    int hours = total_seconds / 3600;
    
    // Step 4: Find remaining seconds after hours using modulus (% 3600).
    int remaining_seconds = total_seconds % 3600;
    
    // Step 5: Calculate minutes by dividing the remaining seconds by 60.
    int minutes = remaining_seconds / 60;
    
    // Step 6: Find remaining seconds after minutes using modulus (% 60).
    int seconds = remaining_seconds % 60;
    
    // Step 7: Store hours, minutes, and seconds in separate variables. (Already done above)
    
    // Step 8: Print the hours, minutes, and seconds in a readable format.
    // Step 9: Ensure proper formatting for clarity, e.g., HH:MM:SS.
    printf("Formatted time: %02d:%02d:%02d\n", hours, minutes, seconds);
    
    // Step 10: End the program.
    return 0;
}