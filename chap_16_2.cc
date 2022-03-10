#include <iostream>
#include "IntRange.h"

using namespace std;

int main () {
    IntRange range(5,10);
    int userValue;
    
    cout << "Enter a value in the range of 5 - 10: ";
    try {
        userValue = range.getInput();
        cout << "You entered " << userValue << endl;
    } catch (IntRange::OutOfRange) {
        cout << "That value is out of range.\n";
    }
    cout << "End of the program." << endl;
    return 0;
}