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
	while(true){
	float result;
	if(day=="Sunday"){
		result= rupee-(rupee*0.1);
		cout<<"Payable Amount: $"<<result<<endl;
	}
	
		if(day!="Sunday"){
			result = rupee-(rupee*0.05);
		    cout<<"Payable Amount: $"<<rupee<<endl;
		}
	}
	
	
}
