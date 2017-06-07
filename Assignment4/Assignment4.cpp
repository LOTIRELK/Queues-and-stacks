// Assignment4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Queue.h"
#include "Stack.h"
#include <iostream>
#include <queue>

using namespace std;

bool quitFlag = false;
void doQuit(void);
void displayMenu(void);
int main()
{
	
	int item; int i = 0; int c = 0;
		
		QueType<int> a;
		StackType<int> b;
		
		int option;
		do {
			displayMenu();
			cout << "\tPlease enter your option: ";
			cin >> option;
			switch (option)
			{
			case 1:
				a.MakeEmpty();
				break;
			case 2:
				cout << "\t Please enter number: ";
				cin >> item;
				a.Enqueue(item);
				break;
			case 3:
				a.RemoveFromOutput();
				break;
			case 4:
				a.PrintQueue();
				break;
			case 5:
				a.Dequeue(item);
				b.Push(item);
				break;
			case 6:
				b.Pop(item);
				a.EnqueueAgain(item);
				break;
			case 7:
				doQuit();
				break;
			default:
				cout << "Please enter a number.";
			}
		} while (!quitFlag);
	
		return 0;
}

void doQuit(void)
{
	quitFlag = true;
	cout << " \tGoodbye!\n";
}
void displayMenu(void)
{
	cout << "----------------Assignment Four-----------------" << endl;
	cout << "\t1)Clear the queue of its contents." << endl;
	cout << "\t2)Add data to the input end of the queue." << endl;
	cout << "\t3)Remove and print." << endl;
	cout << "\t4)Print the contents of the queue." << endl;
	cout << "\t5)Add to Stack." << endl;
	cout << "\t6)Reverse Queue" << endl;
	cout << "\t7)Quit" << endl;
	cout << "------------------------------------------------" << endl;
}

