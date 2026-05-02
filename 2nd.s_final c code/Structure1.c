#include <stdio.h>
// Structure basics
 // global structure variable
 struct person{
     int age;
     float salary;
 };
     struct person person1, person2,person3; // global variable
int main(){
    //struct person person1, person2; // local variable

    // initialized by element
    person1.age= 20;
    person1.salary= 15000.50;

    printf("Person-1 info: \n");
    printf("age= %d\n",person1.age);
    printf("salary= %.2f\n",person1.salary);

    // directly initialization
    struct person person2={25,12300.50};

    printf("\nPerson-2 info: \n");
    printf("age= %d\n",person2.age);
    printf("salary= %.2f\n",person2.salary);

// input structure element

    printf("\nEnter The Person-3 info: \n");
    printf("age= ");
    scanf("%d",&person3.age);

    printf("salary= ");
    scanf("%f",&person3.salary);

    printf("\nPerson-3 info: \n");
    printf("age= %d\n",person3.age);
    printf("salary= %.2f\n",person3.salary);

return 0;
}
