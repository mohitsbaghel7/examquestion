#include "Date.h" 
Date::Date(){ //default const
	dd=0;
	mm=0;
	yy=0;
}
void Date::Accept(){	//Accept member function of Date class
	int flag=0;
	do{	
		if(flag!=0)
			cout<<"***Enter correct date***"<<endl;

		cout<<"Enter the opening date"<<endl;
		cout<<"Date ="<<endl;
		cin>>dd;
		cout<<"month = "<<endl;
		cin>>mm;
		cout<<"year = "<<endl;
		cin>>yy;
		flag++;
	}while(dd>31||mm>12);
}
void Date::Display(){ //Display memeber function of Date class
	cout<<"Opening date"<<endl;
}
