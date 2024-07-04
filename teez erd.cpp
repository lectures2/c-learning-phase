//Abdullah Mohammed Moqbel Qasem _A20EC4006_03
// ConsoleApplication3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

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

void List::task1(string name, float price) {
	int index = 0;

	FruitNode* cur = headNode;
	FruitNode* prev = NULL;

	FruitNode* newNode = new FruitNode(name, price);

	if (cur == NULL) {
		newNode->next = newNode;
		headNode = newNode;
		return;
	}

	else {
		while (cur->next != headNode) {
			cur = cur->next;
		}

		cur->next = newNode;

		newNode->next = headNode;
		headNode = newNode;
	}
}

void List::task2() {
	FruitNode* cur = headNode;

	if (cur == NULL)return;

	do {
		cur->getFruitInfo();
		cur = cur->next;
		if (cur != headNode)
			cout << " >> ";
	} while (cur != headNode);
}

void List::task3(int loc, string name, float price) {
	if (loc == 0) {
		task1(name, price);
		return;
	}
	else {
		FruitNode* cur = headNode;
		FruitNode* prev = NULL;

		FruitNode* newNode = new FruitNode(name, price);

		do {
			prev = cur;
			cur = cur->next;
			loc--;
		} while (cur != headNode && loc > 1);

		if (loc == 0) {
			prev->next = newNode;
			newNode->next = headNode;
		}
		else {
			prev->next = newNode;
			newNode->next = cur;
		}
	}
}

void List::task4() {
	FruitNode* cur = headNode;

	if (cur->next == headNode) {
		headNode = NULL;
		delete(cur);
		return;
	}

	FruitNode* prev = NULL;

	do {
		prev = cur;
		cur = cur->next;
	} while (cur->next != headNode);

	prev->next = headNode;

	delete(cur);
}

int main()
{
	List fruitList;

	fruitList.task1("Kiwi", 21.89);
	cout << "Fruit List\n";
	fruitList.task2();
	cout << endl << endl;

	fruitList.task1("Apple", 11.95);
	cout << "Fruit List\n";
	fruitList.task2();
	cout << endl << endl;

	fruitList.task1("Orange", 16.50);
	cout << "Fruit List\n";
	fruitList.task2();
	cout << endl << endl;

	fruitList.task3(2, "Grape", 9.95);
	cout << "Fruit List\n";
	fruitList.task2();
	cout << endl << endl;

	fruitList.task4();
	cout << "Fruit List\n";
	fruitList.task2();
	cout << endl << endl;

	fruitList.task4();
	cout << "Fruit List\n";
	fruitList.task2();
	cout << endl << endl;

	return 0;
}
