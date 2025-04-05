#include <iostream>
#include "stoi.cpp"
using namespace std;


int main(int args, char* argv[]) {
	if (args <= 1) {
		cout << "Not enogh argument" << endl;
		return 1;
	}
	
	int tmp = 0;
	int i = 1;

	while (i < args && !(tmp = stoi(argv[i]))) {
		++i;
	}

	cout << "Result = " << tmp*tmp*tmp << endl;
	return 0;
}
