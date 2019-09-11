#include<iostream>
#include<string>
#include "Sal_Acc.h"//including Salary Account 
using namespace std;
class Emp{		//class Emp
	int empid;	//date members of class emp
	string empname;
	string dept;
	Sal_Acc s;   	//creating object of Sal_Acc class in Emp class
	public:		//member function of class emp
		Emp();
		void Accept();
		void Display();
};
