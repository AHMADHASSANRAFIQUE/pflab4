#include<iostream>
using namespace std;
void fuelneeded(float d)
{	float result;
	result = d * 10;
	cout<<"Fuel needed: "<< result;
}
main(){
	float distance;
	cout << "Enter the distance: ";
	cin >> distance;
	
	fuelneeded(distance);
	
}
