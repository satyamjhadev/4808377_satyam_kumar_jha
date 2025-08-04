#include <stdio.h>

int main() {
    int weekday;

    // Input validation 
    do {
        printf("Please enter a value from 1 to 7 to know the day: ");
        if (scanf("%d", &weekday) != 1) {
            // Clear invalid input
            while (getchar() != '\n');
            weekday = 0;
        }

        if (weekday < 1 || weekday > 7) {
            printf("Oops! That’s not valid. Try a number between 1 and 7.\n");
        }

    } while (weekday < 1 || weekday > 7);

   
    printf("It's ");
    switch (weekday) {
        case 1: printf("Monday"); break;
        case 2: printf("Tuesday"); break;
        case 3: printf("Wednesday"); break;
        case 4: printf("Thursday"); break;
        case 5: printf("Friday"); break;
        case 6: printf("Saturday"); break;
        case 7: printf("Sunday"); break;
    }
    printf("!\n");

    return 0;
}

    
    
    
    
    
    
    
    
    
