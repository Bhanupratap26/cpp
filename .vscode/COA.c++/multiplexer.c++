#include<iostream>
using namespace std;

int main (){
	
	int s2, s1, s0, output;
	
	cout <<"Enter select line S2: ";
	cin >>s2;
	cout <<"Enter select line S1: ";
	cin >>s1;
	cout <<"Enter select line S0: ";
	cin >>s0; 
	cout <<"\n-------------------------------"<<endl;
	
	if (s2==0 && s1==0 && s0==0){
		cout <<" \nThe output is = I0";
	}
	else if (s2==0 && s1==0 && s0==1){
		cout <<" \nThe output is = I1";
	}
	else if (s2==0 && s1==1 && s0==0){
		cout <<" \nThe output is = I2";
	}
	else if (s2==0 && s1==1 && s0==1){
		cout <<" \nThe output is = I3";
	}
	else if (s2==1 && s1==0 && s0==0){
		cout <<" \nThe output is = I4";
	}
	else if (s2==1 && s1==0 && s0==1){
		cout <<" \nThe output is = I5";
	}
	else if (s2==1 && s1==1 && s0==0){
		cout <<" \nThe output is = I6";
	}
	else if (s2==1 && s1==1 && s0==1){
		cout <<" \nThe output is = I7";
	}
	else {
		cout <<"Wrong select line input!";
	}
	
	cout <<"\n";
	
	return 0;
}