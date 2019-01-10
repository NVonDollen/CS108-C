#include <stdio.h>

int interative_fact (int n);
int recur_fact (int n);

int main(void)
{
  int 	number,		// number to find factorial of
	iter_res,	// iterative result
	recur_res;	//recursive result

printf("Enter number to find factorial of: ");
scanf("%d", &number);
iter_res = iterative_fact(number);
recur_res= recur_fact(number);
printf("%d! calculated interatively is %d\n", number, iter_res);
printf("%d! calculated recursively is %d\n", number, recur_res);
return 0;
}


int iterative_fact(int n)
{
int i,
result;

result = 1;
for(i =1; i<=n; i++)
result = result*i;
return(result);
}

int recur_fact(int n)
{
if(n==0)
return(1);
else
return(recur_fact(n-1)*n);
}

