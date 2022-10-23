#include <iostream>

# include <string>


using namespace std;
int main(){
    char sign1;
    int num1, num2;

    cin >> num1 >> sign1 >> num2;

    if (sign1 == '+' ){
        cout << num1 + num2;
    }
    else if(sign1 == '-'){
        cout << num1 - num2;
    }
    else if(sign1 == '*'){
        cout << num1 * num2;
    }
    else if(sign1 == '/'){
        cout << num1 / num2;
    }
    return 0;
}
