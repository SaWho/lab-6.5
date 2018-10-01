//to find the next triangular figurate number that is a perfect square

//including library

#include <iostream>
#include <math.h>
using namespace std;

//main

int main()
{
//variable declaration

	int j=0; long i=0,s,k;

/* let the number be n(n+1)/2 = m^2. Then 2n=-1+sqrt(1+8m^2). Thus the requirement is that 1+8m^2 is a perfect square. Thus if we 	check that we are done. */

	while(j!=1)
	{
		i++;
		s=8*i*i +1;

//checking if it is a perfect square

		k=sqrt(s);
		if ((s-k*k)==0)

//checking so that the number is bigger than 36 and 1225

			if(k>99)
				j=1;


	}

//output

	cout <<"The required number is "<<i*i<<endl;

}
