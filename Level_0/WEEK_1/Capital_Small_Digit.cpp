#include <iostream>
#include <string>

using namespace std;

int main(){
    
    char letter;
    cin >> letter;

    if (int(letter ) > 64 and int(letter) < 91)
       cout << "ALPHA" << endl << "IS CAPITAL";
    else if (int(letter ) > 96 and int(letter) < 123){
        cout << "ALPHA" << endl << "IS SMALL";
    }
    else {
        cout << "IS DIGIT";
    }
    return 0;
}