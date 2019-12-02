////////////factory////////////
//                          //
//      A-H-M-A-D          //
//                        //
///////////////////////////
#include <iostream.h>
using namespace std;
long int fac(long int f)
{
	int i=0;
	i=f;
	while (i>1)
	{
	i-=1;
	(f=f*i);
	
	}
	return (f);
}
//================>
int main()
{
long int no;
int i;

cout<<"enter the number for factory: ";
cin>>no;
cout<<"! "<<no<<" = "<<fac(no)<<endl<<endl;
}
