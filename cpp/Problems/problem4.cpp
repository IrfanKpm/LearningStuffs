#include <iostream>
using namespace std;

// Function declaration (prototype)
void Sumfact(int x);

int main(){
    int x;
    cout << "Enter value for x : ";
    cin >> x;
    Sumfact(x);
    return 0;
}

void Sumfact(int x){
    int value = 1;
    int j = 1;
    for (j;j<=x;j++){
        value *=j;
        // cout<<j<<endl;
    }
    cout << "value : " << value ;
}