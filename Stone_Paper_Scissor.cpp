////Stone paper scissor's game////
#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int algo(int stone = 1, int paper = 2, int scissor = 3){
	int com_choice;
	int user_choice;

	srand(time(0));
	com_choice = rand()%3+1;
	
	cout << "Enter your choice from the following: stone = 1 || paper = 2 || scissor = 3 " << endl;
	cin >> user_choice;
	/*Deciding the output */
	
	if(com_choice == 1){
		cout <<"Computer choice: stone " << endl;
	}
	else if(com_choice == 2){
		cout << "Compute choice: paper " << endl;
	}
	else{
		cout << "Computer choice: scissor " << endl;
	}

	/*Condition Draw*/
	if(user_choice == com_choice){
		cout << "Game Draw! " << endl;
	}

	/*With stone*/
	if(user_choice == stone && com_choice == paper){
		cout << "You loose! Better luck next time! " << endl;
	}
	if(user_choice == stone && com_choice == scissor){
		cout << "You win! " << endl;
	}
	/*With paper*/
	if(user_choice == paper && com_choice == stone){
		cout << "You win! " << endl;
	}
	if(user_choice == paper && com_choice == scissor){
		cout << "You loose! Better luck next time! " << endl;
	}
	/*With scissor*/
	if(user_choice == scissor && com_choice == stone){
		cout << "You loose! Better luck next time! " << endl;
	}
	if(user_choice == scissor && com_choice == paper){
		cout << "You win! " << endl;
	}

}

int main(){ 
	int stone = 1, paper = 2, scissor = 3;
	int a,b,c;
	int choice;
	
	algo(a,b,c);
	
	cout << "Would you like to play again? " << endl;
	cin >> choice;

	if(choice == 'Y' || choice == 'y'){
		algo();
	}
	else if(choice == 'N' || choice == 'n'){
		cout << "Thanks for playing! " << endl;
	}

	return 0;
}
