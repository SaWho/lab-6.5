//to print all possible solution triads of number of fruits if total is 100 and total price is also 100
#include <iostream>
using namespace std;
int main()
{
//variable declaration	

	int i,j,k;
		
//user prompt

	cout<<"The solutions of the number of fruits in the form (apples,mangoes,bananas) are"<<endl;

//loop for calculation. j is limited to 34 since 100/3=33.33.

	for (i=0;i<=100; i++)
	{
		for (j=0;j<=34; j++)
		{
			for (k=0; k<=100; k++)
			{
				if((i+j+k)==100 && (i+3*j+0.5*k)==100)
					cout<<"("<<i<<","<<j<<","<<k<<")"<<endl;
			}
		}
	}
}
