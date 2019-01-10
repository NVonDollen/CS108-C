/*Program to utilize structs and a linked list to store emplyee
information(first name, last name, three digit emplyee id number).
Then the program will traverse the list and display the information of
the emplyee with the highest id number.
Nick VonDollen
December 2015

*/
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct employee
{int id_number;
struct employee *next;
char first_name[20], last_name[20];
}EMPLOYEE;

EMPLOYEE* insert(EMPLOYEE *it, int id_number, char first_name[], char last_name[]);
void traverse_and_print(EMPLOYEE *head);


int main(void)
{
int i, id_number;
char first_name[20], last_name[20];
EMPLOYEE *head, *p;
head = NULL;
for(i=1;i<6;i++)
        {
printf("Enter the first name: ");
scanf("%s", first_name);
printf("Enter the last name: ");
scanf("%s", last_name);
printf("Enter a 3-digit employee number: ");
scanf("%d", &id_number);

while(id_number >= 1000 || id_number <= 99)
{
printf("employee number unsuitable length. Enter a 3-digit employee number: ");
scanf("%d", &id_number);
}

head = insert(head, id_number, first_name, last_name);
        }
traverse_and_print(head);

return 0;
}
EMPLOYEE* insert(EMPLOYEE *it, int id_number, char first_name[], char last_name[])
/*Function to insert a record into a linked list
Written by Nick
Adapted from in-class code by Ron
December 2015
Language: C(gcc target)
*/
{
 EMPLOYEE *cur, *q;
   cur=(EMPLOYEE *)malloc(sizeof(EMPLOYEE));
   strcpy(cur->first_name, first_name);
   strcpy(cur->last_name, last_name);
   cur->id_number= id_number;
   cur->next=NULL;
   if (it==NULL)
      it=cur;
   else
      {q=it;
       while(q->next!=NULL)
         q=q->next;
       q->next=cur;
      }
   return(it);
}

void traverse_and_print(EMPLOYEE *head)
/*Function to traverse linked list, print information of the employee with the highest id number
Code by Nick
Adapted from in-class code by Ron & online help on cboard.cprogramming.com
December 2015
Language: C (gcc target)
*/
{ EMPLOYEE *p;
  char firstn[20], lastn[20];
  int  highest;
  highest=p->id_number;
  strcpy(firstn, p->first_name);
  strcpy(lastn, p->last_name);
   p=head;
  p=p->next;


     while (p!=NULL)
       {
          if (p->id_number=highest)
          {
              highest=p->id_number;
              strcpy(firstn, p->first_name);
              strcpy(lastn, p->last_name);
          }
          p=p->next;
       }


  printf("\n\n%s, %s\nID #: %d\n, ", firstn, lastn, highest);






  return;
}
