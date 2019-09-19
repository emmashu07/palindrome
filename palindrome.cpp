#include <iostream>
#include <cstring>
#include <ctype.h>

using namespace std;

int main() {
	char input[80];
	char flip[80];
	char origin[80];
	int num = 0;	
	cin.get(input, 80);
	int length = strlen(input);
	for (int i = 0; i < length; i++) {	
		if(!ispunct(input[i]) && !isspace(input[i])) {
			origin[num] = tolower(input[i]);
			num++;	
		}	
	}
	origin[num] = '\0';	
        for (int i = 0; i < num; i++) {
		if(origin[num - i - 1] != '\0') {	
			flip[i] = origin[num - i - 1];	
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
