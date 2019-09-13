#include <iostream>
#include <cstring>

using namespace std;

int main() {
	char input[80];
	char flip[80];
	cin.get(input, 80);
	int length = strlen(input);
        for (int i = 0; i < length; i++) {
		flip[i] = input[length - i];	
	}	
	cout << flip << endl;
	return 0;
}
