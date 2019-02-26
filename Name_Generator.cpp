/*Name Generator Programme*/
#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

void design_Header(){
	cout << "*************************************" << endl;
	cout << "**********!GET YOUR NAME!************" << endl;
	cout << "*************************************" << endl;
}

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
    cout << "Press Y for more and N to exit programme " << endl;
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

int main(void){
	design_Header();
	name_Function();
}
