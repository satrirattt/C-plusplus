#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
int main()
{
	int num[10];
	srand(time(NULL));
	cout << "Element Value Histogram " <<endl;
	cout <<endl;
	for(int i = 0; i < 10;i++)
	{
		num[i] = 1+rand()%29;
		cout<<"  "<<i<<"   "<<setw(2)<< num[i]<<" ";

		for(int j = 0 ; j < num[i] ;j++)
		{
			cout << "*" ;
		
		}
		cout<<endl;
	
	}
	return(0);
}