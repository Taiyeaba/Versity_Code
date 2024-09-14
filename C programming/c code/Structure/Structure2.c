//structure 2
#include <stdio.h>

struct Employee {
    char name[100];
    int age;
    float salary;
    char designation[100];
};

int main() {
    int n;
    printf("Enter the number of employees: ");
    scanf("%d", &n);

    struct Employee employees[n];

    for (int i = 1; i <= n; i++) {
        printf("\nEnter details for Employee %d:\n", i );
        printf("Name: ");
        scanf(" %s", employees[i].name);
        printf("Age: ");
        scanf("%d", &employees[i].age);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
        printf("Designation: ");
        scanf(" %s", employees[i].designation);
    }

    printf("\nEmployee Details:\n");
    for (int i = 1; i <= n; i++) {
        printf("Employee %d:\n", i);
        printf("Name: %s\n", employees[i].name);
        printf("Age: %d\n", employees[i].age);
        printf("Salary: %.2f\n", employees[i].salary);
        printf("Designation: %s\n", employees[i].designation);
        printf("\n");
    }

    return 0;
}

