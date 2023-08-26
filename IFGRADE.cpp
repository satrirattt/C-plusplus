#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Input your Score (0-100) : ";
	cin >> n;
	if (n >= 90 && n <= 100)
		cout << "A" <<endl;
	else if (n >= 80 && n < 90 )
		cout << "B" <<endl ;
	else if (n >= 70 && n < 80 )
		cout << "C" <<endl;
	else if (n >= 60 && n < 70 )
		cout << "D" <<endl ;
	else if (n < 60)
		cout << "F" <<endl ;
	else 
		cout << "Error" <<endl;





return(0);
}
