#include <iostream.h>
#include <iomanip.h>
using namespace std;
int main ()
{
int sum=0,month,year,fday,f,c=0,ci=0,mon=1;
cout<<"Enter The Year: ";
cin>>year;
fday=(((year-1)*365+(year-1)/4-(year-1)/100+(year-1)/400)+1)%7;
cout<<"Enter The Month: ";
cin>>month;
cout<<"<=================>\n";
cout<<"year: "<<year<<" month: "<<month<<endl<<endl;
cout<<setfill('_')<<setw(4)<<"SA"<<setw(4)<<"SU"<<setw(4)<<"MO";
cout<<setw(4)<<"TU"<<setw(4)<<"WD"<<setw(4)<<"TH"<<setw(5)<<"FR\n";
for(int i=1;i<=6;i++)
	{
		for(int j=1;j<=7;j++)
		{
			int f;			
			if ((sum-1-fday)<=29)
			{		
				sum++;
				f = sum-1-fday;
				if(f>0)
                {
					if(month==1)
						cout<<setfill(' ')<<setw(4)<<sum-1-fday<<setw(4);					
					c++;
					if(j==7)
                        c=0;
				}
				else if(month==1)
                    cout<<setfill(' ')<<setw(4)<<" "<<setw(4);
			}
		}
        if(month==1)
            cout<<endl;
	}
        ci=c;
        ci++;
for(int mo=2;mo<=12;mo++)
    {
        int num=1;
        int DAYS ;
        sum=0;
        if(year%4==0 && mo==2)
            DAYS=29;	
        else if(mo==2)
            DAYS=28;		
        if(mo==3||mo==5||mo==7||mo==8||mo==10||mo==12)
            DAYS=31;		
        if(mo==4||mo==6||mo==9||mo==11)
            DAYS=30;		
        sum =0;
        for(int i=1;i<=6;i++)
        {
            for(int j=1;j<=7;j++)
            {		
                if (sum<=DAYS)
                {						
                    if(j>=ci)
                    {		
                        if(mo==month)
                        {
                            cout<<setfill(' ')<<setw(num*4)<<sum<<setw(4);	
                        }
                        sum++;		
                        c++;
                        if(j==7)
                        c=0;
                    }
                    else 
                    {
                        if(mo==month)
                            cout<<setfill(' ')<<setw(num*4)<<""<<setw(4);
                    }			
                }	
            }
			ci=1;
			if(mo==month)	
                cout<<endl;
        }
        ci=c;
        ci++;
        c=0;
        sum=0;
    }
}
