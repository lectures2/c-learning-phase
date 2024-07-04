// Saleh Mohamed Ahmed Abdelaal 	A19EC4058
// Anas Roubi Abdelsattar Roubi		A19EC4047
// Abdelrahman Mahmoud				A19EC4042 
// Majd Alali						A19EC4038

#include <iostream>
using namespace std;

class Patient {
	public:
		int identifier;
		string name;
		int age;
		string gender;
		double invoice;
		Patient *next, *prev;
		Patient()
		{
			identifier = 0;
			name = "";
			age = 0;
			gender = "";
			invoice = 0.0;
			next = NULL;
			prev = NULL;
		}
		Patient(int id, string n, int a, string g, double i) {
			identifier = id;
			name = n;
			age = a;
			gender = g;
			invoice = i;
			next = NULL;
			prev = NULL;
		}
};

class List {
	private:
		Patient *head, *tail;
	public:
		List(void) { // list constructor
			head = NULL;
			tail = NULL;
		}
		void insertAtEmpty(Patient*);
		void insertAtFirst(Patient*);
		void insertAtMiddle(Patient*, int);
		void insertAtEnd(Patient*);
		void deleteAtFirst();
		void deleteAtMiddle(int);
		void deleteAtEnd();
		void printList();
		void findByName(string);
		void findById(int);
		void sortByName();
		void sortById();
		void sortByInvoice();
		void swap(Patient*, Patient*);
};

void List::insertAtEmpty(Patient* p) { // insert first patient in empty list
	Patient *currPatient = head;
	Patient *prevPatient = head;
	p->next = p;
	p->prev = p;
	head = p;
	tail = p;
}
void List::insertAtFirst(Patient* p) {
	Patient* currPatient = head;
	if(head == NULL)
	{
		insertAtEmpty(p);
		return;
	}
	currPatient->prev = p;
	p->next = currPatient;
	if(tail != NULL) {
		p->prev = tail;
	}
	head = p;
} 
void List::insertAtMiddle(Patient* p, int index) {
	Patient *currPatient = head, *temp;
	for(int i = 1; i < index-1; i++) { // get to patient before insertion point
		currPatient = currPatient->next;
	}
	if(currPatient == tail) { // insert as last patient
		insertAtEnd(p);
	}
	else {
		temp = currPatient->next;
		currPatient->next = p;
		p->prev = currPatient;
		p->next = temp;
		p->next->prev = p;
	}
}
void List::insertAtEnd(Patient* p) { // insert at the end of the list
	Patient *currPatient = head;
	currPatient->prev = p; // prev of first patient points to last patient
	Patient *prevPatient = NULL;
	while(currPatient->next != head)
	{
		prevPatient = currPatient;
		currPatient = currPatient->next;
	}
	p->next = head; // last patient's next points to first patient
	p->prev = currPatient;
	currPatient->next = p;
	tail = p;
}

void List::deleteAtFirst() { // delete first patient
	Patient *currPatient, *temp;
	currPatient = head;
	temp = currPatient->next;
	delete currPatient;
	head = temp;
	temp->prev = tail;
}

void List::deleteAtMiddle(int index) {
	Patient *currPatient = head, *temp1, *temp2;
	if(index == 1) {
		deleteAtFirst();
		return;
	}
	for(int i = 0; i < index-1; i++) { // get to patient we will delete
		currPatient = currPatient->next;
	}
	if(currPatient == tail) { // delete last node
		deleteAtEnd();
	}
	else {
		temp1 = currPatient->prev;
		temp2 = currPatient->next;
		delete currPatient;
		temp1->next = temp2;
		temp2->prev = temp1;
	}
}
void List::deleteAtEnd() { // delete last node
	Patient *currPatient = tail;
	if(currPatient) {
		tail = currPatient->prev;
		(currPatient->prev)->next = head; // next of previous patient set to first patient (so we delete last patient)
		delete currPatient;
	}
}

void List::printList() {
	cout << "Patients:" << endl;
	cout << "-----------------------------" << endl;
	Patient *currPatient = head;
	// print all of patients except last one
	while(currPatient != tail) {
		cout << "id: " << currPatient->identifier << endl;
		cout << "name: " << currPatient->name << endl;
		cout << "age: " << currPatient->age << endl;
		cout << "gender: " << currPatient->gender << endl;
		cout << "invoice: " << currPatient->invoice << endl;
		cout << "-----------------------------" << endl;
		currPatient = currPatient->next;
	}
	// print last patient
	cout << "id: " << currPatient->identifier << endl;
	cout << "name: " << currPatient->name << endl;
	cout << "age: " << currPatient->age << endl;
	cout << "gender: " << currPatient->gender << endl;
	cout << "invoice: " << currPatient->invoice << endl;
	cout << "-----------------------------" << endl;
	currPatient = currPatient->next;
	cout << endl;
}

void List::findByName(string n) {
	Patient *currPatient = head;
	bool isFound = false;
	while(currPatient != tail) {
		if(currPatient->name == n) {
			isFound = true;
			cout << "Patient Details: " << endl;
			cout << "id: " << currPatient->identifier << endl;
			cout << "name: " << currPatient->name << endl;
			cout << "age: " << currPatient->age << endl;
			cout << "gender: " << currPatient->gender << endl;
			cout << "invoice: " << currPatient->invoice << endl;
			cout << "-----------------------------" << endl;
			break;
		}
	}
	if(!isFound) {
		cout << "Patient " << n << " does not exist." << endl;
	}
}

void List::findById(int n) {
	Patient *currPatient = head;
	bool isFound = false;
	while(currPatient != tail) {
		if(currPatient->identifier == n) {
			isFound = true;
			cout << "Patient Details: " << endl;
			cout << "id: " << currPatient->identifier << endl;
			cout << "name: " << currPatient->name << endl;
			cout << "age: " << currPatient->age << endl;
			cout << "gender: " << currPatient->gender << endl;
			cout << "invoice: " << currPatient->invoice << endl;
			cout << "-----------------------------" << endl;
			break;
		}
	}
	if(!isFound) {
		cout << "Patient " << n << " does not exist." << endl;
	}
}
void List::sortByName() {
	
}
void List::sortById() {
	Patient* currPatient = head;
	Patient* temp;
	do
	{
		if(currPatient->identifier > currPatient->next->identifier) {
			swap(currPatient,currPatient->next);
		}
		currPatient = currPatient->next;
	}
	while(currPatient != head);
	
}
void List::swap(Patient* p1, Patient* p2)
{
	Patient* temp;
	p1->prev->next = p2;
	p2->next->prev = p1;
	p2->prev = p1->prev; 
	p1->next = p2->next;
	p2->next = p1;
	p1->prev = p2;
}
void List::sortByInvoice() {
	
}
void getPatientData(Patient* p)
{
	cout << "Enter patient's id: ";
	cin >> p->identifier;
	cout << "Enter patient's name: ";
	cin >> p->name;
	cout << "Enter patient's age: ";
	cin >> p->age;
	cout << "Enter patient's gender (Male/Female): ";
	cin >> p->gender;
	cout << "Enter patient's invoice: ";
	cin >> p->invoice;
}


int main()
{
	List list;
//	Patient p1 =  Patient(1000,"Saleh Mohamed", 20, "Male", 150.00);
//	Patient p2 =  Patient(1001,"AAA", 255, "Female", 200.00);
//	Patient p3 =  Patient(6969,"ssss", 240, "Male", 150.00);
//	Patient p4 =  Patient(1003,"sssz", 235, "Female", 202.00);
//	Patient p5 =  Patient(1004,"Sawwwwamed", 10, "Male", 1350.00);
//	Patient p6 =  Patient(1005,"Sqqqeewez", 15, "Female", 2010.00);
//	Patient p7 =  Patient(1006,"Saleqqqmez", 35, "Female", 2003.00);
//	list.insertAtEmpty(&p1);
//	list.insertAtEnd(&p2);
//	list.insertAtEnd(&p3);
//	list.insertAtEnd(&p4);
//	list.insertAtEnd(&p5);
//	list.swap(&p4,&p5);
//	list.printList();
	cout << "Welcome to our lab system" << endl;
	int choice1,choice2;
	while(true)
	{
		cout << "---------------------------------" << endl;
		cout << "[1] add patient " << endl;
		cout << "[2] delete patient " << endl;
		cout << "[3] find patient " << endl;
		cout << "[4] sort patients " << endl;
		cout << "[5] view all patients " << endl;
		cout << "[0] exit " << endl;
		cout << "choice => ";
		cin >> choice1;
		switch(choice1)
		{
			case 1:
			{
				Patient *p = new Patient();
				getPatientData(p);
				cout << "---------------------------------" << endl;
				cout << "[1] add at beginning of the list" << endl;
				cout << "[2] add at specific position in the list" << endl;
				cout << "[3] add at end of the list" << endl;
				cout << "choice => ";
				cin >> choice2;
				switch(choice2)
				{
					case 1:
						list.insertAtFirst(p);
						break;
					case 2:
						int index;
						cout << "what is the position of patient you are inserting? ";
						cin >> index;
						list.insertAtMiddle(p,index);
						break;
					case 3:
						list.insertAtEnd(p);
						break;
				}
				break;
			}
			case 2:
			{
				cout << "---------------------------------" << endl;
				cout << "[1] delete patient at beginning of the list" << endl;
				cout << "[2] delete patient at specific position in the list" << endl;
				cout << "[3] delete patient at end of the list" << endl;
				cin >> choice2;
				switch(choice2)
				{
					case 1:
						list.deleteAtFirst();
						break;
					case 2:
						int index;
						cout << "what is the position of patient you are deleting? ";
						cin >> index;
						list.deleteAtMiddle(index);
						break;
					case 3:
						list.deleteAtEnd();
						break;
				}
				break;
			}
			case 3:
			{
				cout << "---------------------------------" << endl;
				cout << "[1] find patient by name" << endl;
				cout << "[2] find patient by ID" << endl;
				cin >> choice2;
				switch(choice2)
				{
					case 1:
					{
						cout << "enter patient's name: ";
						string name;
						cin >> name;
						list.findByName(name);
						break;
					}
					
					case 2:
					{
						cout << "enter patient's ID: ";
						int id;
						cin >> id;
						list.findById(id);
						break;
					}
				}
				break;
			}
			case 4:
			{
				cout << "---------------------------------" << endl;
				cout << "[1] sort by name" << endl;
				cout << "[2] sort by ID" << endl;
				cout << "[3] sort by invoice" << endl;
				cin >> choice2;
				switch(choice2)
				{
					case 1:
						list.sortByName();
						break;
					case 2:
						int index;
						list.sortById();
						break;
					case 3:
						list.sortByInvoice();
						break;
				}
				break; 
			}
			case 5:
			{
				cout << "---------------------------------" << endl;
				list.printList();
				break;
			}

			case 0:
			{
				cout << "Thanks for using our program <3" << endl;
				return 0;
			}
		}
	}
}

