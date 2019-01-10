#include <stdio.h>
#include <string.h>

int main(void)
{
char rocky[15], bw[15], krud;
printf("Enter a string: ");
//scanf("%s", rocky);			//1. choice to scan for a string
gets(rocky);				//2. choice to scan for string

//printf("You entered %s\n", rocky);	//1. choice to print a string
puts(rocky);				//2. choice to print a string


/////////////////////////////////////////////////////////////////////////
printf("Enter a character: ");
krud = getchar();
printf("You entered %c whose memory value is %d\n", krud, krud);

printf("is krud a letter: %d\n", isalpha(krud));		// isalpha is not 0 if the value of krud is a letter; otherwise isalpha is 0.

printf("%c %c\n", toupper(krud), tolower(krud)); 		//turns entered value into upper case, then to lower case and prints both.

strncpy(bw, rocky, 2);
bw[2] = '\0';						//copies FROM rocky and puts it in bullwinkle... but chops off after printing the second character.
printf("bw is %s\n", bw); 
}

