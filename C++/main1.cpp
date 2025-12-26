#include <iostream>
using namespace std;

int main()
{
    int num;
    int sum = 0;

    cout << "add num (exit with negative number)\n";

    while (true)
    {
        cin >> num;

        if (num > 0)
            break;

        sum += num;
    }

    cout << "sum is " << sum << endl;
    return 0;
}