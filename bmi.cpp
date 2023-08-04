#include <iostream>
#include <string>
using namespace std;
int main()
{	

	int age;
	float bmi,h,w ;
	string gender;
	cout << "Enter Age : " ;
	cin >> age ;
	cout << "Enter Gender : " ;
	cin >> gender ;
	cout << "Enter Height : " ;
	cin >> h ;
	cout << "Enter Weight : " ;
	cin >> w ;
	bmi =   w / (h/100 * h/100) ;
	cout << "BMI = " << bmi <<endl ;

	cout <<endl;
	cout << "Your Age = " << age <<endl;
	cout << "Your Gender = " << gender <<endl;
	cout << "Your Height = " << h <<endl;
	cout << "Your Weight = " << w <<endl;
	cout << "BMI = " << bmi <<endl;
	cout << "Your " ;
	if (bmi <= 18.5)  
		cout << "Underweight\n";
		
	else if (bmi <= 25) 
		cout << "Normal\n" ;
	
	else if (bmi <= 35) 
		cout << "Overweight\n" ;
		
	else if  (bmi > 35) 
		cout << "Obesity\n" ;



	system("Pause");
	return(0);
}