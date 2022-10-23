#include <iostream>
#include <string>
#include <iomanip>


using namespace std;

int main()
{
    int num;
    int years = 0, months = 0;

    cin >> num;
    while (num >= 30){
    if (num >= 365){
        num -= 365;
        years += 1;
    }

    else if (num >= 30){
        num -= 30;
        months += 1;
    }
    }
    cout << years << " years" << endl;
    cout << months << " months" << endl;
    cout << num << " days" << endl;

}