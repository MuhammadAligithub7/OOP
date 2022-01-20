#include<iostream>
using namespace std;
main()
{
	int myarray[10]={1,2,3,4,5,6,7,8,9,10};
	int num;
	int location=-1;
	int start=0;
	int  mid;
	int end=9;
	
	cout<<"enter number to find it in myarray :"<<endl;
	cin>>num;
	
	while(start<=end)
	{
		mid=(start+end/2);
		if(myarray[mid]==num)
		{
			location=mid;
			break;
		}
		else if(num<myarray[mid])
		end=mid-1;
		else 
		start=mid+1;
 	}
 	if(location==-1)
 	cout<<num<<"not found";
 	else
 	cout<<num<<" found at index "<<location;
}
