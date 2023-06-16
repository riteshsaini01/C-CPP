#include <stdio.h>
#include <string.h>
struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
} ritesh, rahul, vandit;
// struct Student ritesh, rahul, vandit;

void print()
{
    printf("%s\n", ritesh.name);
    printf("%s", vandit.name);
}

int main()
{
    ritesh.id = 1;
    rahul.id = 2;
    vandit.id = 3;
    ritesh.marks = 66;
    rahul.marks = 466;
    vandit.marks = 46;
    ritesh.fav_char = 'p';
    rahul.fav_char = 'y';
    vandit.fav_char = 'o';
    strcpy(ritesh.name, "ritesh is student of the year");
    strcpy(vandit.name, "vandit Khan.");
    // printf("ritesh got %d marks\n", ritesh.marks);
    // printf("ritesh's name is: %s\n", ritesh.name);
    // printf("vandit got %d marks\n", vandit.marks);
    // printf("vandit's name is: %s\n", vandit.name);
    print();
    
    

    return 0;
}
