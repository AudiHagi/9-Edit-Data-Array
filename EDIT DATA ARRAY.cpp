#include<iostream>
#include<string>
using namespace std;

int main (){
	int i, n, edit;
	
	 cout<<"INPUT THE AMOUNT OF DATA : ";cin>>n;
	 
	 int Data[n];
	 
	 for (i=0;i<n;i++){
	 	cout<<"DATA "<<i+1<<" = ";cin>>Data[i];
	 }
	 
	 cout<<"-------------------------------------";
	 
	 cout<<endl;
	 cout<<"DATA THAT HAS BEEN ENTERED : "<<endl;
	 for (int i=0;i<n; i++)
		cout<<i+1<<". "<<Data[i]<<endl;
		
	 cout<<endl;
	 cout<<"SEQUENTIAL NUMBER OF DATA YOU WANT TO EDIT = ";cin>>edit;
	 
	 cout<<endl;
	 cout<<"EDIT VALUES ARE "<<Data[edit-1]
	 	<<" AND WILL BE REPLACED WITH VALUE ";cin>>Data[edit-1];
	 
	 cout<<endl;
	 cout<<"DATA AFTER EDIT = "<<endl;
	 for (int i=0;i<n; i++)
		cout<<i+1<<". "<<Data[i]<<endl;
		
	 return 0;
}
