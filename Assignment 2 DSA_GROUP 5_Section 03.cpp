/*
Group 5

PIRAVEEN ASHWINATH A/L R JAYABALAN	A19SC0349
SEIFELDIN TAHA ABDELRAHIM TOHAMI	A19EC3030
ASHRAFUR RAHMAN NAZIN				A20EC4012
TAHMEDUR RAHMAN						A19EC4059

Date of completion: 11/01/2022
*/

#include<iostream>
#include<string>
using namespace std;

class member{
	public:
		int id;
		string name;
		string book;
		string date;
		member* next;		
};

void printList(member*n){
	while(n!=NULL){
		cout<<n->id<<endl;
		cout<<n->name<<endl;
		cout<<n->book<<endl;
		cout<<n->date<<endl;
		cout<<endl;
		n=n->next;
	}
}

void insert(member** head,int newId, string newName, string newBook, string newDate){
	member* newMember= new member();
	newMember->id=newId;
	newMember->name=newName;
	newMember->book=newBook;
	newMember->date=newDate;
	newMember->next=NULL;
	
	if (*head==NULL){
		*head=newMember;
		return;
	}
	
	member* rear= *head;
	while (rear->next!=NULL){
		rear= rear->next;
	}
	
	rear->next=newMember;
	
}

void delete_beg(){
	if (head == NULL){
		cout << "its empty" << endl;
	}else{
		node* first_node = head;
		head = first_node->next;
		delete(first_node);
	}
}
int main(){
	
	
	int a=id;
	string x=name;
	string y=book;
	string z=date;
	
	member* head= new member();
	member* second= new member();
	member* third= new member();
	
	head->id;
	head->name;
	head->book;
	head->date;
	head->next=NULL;
	
	second->id=1;
	second->name="John";
	second->book="Moby Dick";
	second->date="18/09/2020";
	second->next=third;
	
	third->id=1;
	third->name="John";
	third->book="Moby Dick";
	third->date="18/09/2020";
	third->next=NULL;

	insert(&head, 2,"Michael","Moby Dick","18/09/2020");
	insert(&head, 2,"Michael","Moby Dick","18/09/2020");	
	printList(head);
	
	
	
	return 0;
}
