#include <stdio.h>
#include <string.h>

#define MAX_EMPLOYEES 5

struct Employee {
    char Name[100];
    char Address[100];
    float Salary;
    int Age;
};

void displaySelectedEmployees(struct Employee employees[], int size) {
    printf("Employees between 40 and 50 years old, living in Kathmandu:\n");

    for (int i = 0; i < size; i++) {
        if (employees[i].Age >= 40 && employees[i].Age <= 50) {
            if ((strcmp(employees[i].Address, "Kathmandu") == 0) || (strcmp(employees[i].Address, "KATHMANDU") == 0) || (strcmp(employees[i].Address, "kathmandu") == 0) ){
                printf("Name: %s\n", employees[i].Name);
                printf("Address: %s\n", employees[i].Address);
                printf("Salary: %f\n", employees[i].Salary);
                printf("Age: %i \n", employees[i].Age);
            }
        }
    }
}

int main() {
    struct Employee employees[MAX_EMPLOYEES];
    int numEmployees;

    printf("Enter the number of employees: ");
    scanf("%d", &numEmployees);

    if (numEmployees > MAX_EMPLOYEES) {
        printf("Exceeded the maximum limit of employees.\n");
        return 0;
    }

    printf("Enter employee details:\n");
    for (int i = 0; i < numEmployees; i++) {
        printf("Employee %d:\n", i + 1);

        // So, %[^\n] specifies that the input should read all characters 
        // except the newline character. This format specifier is often used to 
        // read multi-word strings or sentences with spaces, as it allows the input to 
        // include spaces and terminate only when the user presses the Enter key (which generates a 
        // newline character).
        printf("Name: ");
        scanf(" %[^\n]s", &employees[i].Name);

        printf("Address: ");
        scanf(" %[^\n]s", &employees[i].Address);

        printf("Salary: ");
        scanf("%f", &employees[i].Salary);

        printf("Age: ");
        scanf("%d", &employees[i].Age);
    }

    displaySelectedEmployees(employees, numEmployees);

    return 0;
}
