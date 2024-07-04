#include <iostream>
using namespace std;
class Phone {
	public:
		double cost;
		int slots;
};
int main(){
	Phone honor;
	Phone iphone;
	
	honor.cost = 100.0;
	honor.slots = 2;
	
	iphone.cost = 200.0;
	iphone.slots = 2;
	
	
	cout << "the price of honor play :" << honor.cost << endl;
	cout << "the price of iphone 8 :" << iphone.cost << endl;
	
	cout << "the slots number of honor play :" << honor.slots << endl;
	cout << "the slots number of iphone 8 :" << iphone.slots << endl;
	
	return 0;
}


	

