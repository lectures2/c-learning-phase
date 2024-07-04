/*
Name: SEIFELDIN TAHA ABDELRAHIM TOHAMI
Matric no: A19EC3030
*/


//Program 1
#include <iostream>
using namespace std;

class FruitNode {
private:
string name;
float price;
public:
FruitNode *next;
FruitNode(string n, float p) {
name = n;
price = p; }
void getFruitInfo() {
cout << name << " = RM" << price; }
};
class List {
private:
FruitNode *headNode;
public:
List() {
headNode = NULL; }
void task1(string, float);
void task2();
void task3(int, string, float);
void task4();
};

int main()
{
List fruitList;

return 0;
}

void list::task1(){
	
	node* new_node ,*last;
	new_node = new node;
	new_node->next = string;
	
	if (head == NULL){
		head = new_node;
		new_node->next = NULL;	
	}
	else{
		last = head;
		while(last->next != NULL){
			last = last->next
		}
	}
	
}
void list::task2(){
	
}
void List::task3(){
	FruitNode *p= headNode;
	cout << "\nPrint forward:" << end;
	while(p-next != headNode){
		cout << "[" <<p->price << " << " << p->name << " ] << ";
		p = p->next;
	}
}


