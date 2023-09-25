#include<iostream>
using namespace std;
void shopping(string day,int rupee);
main(){
	string day;
	int rupee;
	cout<<"Enter the day of purchase: ";
	cin>>day;
	cout<<"Enter the total purchase amount: $";
	cin>>rupee;
	shopping(day,rupee);
	
}
void shopping(string day,int rupee){
	float result;
	if(day=="Sunday"){
		result= rupee-(rupee*0.1);
		cout<<"Payable Amount: $"<<result;
	}
	
		if(day!="Sunday"){
			result = rupee;
		    cout<<"Payable Amount: $"<<rupee;
	}
	
	
}
