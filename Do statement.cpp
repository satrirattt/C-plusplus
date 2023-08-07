#include <iostream>
#include <string>
using namespace std;
int main()
{

	/*
	//do statment
	int num, value, sum;
	bool Flag = true;
	num = 1;
	sum = 0;
	do 
	{	cout << "Enter value " << num << " : " ;
		cin >> value;
		if ((value >=1 ) && (value <= 20 )){
			sum += value;
			num++;
	}

		else Flag = false;

	} while (Flag == true);
		if (num > 1 ){
		float Avg;
		Avg = static_cast<float>(sum)/--num;
		cout << "Averange od data = " << Avg << endl;

	}
	else cout << "No data input." <<endl;
	*/

	char Ch;
	int Count = 0;
	string Str;
	cout << "Enter string : " ;
	while ((Ch = cin.get()) != '\n'){
		Count++;
		Str += Ch;
		if (Ch == '.') break;
	}
	cout << "\nLength of string(" << Str << ") is ";
	cout << Count << endl;


	system("pause") ;
	return(0);
}
