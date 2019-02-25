/*Program that plays rock paper scissor's game*/
#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int game_func(){
	int stone = 1;
	int paper = 2;
	int scissor = 3;
	int loose_condition; //Unused till now

	unsigned seed;
	int user_choice, com_choice;
	bool winner = false; // Unused till now
	////*****************************************************************////
	
	cout <<"Enter your choice: Stone = 1 || Paper = 2 || Scissor = 3 ";
	cout <<" ||Press 4 to quit the game! EXIT " << endl;
	cin >> user_choice;

	cout <<"You've selected: " << user_choice << endl;
	
	if(user_choice == 4){
		cout <<"Thanks for playing! " << endl;
		return NULL;
	}
	else if(user_choice > 4){
		cout <<"Invalid Input! " << endl;
		return NULL;
	}

	seed = time(0);
	srand(seed); 
    
    com_choice = (rand()%3 + 1);////Generates random numbers///
    
    if(com_choice == 1){
    	cout << "Computer's choice is: Stone " << endl;
    }
    else if(com_choice == 2){
    	cout <<"Computer's choice is: Paper " << endl;
    }
    else if(com_choice == 3){
    	cout <<"Compter's choice is: Scissor " << endl;
    }

    /*******Scan for all win combinations********/

    if((user_choice == 1 && com_choice == 3) || (user_choice == 2 && com_choice == 1) || (user_choice == 3 && com_choice == 2)){
    	cout <<"You win! " << endl;
    	return NULL;
    }

    /*******Scan for all loose combinations*******/

    if((user_choice == 1 && com_choice == 3) || (user_choice == 2 && com_choice == 1) || (user_choice == 3 && com_choice == 1)){
    	cout <<"Your loose! " << endl;
    }
    
    /*****Scan for draw condition*******///
    if(com_choice == user_choice){
    	cout <<"Game draw! " << endl;
	}

	/*******Scan for all loose conditions********/
	if(user_choice == 1 && com_choice == 2 || user_choice == 2 && com_choice == 3 || user_choice == 3 && com_choice == 1){
		cout << "You loose " << endl;
		return NULL;
	}
}

int main(void){
	game_func();
}
