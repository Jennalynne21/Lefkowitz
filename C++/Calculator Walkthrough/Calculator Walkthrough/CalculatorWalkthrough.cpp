#include <iostream>
using namespace std;

void main () {
int x,y;
char z,t;
do
{
	cout<<"Enter first number: " ;
		cin>>x;
		cout<<endl;
	cout<<"Enter second number: " ;
	cin>>y;
	cout<<endl;
	cout<<"Enter operation (a/s/m/d) " ;
		cin>>z;
	cout<<endl;
	if(z== 'a' && z== 'A');
	else if (z=='s' || z== 'S');
	else if (z== 'm' || z== 'M');
	else if (z== 'd' || z== 'D');
	cout<<"The answer is:"; 
cout<<"Would you like to perform another calculation?";
cin>>t;
}
while (t=='y'|| t=='Y') ;
}