#include <iostream>
#include <Windows.h>
using namespace std;
 
void menu()
{
	cout << "Press 'X' to enable and 'Z' to disable autoclicker\n";
}
 
void clicker()
{
	bool click = false; //sets click to false
 
	while (true)
	{
		if (GetAsyncKeyState('X')) //if X is pressed click = true
		{
			click = true; 
		}
		else if (GetAsyncKeyState('Z')) //if 'Z' is pressed click = false
		{
			click = false;
		}
		if (click == true) // if click = true it will press the mouse button down and up really fast
		{
			mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
			mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
			Sleep(1); //you can adjust the speed of the click here
		}
	}
}		
 
int main()
{
	menu();
	clicker();
 
	return 0;
}
