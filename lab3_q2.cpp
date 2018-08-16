//Library
#include <iostream>
using namespace std;

int main()
{
	//Declaring variables
	int a,b;
	int sum,sub,mult,div,mod;
	//Process
	a=6;
	b=2;
	sum=a+b;
	sub=a-b;
	mult=a*b;
	div=a/b;
	mod=a%b;
	//Print out the results
	cout<< "The sum of a and b is"<<sum<<endl;
	cout<< "The difference of a and b is"<<sub<<endl;
	cout<< "The product of a and b is"<<mult<<endl;
	cout<< "The quotient of a and b is"<<div<<endl;
	cout<< "The remainder of a and b is"<<mod<<endl;
	//Terminate the program
	return 0;
}
