#include <stdio.h>
struct Employee {
int id;
char name[50];
float salary_lpa;
};
int main() {
int n, i;
printf("Enter the number of employees: ");
scanf("%d", &n);
struct Employee employees[n];
for(i=0; i<n; i++) {
printf("\nEnter details for Employee %d:\n", i); //(i should be i+1)
printf("ID: ");
scanf("%d", &employees[i].id);
printf("Name: "):
scanf(" %[^\n]s", employees[i].name);
printf("Salary (LPA): ");
scanf("%f", &employees[i].salary_lpa);
}
printf("\n--- Displaying Employee Records ---\n");
printf("ID\tName\t\tSalary (LPA)\n");
for(i = 0; i < n; i++) {
printf("%d\t%s\t\t%.2lf\n", employees[i],id, employees[i].name, employees[i].salary_lpa);  //(.2lf is for long double, it should be .2f)
//employees[i],id is wrong, it should be employees[i].id
}
return 0 //(missing ‘;’)
}
