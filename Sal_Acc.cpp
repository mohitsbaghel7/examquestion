#include "Sal_Acc.h" 
Sal_Acc::Sal_Acc(){	//default constructor defination
	accno=0;
	accname="\0";
//	odate=0;
	bname="\0";
	ifsc=0;
}
void Sal_Acc::Accept(){		//Accept member function defination
	cout<<"Enter the Account number"<<endl;
	cin>>accno;
	cout<<"Enter the Account holder name"<<endl;
	cin>>accname;
//	cout<<"Enter the opening dat"<<endl;
//	cin>>odate;
	d.Accept();		//calling Accept function of date class by date object
	cout<<"Enter the bank name"<<endl;
	cin>>bname;
	cout<<"Enter the bank IFSC code"<<endl;
	cin>>ifsc;

}
void Sal_Acc::Display(){		//Display memeber function defination
	cout<<"Account number = "<<accno<<endl;
	cout<<"Account holder name = "<<accname<<endl;
	d.Display();		//calling display function of date class by date object
//	cout<<"Opening date = "<<odate;
	cout<<"Bank name = "<<bname<<endl;
	cout<<"IFSC code = "<<ifsc<<endl;
}
