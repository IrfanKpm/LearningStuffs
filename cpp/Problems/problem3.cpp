#include <iostream>
using namespace std;

int main(){
    int x;
    cout << "Enter value for x : ";
    cin >> x;
    if(x%2 == 0){
        cout<<"Number is Even";
    }else{
        cout<<"Number is Odd";
    }  
    return 0;
}