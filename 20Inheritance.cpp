#include <iostream>
using namespace std;
class Rect{
	public:
		int len;
		int bre;
	
	Rect(){
		cout << "This is constructor of rect";
	}	
};

class Cube: public Rect{
	public:
		int hei;
	
	Cube(){
		cout << "This is constructor of cube";
	}
};

int main(){


Cube c;

return 0;
}
