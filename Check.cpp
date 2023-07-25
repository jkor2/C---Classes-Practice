#include <iostream>
#include "Check.h"

using namespace std;

// Ensuring correct / incorrect functions are tieed to Check class
void Check::correct()
{
    cout << "Correct Guess!" << endl;
};

void Check::incorrect()
{
    cout << "Incorrect Guess... Try again!" << endl;
}