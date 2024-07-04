#include <iostream>
using namespace std;

int main(){
	cout << "hello welcome please enter your username" << endl << "username : " ;
	string nanos;
	cin >> nanos;
	if (nanos == "bodi"  ){
		cout << "this account is banned" << endl;
		return 0;
	}else{
	cout << "hello " << nanos << " nice to see u here" << " please press 1 to continue " << endl;
}
    string play;
	cin >> play;
    
if (play == "1"){
	string foodname;
	cout << "what is ur favorite food? " << endl << "name of the food: "  << foodname ;
    cin >> foodname;
    cout << "good to know that  "<< "(" << foodname << ")" <<" is ur favorite food" << endl;
}

	
	return 0;
}

