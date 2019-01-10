/*This is a program to query the user for the twelve digit UPC, store it 
in an array, and calculate / display the check digit and report whether 
or not the UPC is correct or incorrect.
Nicolas VonDollen	
Novermber 2015
Language: C (gcc target)
*/

#include <stdio.h>
#define A_SIZE 12

//Prototypes...//
void get_inputs(int a[],int *ans);
void print_array(int a[], int n);
void sum_oddPos(int a[], int *ans);
void sum_evenPos(int a[], int *ans);
int main (void)
{
int a[A_SIZE], n, answer, checkDig;

get_inputs(a, &n);
sum_oddPos(a, &answer);
sum_evenPos(a, &answer);

int hold = 0; 
hold = answer%10;
if(hold ==0)
{ 
checkDig = 0;
}
else
{
checkDig= 10-hold;
}

if(checkDig==a[11])
{
printf("Correct!");
}
else
{
printf("Incorrect.");
}



return 0;
}

///////////////////////GET INPUTS OF THE ARRAY/////////////////
void get_inputs(int a[], int *n)
/*Function written to have the user enter a number of elements as data to use in an array
Nicolas VonDollen
November 2015
Language: C (gcc target)
*/

{
int i, entry;


printf("Enter 12 values to be entered to an array:\n");
for(i=0; i< 12; i++)
{
scanf("%d", &entry);
a[i] = entry;
}
*n = i;
return;
}

////////////////////SUM OF THE ODD ARRAY POSITIONS//////////
void sum_oddPos(int a[], int *ans)
/*Function made to calculate the sum of the odd positions of the array and multiply it by 3.
Nicolas VonDollen
November 2015
Language: C (gcc target)
*/
{
int sum = 0;
int j;
for(j=0; j<12; j=j+2)
sum +=a[j];

*ans = sum*3;
printf("when adding odd results: sum: %d sum*3: %d\n", sum, *ans);

return;
}

////////////////SUM OF EVEN ARRAY POSITIONS///////////////
void sum_evenPos(int a[], int *ans)
/*Function to add the even positions of the array's data together and add the sum of the evens 
to the result of the sum_oddPos calculation.
Nicolas VonDollen
November 2015
Language: C (gcc sharp)
*/

{
int sum = 0;
int k;
for(k=1; k<11; k=k+2)
sum += a[k];

*ans += sum;
printf("When adding the even results: sum: %d final answer: %d\n", sum, *ans);
return;
}
