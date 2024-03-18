#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator
    srand(time(NULL));

    // Generate two random numbers
    int num1 = 1 ;
    int num2 = 2 ;

    // Open a file for writing
    FILE *file = fopen("random_numbers.txt", "w");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Write the random numbers to the file
    fprintf(file, "Random Number 1: %d\n", num1);
    fprintf(file, "Random Number 2: %d\n", num2);

    // Close the file
    fclose(file);

    printf("Random numbers generated and saved to file 'random_numbers.txt'\n");

    return 0;
}

