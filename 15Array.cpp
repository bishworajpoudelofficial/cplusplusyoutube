#include <iostream>
using namespace std;

int main(){
// Array: You can store many values for same type;

float emp[5];
// store
for(int i=0; i<5; i++){
	cout<< "Enter value at index "<<i<<": 20";
	cin >> emp[i];
}

// display
for(int i=0; i<5; i++){
	cout << emp[i]<<endl;
}



	
return 0;
}
