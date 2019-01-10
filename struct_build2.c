/*This is a program to define a struct to create fields that are appropriate to the
object the user is dealing with. The program creates an instance of the structure,
queries the user for data to fill the fields, and outputs the contents.
Nicolas VonDollen
December 2015
language: c (gcc target)
*/

#include <stdio.h>

typedef struct
{
char f_name[20];
char l_name[20];
char id_number[20];
}student_t;

void fill_student_info(student_t *a_info);
void print_student_info(student_t a_info);

int main(void)
{
student_t this_info;
fill_student_info(&this_info);
print_student_info(this_info);
return 0;
}

void fill_student_info(student_t *a_info)
/*
Function to fill the student's information in through 
query of the user for name and ID #.
Nicolas VonDollen
December 2015
language: c (gcc target)
*/
{
printf("Enter student's first name: ");
gets((*a_info).f_name);
printf("Enter student's last name: ");
gets((*a_info).l_name);
printf("Enter student's ID number (represented by a positive int): ");
gets((*a_info).id_number);
return;
}

void print_student_info(student_t a_info)
/*Function to print out the student's info (last name, first name) and then their 
ID number...
Nicolas VonDollen
December 2015
language: c (gcc target)
*/
{
printf("\n\nSTUDENT INFO:\n");
printf("%s, %s\n", a_info.l_name, a_info.f_name);
printf("ID #: %s\n", a_info.id_number);
return;
}
