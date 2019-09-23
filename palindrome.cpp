#include <iostream>
#include <cstring>
#include <ctype.h>

using namespace std;

/* Emma Shu: Palindrome is a program that identifies whether a word
 * or phrase, regardless of spaces, punctuation, or upper case letters,
 * is a palindrome or not.
 */

int main() {
	char input[80];
	char flip[80];
	char origin[80];
	int num = 0;	
	cin.get(input, 80);
	int length = strlen(input); //Get length of the input.
	for (int i = 0; i < length; i++) {	
		if(!ispunct(input[i]) && !isspace(input[i])) { //Do not input spaces/punctuation.
			origin[num] = tolower(input[i]); //Make all letters lower case.
			num++;	
		}	
	}
	origin[num] = '\0'; //Null terminating character.	
        for (int i = 0; i < num; i++) {
		if(origin[num - i - 1] != '\0') {	
			flip[i] = origin[num - i - 1]; //Flip input into char array.	
		}		
	}
	flip[num] = '\0';
	if(strcmp(origin,flip) == 0) {
		cout << "Palindrome." << endl;
	}
	else {
		cout << "Not a palindrome." << endl;
	}	
	return 0;
}
