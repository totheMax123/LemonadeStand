#include "stdafx.h"
#include "Lemonade.h"
#include <iomanip>
#include <string>
#include <ctime>
#include <iostream>
using namespace std;

string sellSkip;
string demand;
string weather[15] = {"rainy", "sunny", "sunny", "rainy", "sunny", "cloudy", "partly cloudy", "sunny", "sunny", "cloudy", "partly cloudy", "partly cloudy", "cloudy", "partly cloudy", "sunny"};;
Lemonade::Lemonade():cups(10), price(2.5), ads(2.0), sugar(4), total(20.00), expense(0)
{
	srand(time(0));
}
void Lemonade::setup() {
	random = rand();
	cout << "  Temp: " << " It is " << weather[random] << "outside. " << "Demand for lemonade will be" << endl;
	while (sellSkip != "y" && sellSkip != "n") {
		while (true) {
			char cont = 'y';
			cout << "  Amount of cups: " << cups << " at 5/$5\n"
				<< "  Price: $" << fixed << setprecision(2) << price << "/cup\n"
				<< "  $" << ads << " on advertising\n"
				<< "  " << sugar << " pinches of sugar per cup\n";
			expense += cups + ads;
			cout << "  You are spending $" << expense << " out of $" << total << ". Would you like to make any changes? (y/n)\n  ";
			cin >> cont;
			if (expense <= total) {
				if (cont == 'n')
					break;
			}
			else {
				cout << "  Expense is greater than total! Lower your costs. \n";
			}
			cout << "  Type in the amount of cups.\n  ";
			cin >> cups;
			cout << "  Type in the price per cup.\n  ";
			cin >> price;
			cout << "Type in the amount to be spent on advertising. \n  ";
			cin >> ads;
			cout << "Type in the amount of sugar.\n  ";
			cin >> sugar;
		}
		cout << "  Would you like to sell this lemonade? (y to sell/n to skip)\n  ";
		cin >> sellSkip;
	}
}
void Lemonade::run() {
	cout << "Hi";
}
int Lemonade::results() {
	cout << "HI";
	return total;
}

Lemonade::~Lemonade()
{
}
