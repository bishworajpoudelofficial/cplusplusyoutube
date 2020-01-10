#include <iostream>
using namespace std;

class Person{
	
	public:
	// data// proporties
	int id;
	string name;
	float height;
	
	// function
	void printPersonDetails(){
		cout <<"Id is: "<<this->id << ". Name: "<< this->name<<
		"Height: "<< this->height;
		
	}
	
		
		
	
};

int main(){

Person p;
p.id = 1;
p.name = "Sura";
p.height = 5.5;

Person p2;
p2.id = 10;
p2.name = "Bishworaj";
p2.height = 6.0;


p.printPersonDetails();
p2.printPersonDetails();
	
return 0;
}
