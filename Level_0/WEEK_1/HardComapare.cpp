#include <iostream>
#include <string>
#include <cmath>

using namespace std;
int main()
{
    int num1, num3;
    long long num2, num4;

    cin >> num1 >> num2 >> num3 >> num4;

    if (num2 * log(num1)  > num4 * log(num3)){
        cout << "YES";
    }
    else
       cout << "NO";

    return 0;
}