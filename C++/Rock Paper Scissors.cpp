#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int main()
{
    srand(time(0));
    string mychoice;
    string choices[3] = {"rock", "paper", "scissors"};
    cout << "rock,paper or scissors" << endl;
    cin >> mychoice;
    string computerChoice = choices[rand() % 3];
    cout << endl;
    cout << "your choice is :" << mychoice << endl;
    cout << "computer choice is :" << computerChoice << endl;
        if (computerChoice == mychoice)
        {
            cout << "draw" << endl;
        }
        else if (
            (mychoice == "rock" && computerChoice == "scissors") ||
            (mychoice == "scissors" && computerChoice == "paper") ||
            (mychoice == "paper" && computerChoice == "rock"))
        {
            cout << "you win";
        }
        else
        {
            cout << "computer win";
        }

    return 0;
}