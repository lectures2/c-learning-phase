#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

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
	int taski;

system("CLS");
cout << "<<<<<<< Insert Web Pages >>>>>>>" << endl << endl;
cin >> taski;
cout << "page url : " << taski << endl;
}
}
void stack::pop()
{
int dele;
cin >> dele;

nodeStack* delNode;
system("CLS");
cout << "<<<<<<< Remove Web Browsing History >>>>>>>" << dele << endl;
cout << "URL : " << top->url << endl;
cout << "Title : " << top->title << dele << endl;
cout << "<< Press any key to continue >>";
cin.get();

}
void stack::display()
{
int num = 0;
nodeStack* currNode = top;
system("CLS");
cout << "<<<<<<< Display Web Browsing History >>>>>>>" << endl <<
endl;
cout << currNode << endl;
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
//Task 4 - Write the code to search the browsing history in the stack based

//Answer Task 4 start here
//Task 4 end
cout << "<< Finish searching... Press any key to continue >>";
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
