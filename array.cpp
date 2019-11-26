    ///////// array///////////
   //                      //
  //       A-H-M-A-D      //
 //                      //
//////////////////////////
#include <iostream>
using namespace std;
int main()
{
int i,j,no,sum=0;
cout<<"the array is: \n\n";

for (i=1;i<=3;i++)
  {
    for(j=1;j<=3;j++)
    {
        no=2*i+j;
        cout<<no<<"  ";
    }
    cout<<endl;
  }
//========Elements of left diameter========>
cout<<endl<<endl;
cout<<"Elements of left diameter\\: ";
for (i=1;i<=3;i++)
  {
      
    for(j=1;j<=3;j++)
{
        no=2*i+j;
        if (i==j)
        cout<<no<<"  ";
}
  }
//==========Elements of rite diameter========>
cout<<endl<<endl;
cout<<"Elements of rite diameter/: ";
for (i=1;i<=3;i++)
  {
      
    for(j=1;j<=3;j++)
{       no=2*i+j;
        if((i+j)==4)
        cout<<no<<"  ";
}
  }  
//========Elements of the first column========>
cout<<endl<<endl;
cout<<"Elements of the first column ^ : ";
for (i=1;i<=3;i++)
  {
      
    for(j=1;j<=3;j++)
{       no=2*i+j;
        if(j==1)
        cout<<no<<"  ";
}
  }
//=====Elements of the first row ========>
cout<<endl<<endl;
cout<<"Elements of the first row > : ";
for (i=1;i<=3;i++)
  {
    for(j=1;j<=3;j++)
{       no=2*i+j;
        if(i==1)
        cout<<no<<"  ";
}
  } 
  //cout<<"\n\n";
//=========Elements of the 2th row ========>
cout<<endl<<endl;
cout<<"Elements of the 2th row > : ";
for (i=1;i<=3;i++)
  {
    for(j=1;j<=3;j++)
{       no=2*i+j;
        if(i==2)
        cout<<no<<"  ";
}
  } 
//=======Elements of the 3th row ========>
cout<<endl<<endl;
cout<<"Elements of the 3th row > : ";
for (i=1;i<=3;i++)
  {
    for(j=1;j<=3;j++)
{       no=2*i+j;
		// goto sum_;
        if(i==3)
        cout<<no<<"  ";      
}
  } 
}
cout<<endl;
}
