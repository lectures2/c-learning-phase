// Seifeldin taha abdelrahim tohami
// matric no : A19EC3030


#include <iostream>
using namespace std;

class Node {
	public:
		int item;
		Node *next, *prev;  
};

class List {
	Node *head; 
	
	public:
		List() {
			head = NULL;
		}
		
		void insertToEmpty (int n) {
			Node *newNode = new Node();
			
			newNode->item = n;
			head = newNode;
			newNode->prev = NULL;
			newNode->next = NULL;
		}

		void insertToFront (int n) {
			Node *newNode = new Node();
			
			newNode->item = n;
			head->prev = newNode;
			newNode->next = head;
			head = newNode;
			newNode->prev = NULL;
		}
	
		void displayForward() {
			Node *temp;
			temp = head;
			
			while (temp) {
				cout << temp->item << "\t";
				temp = temp->next;
			}
			cout << endl << endl;
		}
		
		void displaybackward() {
			Node *temp, *curr;
			temp = head;
			
			while (temp) {
				curr = temp;
				temp = temp->next;
			}
						
			while (curr) {
				cout << curr->item << "\t";
				curr = curr->prev;
			}
			cout << endl << endl;
		}
};

int main() {
	List itemList;
	
	itemList.insertToEmpty(10);
	itemList.displaybackward();
	itemList.insertToFront(20);
	itemList.displaybackward();
	itemList.displayForward();
}
