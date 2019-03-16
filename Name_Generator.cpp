/*Name Generator Programme*/
#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

void design_Header(){
	cout << "*************************************" << endl;
	cout << "*********!GET YOUR GAMING NAME*******" << endl;
	cout << "*************************************" << endl;
}

/*Mode two unique name Function*/
void name_Function(){
	unsigned seed;
 	seed = time(NULL);
 	srand(seed);
 	int random_number;
 	int limit = 0;
 	char firstLetter;
	char character_Storage[] = {
		 'a','b','c','d','e','f','g','h',
		 'i','j','k','l','m','n','o','p',
		 'q','r','s','t','u','v','w','x',
		 'y','z'
	};
	/*****************************************************************************/
	cout <<"Enter begning(letter) of name: " << endl;
	cin >> firstLetter;
	while(limit != 10){
	    cout <<"Your Name: " <<firstLetter;
	    for(int x=0; x<=3; x++){
		    random_number = (rand()%25)+1;
		    cout <<character_Storage[random_number];
	    }
	    limit+=1;
	    cout << endl;
    }
    /******************************************************************************/
    char choice;
    cout <<"Want more names? ";
    cout << "Press Y for more || N to exit program:- " << endl;
    cin >> choice;
    
    if(choice == 'y' || choice == 'Y'){
    	cout <<"\nHere are new names: " << endl;
    	design_Header();
    	name_Function();
	}
	else if(choice == 'n' || choice == 'N'){
		cout <<"Thank You!" << endl;	
	}
	else {
		cout <<"Invalid Command entered!" << endl;
		design_Header();
		name_Function();
	}
}

/*Normal name Function*/
void other_Name(){
	int first_Name, last_Name;
	int fNameNum,SNameNum;

	/*Array Storing Prefix names*/
	string pre_name[] = {
		"Choco","Albatroz","Divine","Bot","Bottle","Killer",
		"Chimpanzee","Monkey","Death","Ray"
	};
	/*Array Storing suffix names*/
	string suf_name[] = {
		"Money","Hunger","Late","Junction","Deadly","Cap","Blue",
		"Red","White","Black"
	};

	/*Generating random numbers*/
 	unsigned seed_Value;
	seed_Value = (time(NULL));
	cout <<"Your Gaming Names: " << endl;
	for(int y=0; y<=10; y++){
		cout <<"|--";
		/*Calling the elements of array with generated random number*/
		fNameNum = (rand()%10);
		cout << pre_name[fNameNum];

		cout <<" ";
		SNameNum = (rand()%10);
		cout << suf_name[SNameNum] << endl;
	}	
	
	cout <<"\nWant more names? ";
	cout << "Press Y for more || M for Mode selection || N to Exit: ";
	char choice;
	cin >> choice;

	if(choice == 'y' || choice == 'Y'){
		design_Header();
		other_Name();
	}
	else if(choice == 'n' || choice == 'N'){
		cout <<"Thank You! " << endl;
	}
	else{
		cout <<"Invalid Command entered!" << endl;
	}
}

/**************************Main Function***********************************/
int main(void){
	int user_choice;
	cout <<"Select Option: 1 for Normal Name || 2 for Unique names:- ";
	cin >> user_choice;

	if(user_choice == 1){
		design_Header();
		other_Name();
	}
	else if(user_choice == 2){
		design_Header();
		name_Function();
	}
}
