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
		void setLength(int l){
			if(l<1){
				len = 1;
			}else{
			this->len = l;
			}
		
		}
			void setBreath(int b){
			this->bre = b;
		}
		
		void displayArea(){
			cout <<"The area is "<<calcuateArea();
		}
};

int main(){

Rectangle r;
r.setLength(-10);
r.setBreath(20);


r.displayArea();
	
return 0;
}
