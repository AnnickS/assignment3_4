//============================================================================
// Name        : assignment3_4.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
void reverseDigits(int);

int main() {
	int num;

	cout<<"Enter a number: ";
	cin>>num;
	reverseDigits(num);

	return 0;
}

void reverseDigits(int a){
	cout<<(a%10);
	if(a >= 10){
		reverseDigits(a/10);
	}
}
