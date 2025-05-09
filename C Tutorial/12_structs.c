#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    char major[50];
    int age;
    float gpa;
};

int main()
{
    struct Student student1; // Declare a variable of type Student
    student1.age = 23;
    student1.gpa = 3.5;
    // student1.name = "John Doe"; // This line is incorrect, you cannot assign a string like this in C
    // Instead, use strcpy (string copy) from string.h
    strcpy(student1.name, "John Doe"); 
    strcpy(student1.major, "Computer Science"); 

    printf("Name: %s\n", student1.name);
    printf("GPA: %.2f\n", student1.gpa);


    struct Student student2; // Declare another variable of type Student
    student2.age = 22;
    student2.gpa = 3.8;
    strcpy(student2.name, "Jane Smith");
    strcpy(student2.major, "Mathematics");

    printf("Name: %s\n", student2.name);
    printf("GPA: %.2f\n", student2.gpa);
    
    return 0;
}