//to check which salary option is the best for the concerned employee
#include <iostream>
using namespace std;

//function for input

int input()
{
	int i;
	cout<<"Enter the number of shoes sold in a week"<<endl;
	cin>>i;
	return i;
}

//function for only salary

void s1()
{

	cout <<"Option (a) gives 600 rupee salary"<<endl;

}

//function for salary+commission

int s2(int i)
{
	int s=7*40 + i*225*0.1;
	cout <<"Option (b) gives "<<s<<" rupee salary"<<endl;
	return s;

}

//function for only commission

int s3(int i)
{
	int s=0.2*i*225 +25*i;
	cout <<"Option (c) gives "<<s<<" rupee salary"<<endl;
	return s;
}

//main

int main()
{

//variable declaration

	int i,sa2,sa3,max1;
	char o;

//function call

	i=input();
	s1();
	sa2=s2(i);
	sa3=s3(i);

//comparing which one is bigger

	if (sa2>=sa3)
	{
		max1=sa2;
		o='b';
	}
	else 
	{
		max1=sa3;
		o='c';
	}
	if(max1<=600)
		o='a';

//output

	cout <<"Hence the correct option is ("<<o<<")"<<endl;

}
