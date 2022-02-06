#include <stdio.h>
#include<string.h>
void main()
{
    struct student
    {
        char name[30];
        int age;
    };
    struct student first_student = {"hello", 20};
    struct student *sptr;
    sptr = &first_student;
    first_student->name = "hello world";
    printf("%d", first_student.age);
}