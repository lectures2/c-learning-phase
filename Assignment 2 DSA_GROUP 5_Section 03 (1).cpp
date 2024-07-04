/*
Group 5
Section 03

PIRAVEEN ASHWINATH A/L R JAYABALAN	A19SC0349
SEIFELDIN TAHA ABDELRAHIM TOHAMI	A19EC3030
ASHRAFUR RAHMAN NAZIN				A20EC4012
TAHMEDUR RAHMAN						A19EC4059

Date of completion: 11/01/2022
*/

#include<iostream>
#include<string>
#include <bits/stdc++.h>
using namespace std;

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
void delete_beg(){
	if (head == NULL){
		cout << "its empty" << endl;
	}else{
		node* first_node = head;
		head = first_node->next;
		delete(first_node);
	}

void removeFront(member** head,int id){
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
	delete_beg();
	int a,i,j;
	string x,y,z;
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
			cout<<"Date: ";
			cin>>z;
			cout<<endl;
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
			cout<<"Date: ";
			cin>>z;
			cout<<endl;
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
			cout<<"Date: ";
			cin>>z;
			cout<<endl;
			insertRear(&head,a,x,y,z);
		}
	}
	if(i==2){
		cout<<"1.INSERT AT THE FRONT"<<endl;
		cout<<"2.INSERT AT THE MIDDLE"<<endl;
		cout<<"3.INSERT AT THE REAR"<<endl;
		cout<<"4.REMOVE FRONT"<<endl;
		cout<<"5.VIEW MEMBER"<<endl;
		cout<<"6.SEARCH MEMBER"<<endl;
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
			cout<<"Date: ";
			cin>>z;
			cout<<endl;
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
			cout<<"Date: ";
			cin>>z;
			cout<<endl;
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
			cout<<"Date: ";
			cin>>z;
			cout<<endl;
			insertRear(&head,a,x,y,z);
		}
		if(j==4){
			cout<<"ID: ";
			cin>>a;
			cout<<endl;
			removeFront(&head,a);
			viewMember(head);
		}
		if(j==5){
			viewMember(head);
		}
		if(j==6){
			if(a==NULL){
				cout<<"NO RESULTS."<<endl;
				
			}
			else{
				cout<<a<<x<<y<<z;
			}
		}
	}
}
	while(i!=3);
	
	return 0;
}
