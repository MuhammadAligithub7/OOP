#include<iostream>
using namespace std;
main()
{
	int myarray[5];
	cout<<"enter any 5 num in array "<<endl;
	for(int i=0;i<5;i++)
	cin>>myarray[i];
    int num;
	int location=-1;
	cout<<"enter number to find it in myarray : ";
	cin>>num;
	for(int i=0;i<5;i++)
	if(myarray[i]==num)		
	location=i;	
    if (location==-1)	
	cout<<"number not found "<<endl;	
	else 
	cout<<"number found at index "<<location<<endl;
	
	cout<<endl<<endl;
	
	string array[4]={"ALI","HAYAM","SARA","MEDINA"};
	string name;
	int loc=-1;
	cout<<"Enter Name To Find It In Array : \n";
	cin>>name;
	for(int i=0;i<4;i++)
	if(array[i]==name)	
	loc=i;
    if (location==-1)
	cout<<"Name Not Fund "<<endl;	
	else 		
	cout<<"Name Found At Index "<<loc<<endl;

}
