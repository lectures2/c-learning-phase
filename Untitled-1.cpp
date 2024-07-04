#include <iostream>
 using namespace std;
 
 int main(){
 	cout << "hello please choose + - x /" << endl;
 	
 	char op;
 	cin >> op;
 	double n1,n2;
 	cin >> n1 >> n2;
 	
 	switch(op){
 		case '+':
 			cout << n1 << " + " << n2 << " = " << n1 + n2 << endl;
 			break;
 			case '-':
 				cout << n1 << " - " << n2 << " = " << n1 - n2 << endl;
 				break;
 				case 'x':
 					cout << n1 << " x " << n2 << " = " << n1 * n2 << endl;
 					break;
 					case '/':
 						cout << n1 << " / " << n2 << " = " << n1 / n2 << endl;
 						break;
 						default :
 							cout << "a7a error why did u choose something else no in the system?" << endl;
 							break;
	 }
 	return 0;
 }
