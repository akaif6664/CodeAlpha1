#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
using namespace std;

int main(){
	
	label:
	srand((unsigned int) time(NULL));
	int number = (rand() % 100) + 1;
	int guess = 0;
	int score = 101;
	int status;
	cout<<endl;
	cout<<endl;
	cout<<"Press 1: Play"<<endl;
	cout<<"Press 2: Exit"<<endl;
	cin>>status;

	switch(status){
		case 1:
		     do{
			cout<<endl;
			cout<<"Enter Guess(1-100): ";
			cin>>guess;
			score--;
			if(guess>number){
				cout<<"Guess Lower! "<<endl;
			}else if(guess<number){
				cout<<"Guess Higher! "<<endl;
			}else{
				cout<<"You Won! "<<endl;
				cout<<"Your Score: "<<score<<endl<<endl;
				goto label;
			}
		     }while(guess != number);
		break;

		case 2:
		     cout<<"Hope to see you again"<<endl;
		break;

		default:
			cout<<"Please Enter valid option"<<endl;
	}
	
	return 0;
}