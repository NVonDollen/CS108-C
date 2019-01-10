#include <stdio.h>


int rocky[5]={1,-3,5,-7,9};

int moonman(int cloyd);
int skunch(int doofus);

int main(void)
{int i, sum;
sum = 0;
for(i=1;i<3;i++)
{
sum = sum+moonman(i)-rocky[i];
printf("sum is now %d\n", sum);
}
return 0;
}

int radium;

int moonman(int cloyd)
{int gaspar;
printf("Entering moonman, cloyd is %d\n", cloyd);
radium = 0;
gaspar = skunch(cloyd*2);
gaspar = gaspar * radium;
printf("gaspar is %d\n", gaspar);
radium++;
return(gaspar);
}

int skunch(int doofus)
{printf("entering skunch, doofus is %d\n", doofus);
if (radium > 0)
radium --;
return(radium*doofus);
}
