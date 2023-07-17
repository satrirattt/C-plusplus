#include <iostream>
#include <string>
using namespace std;
int main()
{    
    float F;
    cout << "Enter Fahrenheit : " ;
    cin >>  F ;
	cout << "********Output********" <<endl;
    cout << "Celsuis = " << (5.0/9.0) * (F-32) <<endl ;

	system("pause");
    return (0);

}