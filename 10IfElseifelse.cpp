#include <iostream>
using namespace std;

int main(){

	int day;
	cout <<"Enter no of day: "<<endl;
	cin >> day;
	//&& => And  || => Or
	if(day == 1){
		cout <<"Sun";
	}else if(day == 2){
		cout <<"Mon";
	}else if(day == 3){
		cout <<"Tues";
	}else if((day == 50) && (1==2)){
		cout <<"Hello";
	}
	else{
		cout <<"Invaid";
	}
	
	
	
	
return 0;
}
