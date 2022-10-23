#include <iostream>

# include <string>


using namespace std;
int main(){
    char sign1, Equ ;
    int num1, num2, num3;

    cin >> num1 >> sign1 >> num2 >> Equ >> num3;

    if (sign1 == '+' ){
        if(num1 + num2 == num3 ){
              cout << "Yes";
        }
        else
          cout << num1 + num2;


    }
    else if(sign1 == '-'){
        if (num1 - num2 == num3){
            cout << "Yes";
        }
        else 
           cout << num1 - num2;
    }



    else if(sign1 == '*'){
        if (num1 * num2 == num3){
            cout << "Yes";
        }
        else 
           cout << num1 * num2;
    }
    
    return 0;
}
