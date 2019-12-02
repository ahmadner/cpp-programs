//////////for fined a sqrt/////////////
//                                  //
//             A-H-M-A-D           //
//                                //
///////////////////////////////////
#include <iostream.h>
using namespace std;
int _sqrt(int a)
{
int i=0;
while ((i*i)!=a)
{	
i+=1;
}
	
return i;
}
int main()
{
int no;
while (1)
{
cout<<"enter the num for get SQRT: ";
cin>>no;
cout<<"The Number Is : "<<_sqrt(no)<<endl;

}
return 0;
}
