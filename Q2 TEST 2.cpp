//Abdullah Mohammed Moqbel Qasem _A20EC4006_03
#include <iostream>
#include <string>
using namespace std;

//PROGRAM 2
class nodeStack
{
public:
	string url;
	string title;
	nodeStack* next;
	nodeStack() {
		url = "";
		title = "";
	}
	nodeStack(string url, string title) {
		this->url = url;
		this->title = title;
	}
};
class stack
{
	nodeStack* top;
public:
	void createStack() {
		top = NULL;
	}
	bool isEmpty() {
		return top == NULL;
	}
	void push();
	void pop();
	void display();
	void search();
};
void stack::push()
{
	string newUrl, newTitle;
	nodeStack* node = new nodeStack;
	if (node == NULL)
		cout << "Cannot allocate memory" << endl;
	else
	{
		system("CLS");
		cout << "<<<<<<< Insert Web Pages >>>>>>>" << endl << endl;

		//Task 1
		//Firstly, ask the user to enter the information of the url and title of the browsing history.
		// Then, insert the new browsing item by using the information entered - 8 MARKS
		//Answer Task 1 start here

		cout << "\Page URL : ";
		cin >> newUrl;
		cout << "Page Title : ";
		cin >> newTitle;

		nodeStack* newNode;
		newNode = new nodeStack(newUrl, newTitle);

		if (newNode == NULL) {
			cout << "Can't allocate memory\n";
		}
		else {
			newNode->next = top;
			top = newNode;
		}

		//Task 1 end
	}
}
void stack::pop()
{
	nodeStack* delNode;
	system("CLS");
	cout << "<<<<<<< Remove Web Browsing History >>>>>>>" << endl <<
		endl;
	cout << "URL : " << top->url << endl;
	cout << "Title : " << top->title << endl;
	cout << "<< Press any key to continue >>";
	cin.get();

	//Task 2 - Write the code to remove the history from the stack - 3 MARKS
	//Answer Task 2 start here

	if (isEmpty()) {
		cout << "Sorry, Cann't remove history from the stack\n";
	}
	else {
		delNode = top;

		top = delNode->next;

		delete(delNode);
	}

	//Task 2 end
}
void stack::display()
{
	int num = 0;
	nodeStack* currNode = top;
	system("CLS");
	cout << "<<<<<<< Display Web Browsing History >>>>>>>" << endl <<
		endl;
	//Task 3 - Write the code to display all the browsing history in the stack - 9 MARKS
	//Answer Task 3 start here

	while (currNode) {
		cout << "\t[" << ++num << "] Page URL : " << currNode->url << endl;
		cout << "\t    Page Title : " << currNode->title << endl << endl;;

		currNode = currNode->next;
	}

	//Task 3 end

	cout << "<< Press any key to continue >>";
	cin.get();
}
void stack::search()
{
	int choice;
	string input;
	string abc;
	nodeStack* currNode = top;
	system("CLS");
	cout << "<<<<<<< Search Browsing History(s) >>>>>>>" << endl;
	//Task 4 - Write the code to search the browsing history in the stack based on title - 10 MARKS
	//Answer Task 4 start here

	cout << "Enter Page Title : ";
	cin >> input;

	bool flag = false;

	while (currNode) {
		if (currNode->title == input) {
			cout << "\nPage URL : " << input << endl;;
			cout << "Page Title : " << currNode->title << endl<< endl;
			flag = true;
		}
		currNode = currNode->next;
	}

	if (!flag)
		cout << "No result found\n\n";

	//Task 4 end
	cout << "<< Finish searching... Press any key to continue >>";
	cin.get();
	cin.get();
}
//To display main menu
void dispMenu()
{
	system("CLS");
	cout << "WEB PAGE BROWSING HISTORY" << endl
		<< "\n\t1. Insert New Page"
		<< "\n\t2. Remove Page"
		<< "\n\t3. Search Page"
		<< "\n\t4. Display Page History"
		<< "\n\t5. Exit" << endl;
}
int main()
{
	stack webBrowse;
	webBrowse.createStack();
	int choice;
	do
	{
		dispMenu();
		cout << "\nEnter your choice [1-5]: ";
		cin >> choice;
		cin.ignore();
		switch (choice)
		{
		case 1: webBrowse.push();
			break;
		case 2: webBrowse.pop();
			break;
		case 3: webBrowse.search();
			break;
		case 4: webBrowse.display();
			break;
		default: cout << "\nThank you.. see you again.." << endl;
			return 0;
		}
	} while ((choice > 0) && (choice < 5));
	return 0;
}
