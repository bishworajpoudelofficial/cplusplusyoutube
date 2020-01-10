#include <iostream>
using namespace std;

class Rectangle{
	private:
		int len;
		int bre;
	
	int calcuateArea(){
		return len * bre;
	}	
	public:
		Rectangle(int l, int b){
				this->len = l;
				this->bre = b;
		}
		
		void displayArea(){
			cout <<"The area is "<<calcuateArea();
		}
};

int main(){

Rectangle r(10,20);


r.displayArea();
	
return 0;
}
