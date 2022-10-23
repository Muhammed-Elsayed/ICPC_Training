#include <iostream>
#include <string>
#include <iomanip>


using namespace std;

int main()
{
    int A, B, C;
    cin >> A >> B >> C;


    if ( A >= B and A >= C){
        if (B >= C)
          cout <<  C << endl << B << endl << A << endl ;

        else
           cout <<  B << endl << C << endl << A << endl ;
    }

    else if( B >= A and B >= C){
        if (A >= C)
          cout <<  C << endl << A <<endl << B<< endl  ;

        else
          cout <<  A << endl << C <<endl << B << endl ;
    }

    else if (C >= A and C >= B)
        if (A >= B)
          cout <<  B << endl << A <<endl << C << endl ;

        else 
          cout <<  A << endl << B <<endl << C<< endl  ;
    

    cout <<  endl << A << endl << B <<endl << C ;

    return 0;
    
    
}
