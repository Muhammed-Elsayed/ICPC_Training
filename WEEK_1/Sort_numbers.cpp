#include <iostream>
#include <string>
#include <iomanip>


using namespace std;

int main()
{
    
    int num1, num2 , num3, min_num , max_num;

    cin >> num1 >> num2 >> num3 ;

    min_num = num1;
    max_num = num1;

    if (num2 >= max_num)
       max_num = num2;
    
    else
       min_num = num2;

    if (num3 >= max_num)
       max_num = num3;
    
    else {
        if(min_num > num3){
            min_num = num3;
        }
    }
     


    return 0;
    
    
}