#include<iostream>
using namespace std;
void result(int number);
main(){
	int number;
	cout<<"Enter your score: ";
	cin>>number;
	result(number);
}
void result(int number){
	if(number>50){
		cout<<"Pass";
	}
		if(number<=50){
		cout<<"Fail";
	}
	
	
}
