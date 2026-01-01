# C-MINI-PROJECT
Time conversion in C ⏱️
📌 Description

This program converts a given number of seconds into hours, minutes, and seconds.
It takes total seconds as input from the user and displays the time in HH:MM:SS format.

This is a beginner-friendly C program that demonstrates:

Input using scanf()

Arithmetic operations

Use of division (/) and modulus (%)

Proper output formatting using printf()

🛠️ How the Program Works

The user enters the total number of seconds.

The program calculates:

Hours by dividing total seconds by 3600

Remaining seconds using modulus %

Minutes by dividing remaining seconds by 60

Seconds using modulus % 60

The final output is displayed in HH:MM:SS format with leading zeros.

📥 Input

An integer representing the total number of seconds

Example Input:

3661

📤 Output

Time displayed in hours : minutes : seconds

Example Output:

Formatted time: 01:01:01

💻 Source Code
#include <stdio.h>

int main() {
    int total_seconds;

    printf("Enter the total number of seconds: ");
    scanf("%d", &total_seconds);

    int hours = total_seconds / 3600;
    int remaining_seconds = total_seconds % 3600;
    int minutes = remaining_seconds / 60;
    int seconds = remaining_seconds % 60;

    printf("Formatted time: %02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}

▶️ How to Compile and Run

Open terminal or command prompt

Compile the program:

gcc Time_convrsion.c -o Time_conversion


Run the program:

./Time_conversion

🎯 Learning Objectives

Understand integer division and modulus

Practice input/output in C

Learn time conversion logic

Improve formatting skills in printf()

✅ Author

Sobhit Kumar
