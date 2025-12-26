#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cout << "add row and column\n";
    cin >> n >> m;
    int numbers1[n][m];
    int numbers2[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << i + 1 << "-" << j + 1<<":";
            cin >> numbers1[i][j];
        }
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << i + 1 << "," << j + 1<<":";
            cin >> numbers2[i][j];
        }
    }
    cout<<endl;
        int number[n][m];
        for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++)
        {
            number[i][j]=numbers1[i][j]+numbers2[i][j];
            cout<<number[i][j]<<"    ";
        }
        
        cout<<endl;
    }

    return 0;
}