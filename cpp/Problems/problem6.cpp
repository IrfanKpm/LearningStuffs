#include <iostream>
#include <cmath>
using namespace std;



int CheckPrime(int y,int x){
    /*
       return 0,1,2
       0 > NonPrime
       1 > Prime
       2 > invalid input
    */
    if (x > 2){
    for(int i=2;i<=y;i++){
        if ( x%i == 0){
            return 0; // NonPrime
        }
    }
    return 1; // Prime
    }else{
        return 2; //Invalid input
    }
}

int main(){ 
   int x;
   cout << "Enter Number :: ";  // input number
   cin >> x;
   int y = sqrt(x);  // nearest int for sqrt
   int isPrime = CheckPrime(y,x);
   // cout<<"isPrime : "<<isPrime<<endl; -> debug
   if (isPrime == 1){
    cout << "Input Number is PrimeNumber";
   }else if (isPrime == 0){
     cout << "Input Number is Not a PrimeNumber";
   }else{
    cout << "Input number must be greater than 2";
   }
   return 0;
}