#include <iostream>
using namespace std;
void showArray(int z[]);
int functionlength();
int main(){

int a[5] = {1, 2, 3, 4, 5};

showArray(a);
	
return 0;
}

void showArray(int z[]){
	int len = functionlength();
	for(int i=0; i<len; i++){
		cout << z[i]<<endl;
	}
}

int functionlength(){
	
	return 5;
}
