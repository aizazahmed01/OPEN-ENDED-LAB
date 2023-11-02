//Task 1: Library System with Fine Calculation

#include<iostream>
#include<string>
using namespace std;
int main()
{
	int book = 3;
	int fine = 1;
	int amount = 0;
	int days;
	string choice;
	while (1)
	{
		cout << "MENU: \n"<<endl;
		cout << "1. BORROW(B) "<<endl;
		cout << "2. RETURN(R)"<<endl;
		cout << "3. QUIT(Q) "<<endl;
		cout << "SELECT ONE: ";
		cin >> choice;
		if (choice == "1" || choice =="B" || choice == "b")
		{
			if (book > 0)
			{
				book--;
				cout << "BOOK BORROWED ! \n";
			}
			else
			{
				cout << "NO BOOK AVAILABLE \n";

			}
		}
		else if (choice == "2" || choice == "R" || choice == "r")
		{
			if (book < 7)
			{
				book++;
				cout << "ENTER THE NO OF DAYS: ";
				cin >> days;
				fine = days * fine;
				cout << "BOOK RETURNED \n";
				cout << "TOTAL FINE: $" << fine << endl;
			}
			else
			{
				cout << "CAN'T RETURN THE LIBRARY IS FULL ! \n";

			}


		}
		else if (choice == "3" || choice == "Q" || choice == "q")
		{
			

			cout << "THANKS FOR BORROWING FROM HERE - HAVE A NICE DAY <3"<<endl;
			break;
		}
		else
		{
			cout << "INVALID CHOICE \n";
		}
	}

    system("pause");
	return 0;
}