#include <iostream>
#include <string>
#include <iomanip>


using namespace std;

int main()
{
    int num1;

    cin >> num1;

    while (num1 >= 10) 
        num1 /= 10;

    if (num1 % 2 == 0){
        cout << "EVEN";
    }
    
    else
       cout << "ODD";
     return 0;
}