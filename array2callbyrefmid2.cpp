#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
void check_result(int x);
int main()
{
	int num[4], total = 0, avg = 0,max = 0,min;
	string name[4];
	for (int i = 0; i < 4; i++)//i<=3 input array
	{	cout<<"Enter name ["<<i<<"] : " ;
		cin >> name[i];
		cout<<"Enter score ["<<i<<"] : ";
		cin >> num[i];
		

	}
	cout << "------------------------------------------"<<endl;
	cout << " Name\t\tScore\t\tResult" <<endl;
	cout << "------------------------------------------"<<endl;
	min = num[0] ; 
	for (int i = 0; i < 4; i++)//i<=3 display array
	{	cout <<" " << name[i] <<"\t\t"<<num[i]<<"\t\t" ;
		check_result(num[i]);
		total = total + num[i];
		if(num[i] > max)
			max = num[i];
		if(num[i] < min)
			min = num[i];
		

	}
	cout << "------------------------------------------"<<endl;//setfill('-')<<setw(30)
	cout<<"Max score = " <<max<<endl;
	cout<<"Min score = " <<min<<endl;
	cout<<"Total = " <<total<<endl;
	cout<<"Average = "<<(float)total/4<<endl;
	
	system("pause");
	return(0);
}
void check_result(int x)
{
	if(x > 49)
		cout<<"Pass"<<endl;
	else
		cout<<"Failed"<<endl;

}
