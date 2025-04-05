#include <iostream>
#include "stoi.cpp"
using namespace std;


int main(int args, char* argv[]) {
	if (args <= 2) {
        cout << "Error: Not enough arguments" << endl;
        return 1;
    }

    int result = 0;
    int tmp;

    for (int i = 1; i < args; ++i) {
        result += stoi(argv[i]);
    }

    cout << "Result = " << result << endl;

    return 0;
}
