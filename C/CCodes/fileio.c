#include <stdio.h>
struct person
{
    char name[10];
    int age;
    float salary;
};

void main()
{
    struct person *person_1;
    FILE *file;
    file = fopen("testDoc.txt", "a");
    printf("Enter his/her name\n");
    gets(person_1->name);
    printf("now enter %s's age and salary\n");
    scanf("%d%f", &person_1->age, &person_1->salary);
    fprintf(file,"Hello %s!!\nAs per entered info:\nyour age: %d;\nyour salary: %f\n",
            person_1->name, person_1->age, person_1->salary);

    // fprintf(file,"%s",str);
}