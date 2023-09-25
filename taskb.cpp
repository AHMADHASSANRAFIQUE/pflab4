#include<iostream>
using namespace std;
void inchestofeet(float f);
main(){
	float inch;
	cout<<"Enter the measurement in inches: ";
	cin>>inch;
	inchestofeet(inch);
}
void inchestofeet(float f){
	float foot;
	foot = f / 12;
	cout<<"Equivalent in feet: "<<foot;
}
