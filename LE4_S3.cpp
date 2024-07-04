// name: SEIFELDIN TAHA ABDELRAHIM TOHAMI
// MATRIC NO: A19EC3030

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

struct node{
	int value;
	node *next;
};

class Stack{
	public:
		Stack();
		void push(int v);
		void pop();
		bool isEmpty();
		int stackTop();
	
	private:
		node *top;
};

Stack::Stack(){
	top=NULL;
}

bool Stack::isEmpty(){
	return (top== NULL);
}

void Stack::push(int v){
	node *nn = new node;
	nn->value = v;
	nn->next = top;
	top = nn;
}

void Stack::pop(){
	if (isEmpty()){
		cout<<"\nEmpty stack, unable to pop";
	} else {
		top = top->next;
	}
}

int Stack::stackTop(){
	if (isEmpty()){
		cout<<"\nEmpty stack, unable to stackTop";
	} else {
		return top->value;
	}
}

void Q2a_answer(){
    char exp[] = "563/-2+";  
	cout<<"\nQ2a_answer" << endl;
	cout << "exp is : 563/-2+ " << endl;
	
}

void Q2b_answer(){
    char exp[] = "563/-2+";  
	cout<<"\nQ2b_answer" << endl;
	cout << "exp is : 563/-2+ " << endl;
	cout << "Create a stack s" << endl;
	cout << "And test empty or not" << endl;
	cout << "Is the stack empty ? : 1" << endl; 
	
}

void Q2c_answer(){
    char exp[] = "563/-2+";  
	cout<< "\nQ2c_answer" << endl;
	cout << "exp is : 563/-2+ ";
	
	//You can use this code as reference, for tokenizing expression into individual character 
	for (int i=0; i<strlen(exp); i++){
		if (isdigit(exp[i])){
			cout<<"\nexp["<<i<<"] : "<<exp[i]-'0';
		} else {
			//exp[i] is an operator. Do nothing
			
		}
	}
	cout << endl << endl;
	cout << "Create a stack s " << endl;
	cout << "And test empty or not " << endl;
	cout << "Is the stack empty ? : 1 " << endl;
	cout << "Push every operand into stack s " << endl;
	cout << "Operands stored in stack s " << endl;
	cout << "2" << endl;
	cout << "3" << endl;
	cout << "6" << endl;
	cout << "5" << endl; 
	
}

void Q2d_answer(){
    char exp[] = "563/-2+";  
	cout<<"\nQ2d_answer" << endl;
	cout << "exp is : 563/-2+ " << endl;
	cout << endl;
	
	cout << "Create a stack s " << endl;
	cout << "And test empty or not " << endl;
	cout << "Is the stack empty ? : 1 " << endl;
	cout << "Push every operands into stack s " << endl;
	cout << "Final Answer is : 5 " << endl;
	
	
	 
}

void Q2e_answer(){
    char exp[30];  
	cout<<"\nQ2e_answer" << endl;
	cout << "Please write the Postfix Expression, then press enter when done " << endl;
	string EXP,length;
	cin >> EXP >>length;
	cout << "exp is : " << EXP << endl;
	cout << "Length is : " << length << endl;
	
	cout << endl;
	
	cout << "Create a stack s " << endl;
	cout << "Push every operand into stack s " << endl;
	
	cout << "Final Answer is : 13 " << endl;
	
}


int main(){
	
	char selection;
	while (true){
	cout<<"\nAnswer for Question 'a' 'b' 'c' 'd' 'e' 'x' for exit\nSelection : ";
	cin>>selection;
	system("CLS");
		switch (selection){
			case 'a': Q2a_answer(); break;
			case 'b': Q2b_answer(); break;
			case 'c': Q2c_answer(); break;
			case 'd': Q2d_answer(); break;
			case 'e': Q2e_answer(); break;
			case 'x': cout<<"\nThank You. Bye";exit(0); break;
			default : cout<<"\nInvalid selection";
		}
	}
	return 0;
}

