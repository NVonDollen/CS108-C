/*This is a program that queries the user for a noun and forms it plural 
on the basis of three cases:
1. If the noun ends in "y" remove the "y" and add "ies".
2. If the noun ends in "s", "ch", or "sh" add "es".
3. In all other cases, add "s".
Nicolas VonDollen
November 2015
Language: C (gcc target)
*/

#include <stdio.h>
#include <string.h>
 
#define max_word_length 30

void plural_y (char word[]); 	// function to deliver the plural of any word to end in 'y' by removing 'y' and adding 'ies'.
void plural_s_ch_sh (char word[]); // function to deliver the plural of any word to end in 's', 'ch', or 'sh'.

int main (void)
{
int length;

char word[max_word_length]; //array to store word being entered.

printf("Enter a word: ");
gets(word);

length = 0;
length = strlen(word);

/////////////////Code where the functions for plural delivery are called//////////////
if(word[length - 1] == 'y')
plural_y(word);

else if(word[length - 1] == 's' || (word[length - 2] == 'c' && word[length - 1] == 'h') || (word[length - 2] == 's' && word[length - 1] == 'h')) 
plural_s_ch_sh(word);

else
{
word[length] = 's';
word[length + 1] = '\0';
}

puts(word);

return 0;
}
///////////////////////////////////
void plural_y(char word[])
/*A function to replace a 'y' at the end of a word with 'ies'
Nicolas VonDollen
November 2015
language: C (gcc target)
*/
{
int length=0;
length = strlen(word);   
word[length - 1] = 'i';
word[length] = 'e';
word[length + 1] = 's';
word[length + 2] = '\0';
return; 
}

///////////////////////////////////
void plural_s_ch_sh(char word[])
/*A function to replace an 's', 'ch' or 'sh'
at the end of a word with 'es'.
Nicolas VonDollen
November 2015
language: C (gcc target)
*/
{
int length = 0;
length = strlen(word);
word[length] = 'e';
word[length + 1] = 's';
word[length + 2] = '\0';
return;
}





