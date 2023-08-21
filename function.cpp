#include <iostream>
#include <string>
#include <time.h>
#include <iomanip>
using namespace std;
int main()
{
	int num,num1,Sum = 0,Max = 0;
	float Avg = 0.0;
	srand(time(NULL));
	num = 1+rand()%9;
	cout<<"Random number of student (1-10) : "<<num<<endl;
	for(int i = 1 ; i <= num ; i++)
	{	
		cout <<"input score " <<i<< " : ";
		cin >>num1;
		if(num1>Max)
		{ Max = num1;
		}
		Sum = Sum + num1;
		
	}
	cout <<setfill('-')<<setw(20)<<""<<endl;
	Avg = (float)Sum/(float)num;
	cout << "Max score = " <<Max<<endl;
	cout << "Sum score = " <<Sum <<endl;
	cout << "Avg.score = " <<fixed<<setprecision(2)<<Avg<<endl;
	









	system("pause");
	return (0);
}