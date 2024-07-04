// SEIFELDIN TAHA ABDELRAHIM TOHAMI
// Matric no : A19EC3030


#include <iostream>
using namespace std;

// Program 1
class FruitNode {
private:
	string name;
	float price;
public:
	FruitNode* next;
	FruitNode(string n, float p) {
		name = n;
		price = p;
	}
	void getFruitInfo() {
		cout << name << " = RM" << price;
	}
};
class List {
private:
	FruitNode* headNode;
public:
	List() {
		headNode = NULL;
	}
	void task1(string, float);
	void task2();
	void task3(int, string, float);
	void task4();
};

void List::task1(string name, float price)
 {
	double index = 0;
	FruitNode* current = headNode;
	FruitNode* previous = NULL;
	FruitNode* newnode = new FruitNode(name, price);

	if (current == NULL)
	 {
		newnode->next = newnode;
		headNode = newnode;
	}

	else {
		while (current->next != headNode) 
		{
			current = current->next;
		}
		current->next = newnode;
		newnode->next = headNode;
		headNode = newnode;
	}
}
void List::task2()
 {
	FruitNode* current = headNode;
	if (current == NULL)return;
	do {
		current->getFruitInfo();
		current = current->next;
		if (current != headNode)
			cout << " >> " ;
	} while
	(current != headNode);
}

void List::task3(int l, string name, float price) {
	if (l == 0) {
		task1(name, price);
		return;
	}
	else {
		FruitNode* current = headNode;
		FruitNode* previous = NULL;
		FruitNode* newnode = new FruitNode(name, price);

		do {
			previous = current;
			current = current->next;
			l--;
		} while (current != headNode && l > 1);

		if (l == 0) {
			previous->next = newnode;
			newnode->next = headNode;
		}
		else {
			previous->next = newnode;
			newnode->next = current;
		}
	}
}
void List::task4() {
	FruitNode* current = headNode;
	if
	 (current->next == headNode) {
		headNode = NULL;
		delete(current);
		return;
	}
	FruitNode* previous = NULL;
	do
	 {
		previous = current;
		current = current->next;
	}
	 while (current->next != headNode);
	previous->next = headNode;
	delete(current);
}

int main()
{
	List fruitList;
	fruitList.task1("Kiwi", 21.89);
	cout << "Fruit List" << endl;
	fruitList.task2();
	cout << endl << endl;
	fruitList.task1("Apple", 11.95);
	cout << "Fruit List" << endl;
	fruitList.task2();
	cout << endl << endl;
	fruitList.task1("Orange", 16.50);
	cout << "Fruit List" << endl;
	fruitList.task2();
	cout << endl << endl;
	fruitList.task3(2, "Grape", 9.95);
	cout << "Fruit List" << endl;
	fruitList.task2();
	cout << endl << endl;
	fruitList.task4();
	cout << "Fruit List" << endl;
	fruitList.task2();
	cout << endl << endl;
	fruitList.task4();
	cout << "Fruit List" << endl;
	fruitList.task2();
	cout << endl << endl;

	return 0;
}

