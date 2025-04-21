
#include <iostream>
#include <cstdlib>  // for rand(), srand()
#include <ctime>    // for time()

using namespace std;

int main() {
    
    int me, you;
    int attempts = 5;

    srand(static_cast<unsigned int>(time(nullptr)));
    me = rand() % 100;

    for (int i = 1; i <= 5; ++i) {
        cout << "\nEnter a number (" << attempts << " chances left): ";
        cin >> you;

        if (you == me) {
            cout << "************ Great! You win the game in " << i << " chance(s)! *************" << endl;
            break;
        } else if (you > me) {
            cout << "Your number is greater than my number." << endl;
        } else {
            cout << "Your number is less than my number." << endl;
        }

        --attempts;

        if (attempts == 0) {
            cout << "\nOops! You failed to guess the correct number. Game over, you lost..." << endl;
        }
    }

    return 0;
}
