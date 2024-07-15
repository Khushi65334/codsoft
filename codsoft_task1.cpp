#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
	string name;
	char i;
	int inputuser,end1,input;
	cout<<"Enter your name:    ";
	getline(cin,name);
	cout<<end1;
	do{
		srand(0);
		int variable=rand()%5+1;
		cout<<"Enter any number in between range 1 to 5       ";
		cin>>inputuser;
		cout<<end1;
		if(inputuser==variable){
			cout<<"Congratulation!! you guessed the correct number\n"<<end1;
		}
		else{
			cout<<"sorry!! try again\n"<<end1;
		} 
		cout<<"would you like to try again Y/N     ";
		cin>>input;
		cout<<end1;
	}while(i!='N');
	cout<<"Game End"<<end1;
}
