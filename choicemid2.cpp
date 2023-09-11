#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
void DisplayMenu();
float Area(const float Radius);
float Area(const float Length, const float Widht);
float Area(const float Base, const double Height);
float Area(const double W1 , const double W2 , const double Height);
int main()
{
	char Choice;
	bool Flag = true;
	do {
		DisplayMenu();
		cin >> Choice;
		if (Choice == '1') {
				float Radius;
				cout << "\nEnter radius : ";
				cin >> Radius;
				cout << "Area of Circle = " << fixed;
				cout << setprecision(2) << Area(Radius) << endl;
			}
		else if (Choice == '2'){
				float Length,Widht;
				cout << "Enter length and width : ";
				cin >> Length >> Widht;
				cout << "Area of Rectangle = " << fixed;
				cout << setprecision(2) << Area(Length,Widht);
				cout << endl;
			}
		else if (Choice == '3'){
				float Base;
				double Height;
				cout << "Enter Base and Height : ";
				cin >> Base >> Height;
				cout << "Area of Triangle  = " << fixed;
				cout << setprecision(2) << Area(Base,Height);
				cout << endl;
			}
		else if (Choice == '4'){
				double W1,W2,Height;
				cout << "Enter W1 , W2 and H : ";
				cin >> W1 >> W2 >> Height;
				cout << "Area of Trapezoid = " << fixed;
				cout << setprecision(2) << Area(W1,W2,Height);
				cout << endl;
			}
		else if (Choice == '5') Flag = false;
		else {
				cout << "\nYou choose out of range is ";
				cout << "not process.\n";
		}			
	} while (Flag);
	cout << "\n...Exit Program...\n";
	return(0);
}
float Area(const float Radius)
{
		return(3.14159F * Radius * Radius);
}
float Area(const float Length, const float Widht)
{
		return(Length * Widht);
}
float Area(const float Base, const double Height)
{
		return(0.5 * Base * Height);

}
float Area(const double W1 , const double W2 , const double Height)
{
		return(0.5 * (W1 + W2) * Height);
}
void DisplayMenu()
{
		cout << endl;
		cout << " Program Calculate Area " << endl;
		cout << " 1. Clrcle" << endl;
		cout << " 2. Rectangle" << endl;
		cout << " 3. Triangle" << endl;
		cout << " 4. Trapezoid" << endl;
		cout << " 5. Exit" << endl;
		cout << "Enter your choose number: ";
}
