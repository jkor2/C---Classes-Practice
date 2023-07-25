// Just practice using classes -- do not take serious

#include <iostream>
#include "Check.h"

using namespace std;

int main()
{

    Check check;

    bool playing = 1;

    cout << "Guess the password" << endl;

    do
    {
        string guess;
        cout << "Enter guess > " << flush;
        cin >> guess;

        // Obviosuly would never do something like this in realworld
        // JUST FOR PRACTICE
        if (guess == "Password")
        {
            check.correct();
            playing = 0;
        }
        else
        {
            check.incorrect();
        }

    } while (playing == 1);
}