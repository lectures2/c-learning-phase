/*
Group 5
Section 03

PIRAVEEN ASHWINATH A/L R JAYABALAN	A19SC0349
SEIFELDIN TAHA ABDELRAHIM TOHAMI	A19EC3030
ASHRAFUR RAHMAN NAZIN				A20EC4012
TAHMEDUR RAHMAN						A19EC4059

Date of completion: 05/02/2022
*/

#include<iostream>
#include<string>
#include <bits/stdc++.h>
using namespace std;

struct bookId {
  int value;
  struct bookId *left;
  struct bookId *right;
};

struct bookId *newBookId(int val) {
  struct bookId *temp = (struct bookId *)malloc(sizeof(struct bookId));
  temp->value = val;
  temp->left = temp->right = NULL;
  return temp;
}

struct bookId *bookIdval(struct bookId *bookId) {
  struct bookId *current = bookId;
  while (current && current->left != NULL)
    current = current->left;
  return current;
}

struct bookId *searchBookId(struct bookId *bid, int value) {
  if (bid == NULL) 
  return bid;

  if (value < bid->value){
    bid->left = searchBookId(bid->left, value);
    cout<<bid->left<<endl;
	}
  if (value > bid->value){
    bid->right = searchBookId(bid->right, value);
    cout<<bid->right<<endl;
	}
}

struct bookId *insertBookId(struct bookId *bookId, int value) {
  if (bookId == NULL) 
  return newBookId(value);

  if (value < bookId->value)
    bookId->left = insertBookId(bookId->left, value);
  else
    bookId->right = insertBookId(bookId->right, value);

  return bookId;
}

void recursive(struct bookId *bid) {
  if (bid != NULL) {
    recursive(bid->left);
    recursive(bid->right);
  }
}

class member{
	public:
		int id;
		string name;
		string book;
		string date;
		member* next;	
};

void viewMember(member*n){
	while(n!=NULL){
		cout<<n->id<<endl;
		cout<<n->name<<endl;
		cout<<n->book<<endl;
		cout<<n->date<<endl;
		cout<<endl;
		n=n->next;
	}
}

void insertFront(member** head,int newId, string newName, string newBook, string newDate){
	member* newMember= new member();
	newMember->name=newName;
	newMember->book=newBook;
	newMember->date=newDate;
	newMember->next=*head;
	*head=newMember;
}

void insertMiddle(member** before,int newId, string newName, string newBook, string newDate){
	member* newMember= new member();
	newMember->id=newId;
	newMember->name=newName;
	newMember->book=newBook;
	newMember->date=newDate;
	
	if(before==NULL){
		cout<<"ERROR! NODE DOES NOT HAVE A POINTER!"<<endl;
		return;
	}
	
	newMember->next= *before;
}

void insertRear(member** head,int newId, string newName, string newBook, string newDate){
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

void removeRear(member** head, int id, string name, string book, string date){
	if(*head!=NULL){
		cout<<"ERROR! NODE HAS A POINTER!"<<endl;
	}
	else{
		delete(head);
	}
}

void removeFront(member** head,int id, string name, string book, string date){
	if(*head==NULL){
		cout<<"ERROR! NODE DOES NOT HAVE A POINTER!"<<endl;
		return;
	}
	else{
		delete(head);
	} 
}

void addMember(){
	cout<<"1.STUDENT"<<endl;
	cout<<"2.ADMINISTRATOR"<<endl;
	cout<<"3.EXIT"<<endl;
}

int main(){
	int a,i,j,k;
	string x,y,z;
	struct bookId *bid = NULL;
	member* head= new member();
	member* second= new member();
	member* third= new member();
	
	do{
		addMember();
	
	cin>>i;
	
	
	if(i==1){
		cout<<"1.INSERT AT THE FRONT"<<endl;
		cout<<"2.INSERT AT THE MIDDLE"<<endl;
		cout<<"3.INSERT AT THE REAR"<<endl;
		cin>>j;
		if(j==1){
			cout<<"ID: ";
			cin>>a;
			cout<<endl;
			cout<<"Name: ";
			cin>>x;
			cout<<endl;
			cout<<"Book: ";
			cin>>y;
			cout<<endl;
			cout<<"Book ID: ";
			cin>>k;
			cout<<endl;
			cout<<"Date: ";
			cin>>z;
			cout<<endl;
			bid=insertBookId(bid,k);
			insertFront(&head,a,x,y,z);
		}
		if(j==2){
			cout<<"ID: ";
			cin>>a;
			cout<<endl;
			cout<<"Name: ";
			cin>>x;
			cout<<endl;
			cout<<"Book: ";
			cin>>y;
			cout<<endl;
			cout<<"Book ID: ";
			cin>>k;
			cout<<endl;
			cout<<"Date: ";
			cin>>z;
			cout<<endl;
			bid=insertBookId(bid,k);
			insertMiddle(&head,a,x,y,z);
		}
		if(j==3){
			cout<<"ID: ";
			cin>>a;
			cout<<endl;
			cout<<"Name: ";
			cin>>x;
			cout<<endl;
			cout<<"Book: ";
			cin>>y;
			cout<<endl;
			cout<<"Book ID: ";
			cin>>k;
			cout<<endl;
			cout<<"Date: ";
			cin>>z;
			cout<<endl;
			bid=insertBookId(bid,k);
			insertRear(&head,a,x,y,z);
		}
	}
	if(i==2){
		cout<<"1.INSERT AT THE FRONT"<<endl;
		cout<<"2.INSERT AT THE MIDDLE"<<endl;
		cout<<"3.INSERT AT THE REAR"<<endl;
		cout<<"4.REMOVE FRONT"<<endl;
		cout<<"5.REMOVE REAR"<<endl;
		cout<<"6.VIEW MEMBER"<<endl;
		cout<<"7.SEARCH BOOK ID"<<endl;
		cin>>j;
		if(j==1){
			cout<<"ID: ";
			cin>>a;
			cout<<endl;
			cout<<"Name: ";
			cin>>x;
			cout<<endl;
			cout<<"Book: ";
			cin>>y;
			cout<<endl;
			cout<<"Book ID: ";
			cin>>k;
			cout<<endl;
			cout<<"Date: ";
			cin>>z;
			cout<<endl;
			bid=insertBookId(bid,k);
			insertFront(&head,a,x,y,z);
		}
		if(j==2){
			cout<<"ID: ";
			cin>>a;
			cout<<endl;
			cout<<"Name: ";
			cin>>x;
			cout<<endl;
			cout<<"Book: ";
			cin>>y;
			cout<<endl;
			cout<<"Book ID: ";
			cin>>k;
			cout<<endl;
			cout<<"Date: ";
			cin>>z;
			cout<<endl;
			bid=insertBookId(bid,k);
			insertMiddle(&head,a,x,y,z);
		}
		if(j==3){
			cout<<"ID: ";
			cin>>a;
			cout<<endl;
			cout<<"Name: ";
			cin>>x;
			cout<<endl;
			cout<<"Book: ";
			cin>>y;
			cout<<endl;
			cout<<"Book ID: ";
			cin>>k;
			cout<<endl;
			cout<<"Date: ";
			cin>>z;
			cout<<endl;
			bid=insertBookId(bid,k);
			insertRear(&head,a,x,y,z);
		}
		if(j==4){
			cout<<"ID: ";
			cin>>a;
			cout<<endl;
			removeFront(&head,a,x,y,z);
			viewMember(head);
		}
		if(j==5){
			cout<<"ID: ";
			cin>>a;
			cout<<endl;
			removeFront(&head,a,x,y,z);
			viewMember(head);
		}
		if(j==6){
			viewMember(head);
		}
		if(j==7){
			cout<<"Book ID: ";
			cin>>k;
			cout<<endl;
			searchBookId(bid,k);
			cout<<bid<<endl;
			cout<<endl;
		}
	}
}
	while(i!=3);
	
	return 0;
}
