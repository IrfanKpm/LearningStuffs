#include <iostream>
using namespace std;

int main()
{ 
     int p = 1;  
     int q = 0; 
     int sum; 
     int n;
     cout << "Enter value for N :: ";
     cin >> n;
     for(int i = 1;i<=n;i++){  
        cout<<q<<" ";
        sum = p+q;
        p = q;
        q = sum;
     }
}