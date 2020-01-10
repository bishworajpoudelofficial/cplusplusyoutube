#include <iostream>
using namespace std;

int main(){

// break - break entire loop
// continue - bypsss


for(int i=10; i>=1; i--){
	if(i==5){
		continue;
	}
	cout << i<<endl;
}

return 0;
}
