#include<iostream>
using namespace std;
void sticker(int s);
main(){
	int block;
	cout<<"Enter the side length of the Rubik's Cube: ";
	cin>>block;
	sticker(block);
}
void sticker(int s){
	int sides;
	sides = s * s * 6;
	cout<<"Number of stickers needed: "<<sides;
}
