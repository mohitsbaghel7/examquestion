#include "Emp.h"
using namespace std;
Emp::Emp(){		//default constructor of Emp
	empid=0;
	empname="\0";
	dept="\0";
	}
void Emp::Accept(){	//emp Accept member function
	cout<<"Enter employee id "<<endl;
	cin>>empid;
	cout<<"Enter employee name"<<endl;
	cin>>empname;
	cout<<"Enter employee dept"<<endl;
	cin>>dept;
	s.Accept();	//calling salary class Accept function with salary object
}
void Emp::Display(){		//emp Display member function
	cout<<"Employee Id = "<<empid<<endl;
	cout<<"Employee name= "<<empname<<endl;
	cout<<"Employee department = "<<dept<<endl;
	s.Display();	//calling display function of salary class with salary object
}

