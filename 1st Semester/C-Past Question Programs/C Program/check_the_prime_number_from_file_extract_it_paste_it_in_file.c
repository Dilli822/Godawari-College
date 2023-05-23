// #include <stdio.h>

// // Function to check if a number is prime
// int isPrime(int num) {
//     if (num <= 1)
//         return 0;

//     for (int i = 2; i * i <= num; i++) {
//         if (num % i == 0)
//             return 0;
//     }

//     return 1;
// }

// int main() {
//     FILE *inputFile = fopen("Num.txt", "r");
//     FILE *outputFile = fopen("Prime.txt", "w");

//     if (inputFile == NULL || outputFile == NULL) {
//         printf("Error opening the files.\n");
//         return 1;
//     }

//     int num;
//     while (fscanf(inputFile, "%d", &num) != EOF) {
//         if (isPrime(num)) {
//             fprintf(outputFile, "%d\n", num);
//         }
//     }

//     fclose(inputFile);
//     fclose(outputFile);

//     printf("Prime numbers extracted and written to 'Prime.txt' successfully.\n");

//     return 0;
// }


#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }

    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    FILE *inputFile, *outputFile;
    int number;

    inputFile = fopen("Num.txt", "r");
    if (inputFile == NULL) {
        printf("Error opening the input file.\n");
        return 1;
    }

    outputFile = fopen("Prime.txt", "w");
    if (outputFile == NULL) {
        printf("Error opening the output file.\n");
        return 1;
    }

    while (fscanf(inputFile, "%d", &number) == 1) {
        if (isPrime(number)) {
            fprintf(outputFile, "%d\n", number);
        }
    }

    fclose(inputFile);
    fclose(outputFile);

    printf("Prime numbers extracted and written to Prime.txt successfully.\n");

    return 0;
}
