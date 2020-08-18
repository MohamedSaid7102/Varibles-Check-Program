//Including my libraries
#include<iostream>
#include<string>
#include "Variable.h"
#include<fstream>
#include <conio.h>
//to put "std" befor any thing from the standard library
using std::cout;
using std::cin;
using std::endl;
//declaring my global variables
int choos = 0;
bool flag = true; 
//to get user choise
int Chose()
{
	//prompt the user to enter the choise
	cout << "\n\t \' 1 \' : To Enter . \n \t \' 2 \' : To Search . \n \t \' 3 \' : To Display." <<
		"  \n \t \' 4 \' : To Exit."<<endl<<endl;
	//do the next till right choise
	do {
		cout << "\t"; cin >> ::choos;
		//switch the choise to know what to do
		switch (::choos)
		{
		case 1:
			return ::choos;
			break;
		case 2:
			return ::choos;
			break;
		case 3:
			return ::choos;
			break;
		case 4:
			return ::choos;
			break;
		case 5:
			return ::choos;
			break;
		}
	// case that user didn't enter the right one
	} while ((::choos != 1 ) || (::choos != 2) || (::choos != 3) || (::choos != 4) || (::choos != 5) );
}
//welcoming function
void welcom()
{
	cout << endl << endl;
	cout << "\t\t   ********************************************************************************" << endl;
	cout << "\t\t   ********************************************************************************" << endl;
	cout << "\t\t   **                                                                            **" << endl;
	cout << "\t\t   **             \" welcom        to      variables       program \"              **" << endl;
	cout << "\t\t   **                                                                            **" << endl;
	cout << "\t\t   **                     press   any   key   to   contenue                      **" << endl;
	cout << "\t\t   **                                                                            **" << endl;
	cout << "\t\t   **                                                                            **" << endl;
	cout << "\t\t   **                      - MADE BY : Eng. Mohamed Shelf                        **" << endl;
	cout << "\t\t   **                                                                            **" << endl;
	cout << "\t\t   **                                 << FCI >>                                  **" << endl;
	cout << "\t\t   **                                                                            **" << endl;
	cout << "\t\t   ********************************************************************************" << endl;
	cout << "\t\t   ********************************************************************************" << endl;
}
//main fuction
int main()
{
	//Declaring my local variables
	string UserName;
	Variable V;
	//wellcoming the user
	welcom();
	cin.get();
	//while the falg is true keep asking the user 
	//scoop resolution befor the variable to indicate that this is a global one
	while (::flag)
	{
		//Call the function to get user choise
		Chose();
		//Switch the user choise
		switch (::choos)
		{
			//Insert a new name
		case 1:
		{
			//clear the screen
			system("cls");
			//prompt the user to enter his name
			cout << "Enter Your Name : ";
			cin.ignore(); getline(cin, UserName);
			//do the next while the name is found
			do
			{
				if (V.Check(UserName))
				{
					cout << "\n**InYncorrect . You entered this befor!\n=>"; getline(cin, UserName);
				}
			} while (V.Check(UserName));
			//if the name is unicke , save it to the file after assigne it 
			V.SaveTofile(UserName);
			//print a space
			cout << "----------------------done-----------------------" << endl;

			break;
		}
		//search about a name
		case 2:
		{
			//clear the screen
			system("cls");
			//prompt the user to enter his name
			cout << "Enter To Search : ";
			cin.ignore();  getline(cin, UserName);
			//check the name
			if (V.Check(UserName))
			{
				cout << "Yes...!" << endl;
			}
			else
			{
				cout << "No...!" << endl;
			}
			//print a space
			cout << "----------------------done-----------------------" << endl;

			break;

		}
		//Disply the data
		case 3:
		{
			//clear the screen
			system("cls");
			//Call the function to display the data
			V.Display();

			break;

		}
		//Exit
		case 4:
		{
			system("cls");
			cout << endl << endl;
			cout << "\t\t        *****************************************************************     " << endl;
			cout << "\t\t        *****************************************************************     " << endl;
			cout << "\t\t        **                                                             **     " << endl;
			cout << "\t\t        **     -------------  -       -     -      -------------       **     " << endl;
			cout << "\t\t        **     -               -     -                   -             **     " << endl;
			cout << "\t\t        **     -                 -  -       -            -             **     " << endl;
			cout << "\t\t        **     - ----             -         -            -             **     " << endl;
			cout << "\t\t        **     -                 -  -       -            -             **     " << endl;
			cout << "\t\t        **     -                -    -      -            -             **     " << endl;
			cout << "\t\t        **     -------------   -      -     -            -             **     " << endl;
			cout << "\t\t        **                                                             **     " << endl;
			cout << "\t\t        *****************************************************************     " << endl;
			cout << "\t\t        *****************************************************************     " << endl;
			flag = false;
			system("stop");
			break;
		
		}
		}
	}
//To keep the consol to not exit
cin.get();
return 0;
}

