#include <iostream>
using namespace std;
int main(){
    int count=1;
    int a;
    int b;
    int sum=0;
    cout<<"add a\n";
    cin>>a;
    while (count<=a)
    {
        cin>>b;
        sum=b+sum;
        count+=1;

    }
    cout<<"sum is "<<sum<<endl;
    
    return 0;
}