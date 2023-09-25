#include<iostream>
using namespace std;
void fuelneeded(float d);
main(){
	float distance;
	cout << "Enter the distance: ";
	cin >> distance;
	
	fuelneeded(distance);
	
}

void fuelneeded(float d)
{	float result;
	result = d * 10;
	if(d>=100){
		cout<<"Fuel needed: "<< result;	
	}
	if(d<100){
	cout<<"Fuel needed: 100";
}
	
	
	
}
