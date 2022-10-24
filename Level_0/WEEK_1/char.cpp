#include <iostream>
#include <string>

using namespace std;

int main(){
    
    char letter;
    cin >> letter;

    if (int(letter ) > 64 and int(letter) < 91)
       cout << char(int(letter) + 32);

    else{
        cout << char(int(letter - 32));
    }

    return 0;
}