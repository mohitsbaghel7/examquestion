#include<iostream>
#include<string>
#include "Date.h"
using namespace std;
class Sal_Acc{          //Salary Account class
	int accno;	//private data members of Salary class
	string accname;
//	int odate;
	Date d;		//Date object of valid date
	string bname;
	int ifsc;
	public:
		Sal_Acc();  //default construtor
		void Accept();	//Accept member function declearation
		void Display();//Display member function declearation 
};


