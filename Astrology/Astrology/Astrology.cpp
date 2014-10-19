#include<iostream>
using namespace std;

int main()
{
	
	int day;
	int month;
	char n='y';
	while (n=='Y'||n=='y')
	{
		cout << "Please input your birthday: " << endl;
		cin >> day >> month;
		switch (month)
		{
		case 1:
			if (day <= 19 && day >= 1)
			{
				if (day == 18 || day == 19)
				{
					cout << "Cross Aquarius and Capricorn " << endl;
				}
				cout << "Capricorn" << endl;
			}
			else if (day >= 20 && day <= 31)
			{
				if (day ==20||day==21)
				{
					cout << "Cross Aquarius and Capricorn" << endl;
				}
				cout << "Aquarius" << endl;
			}
			break;
		}
		cout << "If you want to continue please input y else others: " << endl;
		cin >> n;
		
	}
	return 0;
	
}