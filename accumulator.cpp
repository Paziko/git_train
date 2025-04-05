#include <iostream>
#include "stoi.cpp"
using namespace std;


int main(int args, char* argv[]) {
	if (args <= 1) {
        cout << "Error: Not enough arguments" << endl;
        return 1;
    }

    int result = 0;
    int tmp;
    int i = 1;
	
    for (int k = 0; k < 2; ++k) {
	tmp = 0;

    	while (i < args && !(tmp = stoi(argv[i]))) {
        	++i;
    	}
		
		++i;
    	result += tmp;
    }

    cout << "Result = " << result << endl;

    return 0;
}
