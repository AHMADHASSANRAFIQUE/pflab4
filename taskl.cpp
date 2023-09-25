#include<iostream>
using namespace std;
void yourname(string name);
main(){

	string name;
	cout<<"Enter name: ";
	cin>>name;
	yourname(name);
}
void yourname(string name){
	while(true)
	{
		cout<<name<<endl;
	}
}
