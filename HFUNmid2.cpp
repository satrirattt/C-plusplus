#include <iostream>
#include <time.h>
using namespace std;
void checkNum(int secret_num , int guess_num  )
{
	if (guess_num  < secret_num )
		cout << "The secret number is lower" <<endl;
	else if (guess_num  > secret_num)
		cout << "The secret number is higher" <<endl;
	else
		cout << "Congratulations!!" <<endl;

}
int main()
{
	srand(time(NULL));
	int secret_num = 1+rand()%9;
	cout << "###Welcome to guessing number game###" <<endl ;
	cout << "Secret number has been chosen" <<endl;

	int guess = 0;
	while(true){
		int guess_num;
		cout << "Guess the number (1 to 10) : ";
		cin >> guess_num;
		guess++;

		checkNum(secret_num, guess_num);

        if (guess_num == secret_num) {
            cout << "The secret number is " << secret_num << endl;
            cout << "You made " << guess << " guesses" << endl;
            break;
        }	
	}
return(0);
}
