#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
using namespace std;

void ask_name();
void pointer_manipulation();

int main()
{
    srand(time(NULL));

    const int num_to_guess = rand() % 100;
    bool gameFinished = false;
    int player_guess;
    string buffer;

    cout << "Lets play a guessing game (0 to 100) \n";

    while (true)
    {
        cout << "Enter your guess \n";

        cin >> buffer;
        
        try {
            player_guess = stoi(buffer);
        }
        catch(...) {
            cout << "Not a number, please enter a number \n";
            continue;
        }

        if (player_guess == num_to_guess) {
            cout << "You won! \n";
            break;
        }
        else if (player_guess > num_to_guess) {
            cout << "Guess was to big, try again \n";
        }
        else if (player_guess < num_to_guess) {
            cout << "Guess was to small, try again \n";
        }
    }

    return 0;
}



// other things that I did but did not want to delete

void pointer_manipulation() {
    string food = "pizza";
    string* foodPtn = &food;

    cout << food << endl;

    *foodPtn = "mac and cheese";

    cout << *foodPtn << endl;

    cout << food;
}

void ask_name() {
    int input;
    string inputStr;

    cout << "Input your name \n";
    getline(cin, inputStr);

    cout << "Input your age \n";
    cin >> input;

    cout << "Hello " << inputStr << ", I hear that you are " << input << " years old";
}