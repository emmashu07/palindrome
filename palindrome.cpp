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
		if(!ispunct(input[i]) || !isspace(input[i])) {
			origin[num] = input[i];
			num++;	
		}	
	}
	cout << input << endl;
        for (int i = 0; i < length; i++) {
		if (input[length - i] != '\0') {
			flip[i] = input[length - i];	
		}	
	}	
	cout << flip << endl;
	return 0;
}
