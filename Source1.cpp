#include<iostream>
#include<string>
using namespace std;
int main() {

	char Ch;
	string user, Pass, checkU, checkP;

	do {
		cout << "/////////////////menu////////////////\n";
		cout << "1. Register\n";
		cout << "2. Login\n";
		cout << "Q. Exit Program\n";
		cout << "---------------------------------------\n";
		cout << "Enter Menu : ";
		cin >> Ch;
		if (Ch == '1')
		{
			cout << "************Register************\n";
			cout << "Input Username : ";
			cin >> user;
			cout << "Input Password : ";
			cin >> Pass;
		}
		else if (Ch == '2')
		{
			cout << "************Login**************\n";
			cout << "Input Username : ";
			cin >> checkU;
			cout << "Input Password : ";
			cin >> checkP;
			if (user == checkU && Pass == checkP)
			{
				cout << "Username or Password Correct ^_^\n";
			}
			else
			{
				cout << "!!!!Username or Password incorrect Please try again!!!!\n";
			}

		}
	} while (Ch != 'Q' && Ch != 'q');
	cout << "Exit Program\n";
}