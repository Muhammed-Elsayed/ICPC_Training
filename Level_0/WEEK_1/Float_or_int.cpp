#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
 float num1, fract_part, int_part;
cin >> num1;

fract_part = modf(num1 , &int_part);

if (fract_part == 0) 
   cout << "int" << " " << int_part;

else 
   cout << "float" << " " << int_part << " " <<  setprecision(3) << fract_part ;

return 0;
}