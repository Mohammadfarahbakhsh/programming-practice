#include <iostream>
using namespace std;


int main(){
    int n ;
    cout<<"add n\n";
    cin>>n;
    int number[n];
    int sum=0;
    for (int i=0;i<n;i++){
        cin>>number[i];
        sum+=number[i];
    }
    cout<<"sum is "<<sum<<endl;
    return 0;
}