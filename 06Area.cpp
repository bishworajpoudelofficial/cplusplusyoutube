//2. WAP in  c that find area of circle. For PI*r^2

#include <iostream>

using namespace std;

int main(){
	const float PI = 3.14;
	int radius;
	float area;
	
	cout <<"Enter Radius: "<<endl;
	cin >> radius;
	
	area = PI*radius*radius;
	
	// Display
	cout <<"The area of circle is "<<area;
	
	return 0;
}
