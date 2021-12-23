/* ---------------------------------------------------------------------------
** I attest that this following code represents my own work and is subject to
** the plagiarism policy found in the course syllabus.
** 
** Semester: 	FALL 2015
** Assignment: 	Chapter 1, Problem 5
** File: 	filename.cpp
** Description: Enter brief project description here.
**
** Author: 	Malania Wilson
** Date: 	12/1/2015
** -------------------------------------------------------------------------*/


#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
using namespace std;
void level1();
void storylevel1();
void storylevel1part2();
void storylevel1part3();
void boss1();

string anwser(string prompt);
string askinformation(string prompt);


std::vector<std::string>inventory;
std::vector<std::string>::iterator iter;


class BossCloud
{
	

public:
int health;
int attackdamage;

BossCloud ()

{
	health=100;
	attackdamage=4;

}


public:

	int attackplayer ()

	{
		cout<<"The cloud attacked you, you took"<<attackdamage<<"damage"<<endl; 


	}

	class Warrior 
	{

	public:
		int health;
		int attackdamage;


	public:

		Warrior ()
		{
			health=100;

			

		}

	};


	
int main()

{
	int karma=0;

	vector <string> Inventory;
	Inventory.push_back("1-Firewall");//weapon 1
	Inventory.push_back("2-Computer");//weapon 2
	Inventory.push_back("3-Syntax Errors");//weapon 3
	Inventory.push_back("4-Viruses");//weapon 4

cout<<"Welcome to this text-based adventure game called Computertopia"<<endl;
cout<<flush;
cout<<"Here are the rules of the game: You must pick a choice and be resprectfull"<<endl;
cout<<"Lets get started shall we?"<<endl;



string Fname=askinformation("Please Enter your name");


cout<<"That is a very interesting name you got there"<<"\n";

cout<<"Your name is "<<Fname<<"\n";
system("cls");
cout<<"Hello "<<Fname<<"I will be helping you through this journey and to defeat the cloud and the Money cloud"<<"\n";

cout<<"Here is your inventory"<<endl;
cout<<"You have "<<Inventory.size ()<<"in your inventory"<<endl;
cout<<"\nYour items in your inventory: \n";
for (unsigned int i=0; i<
	Inventory.size(); ++i)
{
	cout<<Inventory[i]<<endl;
}


storylevel1();
level1();
storylevel1part2();
storylevel1part3();
void boss1();










	  system("pause");
return 0;
}
string askinformation(string prompt)
{
	string infotext;
	cout<< prompt;
	cin>>infotext;
	return infotext;
}
//function definition
void storylevel1 () {

cout<<"Here is the story:Long ago there was a mighty foe that destroyed everyone's hope of avoiding the cloud." <<endl;
cout<<"The cloud was like a plague, it would find you and add you to the cloud collection."<<endl; 
cout<<"The cloud has been around for thousands of years and today its reign is going to end. "<<endl;
cout<<"You(User) are a lone person that is tasked with a difficult task of defeating the cloud." <<endl;
cout<<"You must save all of the citizens of Computertopia. Will you do it?"<<endl;
}

void level1() {
int choice;
cout<<"Here is your first question: What is a function,Also here are your choices"<<endl;
cout<<"1-Returns a value"<<endl;
cout<<"2-I don't know"<<endl;
cout<<"3-quit"<<endl;

cin>>choice;
cin.ignore();
system("cls");


switch (choice)
{
case 1:
	cout<<"Good job you get to move on"<<endl;
	 cout<<"         |)`"<<endl;
        cout<<"      | |"<<endl;
        cout<<"      | |__"<<endl;
        cout<<"    /    (]__)"<<endl;
        cout<<"   /    (]___)"<<endl;
       cout <<"  /    (]___)"<<endl;
       cout <<"     ___(]_)"<<endl;
       cout <<      "/"<<endl;
       cout <<"     /"<<endl;




	break;

case 2:
	cout<<"Well MOG is very mad.Game over.Go back to Visual Basic"<<endl;
	system("pause");
	exit(2);
	break;

case 3:

	cout<<"Well that is a shame you couldn't continue...Go back to logic"<<endl;
	system("pause");
	exit(3);
	break;

default:
	cout<<"You make no sense"<<endl;
	



}
}

void storylevel1part2 () {
	int choice2;
	cout<<"You are walking and you see a path split into two."<<endl;
	cout<<"Which path do you want to take"<<endl;
	cout<<"1-First Path"<<endl;
	cout<<"2-Second Path"<<endl;
	cin>>choice2;
cin.ignore();
system("cls");


	switch (choice2)
	{
case 1:
	cout<<"Good Job young warrior, you can go ahead"<<endl;

break;

case 2:
	cout<<"Ok then go.....Oh wait the cloud is here....Game over"<<endl;
	system("PAUSE");
	exit(2);
	break;

default:
	cout<<"Go back to logic"<<endl;
	}
}

void storylevel1part3 () {
int choice3;
int karma=0;
cout<<"You keep walking and are meet with another obstacle."<<endl; 
cout<<"There is a dying computer who has just been asked how to zip a file by the cloud."<<endl; 
cout<<"It was so overwhelmed by that question that it couldn't go on. "<<endl;


cout<<"You have a choice to make younger warrior"<<endl;
cout<<"1-Save Computer"<<endl;
cout<<"2-Walk Away"<<endl;
cin>>choice3;
cin.ignore();
system("cls");


switch(choice3)
{
case 1:
	cout<<"Well I'm happy you saved the computer"<<endl;
	break;
case 2:
	cout<<"Well....I see what choices your going to make"<<endl;
	cout<<"Karma="<<(karma+1)<<endl;
	break;

default:
	cout<<"Invalid choice,be smarter or go back to the cloud class,I can send you there and skip all of this\n";
	system("cls");


		
	cout<<"This is your last obstacle"<<endl;
	cout<<"Here is your last qustion"<<endl;
	cout<<"How do you declare user input"<<endl;
	cout<<"1-cin statements"<<endl;
	cout<<"2-Ask MOG"<<endl;
	cout<<"3-I dont know"<<endl;
	cin>>choice3;
		cin.ignore();
		system("cls");
	switch(choice3)
	{
case 1:
	cout<<"correct you are a student of computing"<<endl;

case 2:
	cout<<"its in the book"<<endl;
	system("pause");
	exit(2);

case 3:
	cout<<"You should know, what is wrong with you"<<endl;
	system("pause");
	exit (3);


default:
	cout<<"Try again"<<endl;
	}

}

};


//void boss1 () {
	
	

};
