#include <iostream>
#include <string>
using namespace std;
int main()
{    
    string Name;
    float W;
    float H;
    cout << "Enter Name : " ;
    cin >> Name ;
    cout << "Enter Weight : " ;
    cin >>  W ;
    cout << "Enter High : " ;
    cin >>  H;
    cout << "BMI = " << W / (H/100 * H/100) <<endl ;

   
    return (0);

}