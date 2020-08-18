#include "Variable.h"
#include<fstream>
#include<iostream>
#include<iomanip>

/*=============================================================================*/
//constructor
 Variable::Variable()
	 :
	 flag3(true), x(0),x2(0)
     {
     }
 /*=============================================================================*/
 // Get the user input
 string Variable::GetInput()
 {
 	return Input;
 }
 /*=============================================================================*/
 //check the user name
 bool Variable::Check(string Input)
 {
	 //prepare the file
	 fstream Var;
	 Var.open("Var.txt", ios::in);
	 //loping in the hall file
	 while (!Var.eof()) {
		 getline(Var, m_username, '\n');
		 //delete the first '2' charachter from the name -the number- 
		 m1_username = m_username.erase(0, 2);

		 if (m1_username.compare(Input) == 0)
		 {
			 //case finding the name
			 Var.close();
			 return true;
		 }
		 else
		 {
			 continue;
		 }
	 }
	 //case not
	 Var.close();
	 return false;
 }
 /*=============================================================================*/
 //save the name to the file 
 void Variable::SaveTofile(string Input)
 {
	 fstream Var;
	 Var.open("Var.txt", ios::app);
	 Var << "**" << Input << endl;
	 Var.close();
 }
 /*=============================================================================*/
 //Display the data
 void Variable::Display()
 {
	 //prepare the file
	 fstream Var;
	 Var.open("Var.txt", ios::in);
	 //print a space
	 cout << "-----------------***************-----------------" << endl;
	 //loping in the hall file
	 while (!Var.eof()&& flag3)
	 {
		 for (int i = 1; flag3; i++)
		 {
			 getline(Var, m_username, '\n');
			 m1_username = m_username.erase(0, 2);
			 //case we reach the empty line at the end of the file
			 if (m1_username.compare("\0")==0)
			 {
				 flag3 = false;
				 cout << "-----------------***************-----------------" << endl;
				 break;
			 }
			 //otherwise, print the data
			 else
			 {
				 cout <<'*' <<"\t  "<< setw(3) << left<<i<< "- " << setw(33)<<left<<m1_username <<'*' <<endl;
			 }
		 }
	 }
	 //printing a space
	 cout << "----------------------done-----------------------" << endl;
	 flag3 = true;
	 //closing the file
	 Var.close();
 }
 /*=============================================================================*/
 //Existing function
 /*
  bool Variable::Existing(string va)
 {
	 fstream Var;

	 Var.open("Var.txt", ios::in);
	 while (!Var .eof())
	 {
		 for (int i = 1; flag3; i++)
		 {
			 getline(Var , out, '\n');
			 j = out.erase(0, 2);
			 if (j.compare("\0") == 0)
			 {
				 x = 1;
				 flag3 = false;
				 break;
			 }
			 else
			 {
				 if (j.compare(va) == 0)
				 {
					 x2 = 1;
					 return true;
				 }
			 }
		 }

		 if (x == 1&&x2!=1)
		 {
			 flag3 = true;
			 return false;
			 Var .eof() == 1;
			 break;
		 }
	 }

	 Var.close();
 }

 */
 /*=============================================================================*/
 //Update function
 /*
  void Variable::Update()
 {
	 cout << "Enter name : "; cin.ignore(); getline(cin, Input); SetInput(Input); GetInput();
	 if (Existing(Input))
	 {
		 cout << "Enter name to change : "; cin.ignore(); getline(cin, Inp);

		 fstream Var;
		 fstream Var1;

		 Var.open("Var.txt", ios::in);
		 Var1.open("Var1.txt", ios::app);

		 while (!Var.eof())
		 {
			 for (int i = 1; flag3; i++)
			 {
				 getline(Var, out, '\n');
				 j = out.erase(0, 2);
				 if (j.compare("\0") == 0)
				 {
					 x = 1;
					 flag3 = false;
					 break;
				 }
				 else
				 {
					 if (j.compare(Input) == 0)
					 {
						 Var1 << "**" << Inp << endl;
					 }
					 else
					 {
					 Var1 << "**" << Input << endl;
					 }
				 }
			 }

			 if (x == 1)
			 {
				 x = 0;
				 flag3 = true;
				 Var.eof() == 1;
				 break;
			 }
		 }

		 Var.close();
		 Var1.close();


		 Var.open("Var.txt", ios::out || ios::app);
		 Var1.open("Var1.txt", ios::in);

		 while (!Var1.eof())
		 {
			 for (int i = 1; flag3; i++)
			 {
				 getline(Var1, out, '\n');
				 j = out.erase(0, 2);
				 if (j.compare("\0") == 0)
				 {
					 x = 1;
					 flag3 = false;
					 break;
				 }
				 else
				 {
					 Var << "**" << Input << endl;
				 }
			 }

			 if (x == 1)
			 {
				 x = 0;
				 flag3 = true;
				 Var1.eof() == 1;
				 break;
			 }
		 }

		 Var.close();
		 Var1.close();

		 remove("Var1.txt");
		 cout << "done!" << endl;
	 }
	 else
	 {
		 cout << "Item dosn't Excist !" << endl;
	 }
 }

 */