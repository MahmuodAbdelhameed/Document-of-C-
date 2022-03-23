#include <iostream>
using namespace std;

int main() {
	char name;
	int pennies, nickels, dimes, quarters, dollers, totalDollers, change, totalCents; 

	//read your first name:
	cout <<"Enter your first name: \n";
	cin >>name;

	//read in the counts
	cout <<"numbr of dollers: \n";
	cin >>dollers;
	cout<<"numbr of quarters: \n";
	cin>>quarters;
	cout <<"numbr of dimes: \n";
	cin >>dimes;
	cout <<"numbr of nickles: \n";
	cin >>nickels;
	cout <<"numbr of pennies: \n";
	cin >>pennies;

	//compute the total value in cents
	totalCents = 100 * dollers + 25 * quarters + 10 * dimes + 5 * nickels + pennies;

	//fined the value in dolles and change
	totalDollers = totalCents / 100;
	change = totalCents % 100;

	//display the value in dolles and change
	cout << "Coin credit:" << name << endl;
	cout << "Dollers: " << totalDollers << endl;
	cout << "Cents: " << change << endl;
 return 0;
}
