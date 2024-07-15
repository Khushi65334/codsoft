#include<iostream>
using namespace std;
int main(){
	char opp,end1;
	float num1,num2;
	cout<<"enter two numbers :"<<end1;
	cin>>num1>>num2;
	cout<<"enter any operation: +, -, *, / :"<<end1;
	cin>>opp;
	switch (opp){
		case '+':
			cout<<num1<<"+"<<num2<<"="<<num1+num2;
			break;
		case '-':
		     cout<<num1<<"-"<<num2<<"="<<num1-num2;
		     break;
		case'*':
		     cout<<num1<<"*"<<num2<<"="<<num1*num2; 
			 break;
		 case'/':
		     cout<<num1<<"/"<<num2<<"="<<num1/num2; 
			 break;
		default:
		     cout<<"Error! operator is not correct:"<<end1;
			 break;
 
			
	}
}
