#include <iostream>
#include <string>
using namespace std;

int main(){
    string name1, last1;
    string name2, last2;
    
    cin>>name1>> last1;

    cin>>name2 >> last2;

    if (last1 == last2){
        cout << "ARE Brothers";
    
    }

    else{
        cout << "NOT";
    }
    
    
    return 0;
}