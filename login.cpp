    //// LOGIN || CREEAT /////
   //                      //
  //       A-H-M-A-D      //
 //                      //
//////////////////////////
#include <iostream.h>
#include <string>
using namespace std;
int main()
{
string fn; 
string ln;
string mail;
string pass; //creat account
string _mail;
string _pass ; //login
int c_l=0;
int l_nl=0;
cout<<"========================\n";
cout<<"[1] : for NEW ACCOUNT\n";
cout<<"[2] : for LOGIN\n";
cout<<"========================\n";
cout<<"\nselect : ";
cin>>c_l;
if (c_l==1)
	{
cout<<"======= CREAT ACCOUNT =======\n\n";
cout<<"Enter Your First name: ";
cin>>fn;
cout<<endl;
//========>
cout<<"Enter Your Last name: ";
cin>>ln;
cout<<endl;
//=======>
cout<<"Enter Your Email name: " ;
cin>>mail;
cout<<endl;
//=======>
cout<<"Enter Your Email Password: ";
cin>>pass;
cout<<"\n\naccount is created successfully\n\n";
	}
	if (c_l==2)
	{
		goto login;
	}
cout<<"Do you Wont Login ?\n";
cout<<"====================\n";
cout<<"[1] : login now\n";
cout<<"[2] : login later\n";
cout<<"====================\n";
cout<<"select: ";
cin>>l_nl;
if (l_nl==1)
{
	goto login;
}
if (l_nl==2)
{
	cout<<"BAY "<<fn<<endl;
	goto fin;
}
//================= LOGIN =============>
login:cout<<"\n\n======= LOGIN =======\n\n";
cout<<"Enter The Email: ";
cin>>_mail;
cout<<"Enter The pass : ";
cin>>_pass;
while (mail != _mail || pass != _pass)
{
cout<<"\n\nSome Thing Is Wrong, Try again please\n\n";
cout<<"\n\n======= LOGIN =======\n\n";
cout<<"Enter The Email: ";
cin>>_mail;
cout<<"Enter The pass : ";
cin>>_pass;	
}
cout<<"\n\n************* HELLO *************\n\n";
fin:;
}
