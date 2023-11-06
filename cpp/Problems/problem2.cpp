#include <iostream>
using namespace std;

void PrintSum(){
    int x,y;
    cout << "Enter value for x : ";
    cin >> x;
    cout << "Enter value for y : ";
    cin >> y;
    cout << "Value of (x + y) : "<< x+y;
}

int main(){
    PrintSum();
    return 0;
}