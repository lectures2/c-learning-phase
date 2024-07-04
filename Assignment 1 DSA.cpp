#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

class member {
public:
	string name[100];
	string book[100];
	string date[100];
	int id[100];
	

	void addMember();
	void viewMember();
	void print();
};

void member::addMember() {
	int n,a,b,d; 
	cout << "FILL IN THE REQUIRED INFORMATION." << endl;
	cout << endl;
	cout << "Name: ";
	cin >> name[n];
	cout << endl;
	cout << "ID (Integers only!): ";
	cin >> id[a];
	cout << endl;
	cout << "Book title: ";
	cin >> book[b];
	cout << endl;
	cout << "Date: ";
	cin >> date[d];
	cout << endl;
	cout << endl;
	cout << "Saved!"<<endl;

}

void member::viewMember(){
	int x;
	cout<<"SELECT SORTING METHOD"<<endl;
	cout<<"1. Name"<<endl;
	sort(id, id + 100);
	for(int i=0;i<100;i++)
	cout << "enter " << i << " o number: ";
	cout<<"2. ID"<<endl;
	cin>>x;
	
	if (x == 1)
		cout<<name<<endl;
	else
		viewMember();
}

void member::print(){
	int p;
	cout << "LIBRARY MANAGEMENT SYSTEM " << endl;
	cout << "1. Borrow book" << endl;
	cout << "2. View borrower information" << endl;
	cin >> p;
	if (p == 1)
		addMember();
	else
		viewMember();

}

int main() {
	member obj;
	obj.print();
	
	return 0;
}
