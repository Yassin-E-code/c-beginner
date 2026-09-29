#include<stdio.h>
// This code defines a structure named 'Student' that represents a student with three members: an integer 'id', a character array 'name' of size 50 to store the student's name, and a float 'score' to store the student's score. Structures in C allow grouping different data types together under a single name, making it easier to manage related data.
struct Student {
    int id;
    char name[50];
    float score;
};
int main() {
    // Declare and initialize a variable of type 'Student'
    struct Student student1;
    student1.id = 1;
    strcpy(student1.name, "Alice");
    student1.score = 95.5;

    // Print the student's information
    printf("Student ID: %d\n", student1.id);
    printf("Student Name: %s\n", student1.name);
    printf("Student Score: %.2f\n", student1.score);

    // Declare and initialize another variable of type 'Student'
    struct Student student2 = {2, "Bob", 88.0};

    // Print the second student's information
    printf("Student ID: %d\n", student2.id);
    printf("Student Name: %s\n", student2.name);
    printf("Student Score: %.2f\n", student2.score);

    return 0;
}