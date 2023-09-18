#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
	int num[4], total = 0, avg = 0,max = 0;
	string name[4];
	for (int i = 0; i < 4; i++)//i<=3 input array
	{	cout<<"Enter name ["<<i<<"] : " ;
		cin >> name[i];
		cout<<"Enter score ["<<i<<"] : ";
		cin >> num[i];
		

	}
	cout << "---------------------"<<endl;
	cout << " Name         Score" <<endl;
	cout << "---------------------"<<endl;
	for (int i = 0; i < 4; i++)//i<=3 display array
	{	cout <<" " << name[i] <<"\t\t"<<num[i] <<endl;
		total = total + num[i];
		if(num[i] > max)
			max = num[i];
	}
	cout << "---------------------"<<endl;//setfill('-')<<setw(30)
	cout<<"Max score = " <<max<<endl;
	cout<<"Total = " <<total<<endl;
	cout<<"Average = "<<(float)total/4<<endl;
	
	system("pause");
	return(0);
}
