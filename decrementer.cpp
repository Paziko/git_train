#include <iostream>
#include "stoi.cpp"
using namespace std;


int main(int args, char* argv[]) {
	if (args <= 1) {
        cout << "Error: Not enough arguments" << endl;
        return 1;
    }

    int result = 0;
    int i = 1;

    while (i < args && !(result = stoi(argv[i]))) {
        ++i;
    }

    cout << "Result = " << --result << endl;

    return 0;
}
