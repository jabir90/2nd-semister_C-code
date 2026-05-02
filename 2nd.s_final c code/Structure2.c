#include <stdio.h>
// Array of Structure
 // global structure variable
 struct person{
     int age;
     float salary;
 };
int main(){
    int n;
    printf("Enter the number of person: ");
    scanf("%d",&n);
    struct person person[n];
    int i;
    for(i=0; i<n; i++){
        printf("\nEnter person %d information:\n",i+1);
        printf("Enter Age: ");
        scanf("%d",&person[i].age);
        printf("Enter Salary: ");
        scanf("%f",&person[i].salary);
    }
        for(i=0; i<n; i++){
        printf("\nperson %d information is:",i+1);
        printf("\nAge: %d\n",person[i].age);
        printf("Salary: %.2f\n",person[i].salary);
    }
return 0;
}
