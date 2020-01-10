#include <iostream>
using namespace std;

int main(){
	int num1, num2;
	cout <<"Enter Num1: ";
	cin >>num1;
	cout <<"Enter Num2:";
	cin >>num2;
	int sum, diff, mul, div, mod;
	
	// Calcuate
	sum = num1 + num2;
	diff = num1 - num2;
	mul = num1 * num2;
	div = num1 / num2;
	mod = num1 % num2;
	
	// Display value
	cout << "The sum is "<<sum<<endl;
	cout << "The diff is "<<diff<<endl;
	cout << "The mul is "<<mul<<endl;
	cout << "The div is "<<div<<endl;
	cout << "The mod is "<<mod<<endl;
	
	
	return 0;
}
