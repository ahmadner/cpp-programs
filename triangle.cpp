////////////triangle///////////
//                          //
//      A-H-M-A-D          //
//                        //
///////////////////////////
#include <iostream.h>
int main()
{
	int i,j,count=4;
	for (i=1;i<=4;i++)
	{
		count+=2;
		for(j=1;j<=7;j++)
		{
			if(j>=5)
			{
		
				if(i+j>=count)
				{
					cout<<" ";
				}
				else 
				cout<<"!";
			}
			else if (i+j<=4)
			{
				cout<<" ";
			}
			else 
			cout<<"!";
				
		}
		cout<<endl;
	}
	
}
