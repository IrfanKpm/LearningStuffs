#include <iostream>
#include <cmath>
using namespace std;

void Sum(float x,float y){
   cout<< "x + y = "<<x+y<<endl;
}
void Sub(float x,float y){
   cout<<"x - y = "<< x-y<<endl;
}
void Multi(float x,float y){
   cout<< "x * y = "<<x*y<<endl;
}
void Div(float x,float y){
   if (y != 0){
    cout<< "x / y = "<<x/y<<endl;
   }else{
    cout<<"Error: Division by zero"<<endl;
   }
   
}

int main(){
    cout <<"#----------------------------------------#\n";
    cout <<"#             CALCULATOR                 #\n";
    cout <<"# [+] Addition                           #\n";
    cout <<"# [-] Subtratin                          #\n";
    cout <<"# [*] Multiplication                     #\n";
    cout <<"# [/] Divition                           #\n";
    cout <<"# [q] quit...                            #\n";
    cout <<"#----------------------------------------#\n";
    while (true){
        float x,y;
        char oprt;
        cout << "Enter Operation > ";
        cin >> oprt;
        if (oprt == 'q'){
          cout << "Quitting the program." << endl;
          break;
        }
        cout << "Enter Number 1 > ";
        cin >> x;
        cout << "Enter Number 2 > ";
        cin >> y;
        switch (oprt){
            case '+':
              Sum(x,y);
              break;
            case '-':
              Sub(x,y);
              break;
            case '*':
              Multi(x,y);
              break;
            case '/':
              Div(x,y);
              break;
            default:
              cout << "Invalid operation. Please try again." << endl;
              break;
        }
    }
    return 0;
}
