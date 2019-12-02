//////////////ABS Function/////////////
//                                  //
//             A-H-M-A-D           //
//                                //
///////////////////////////////////
#include <iostream.h>
float abs (float a)
{
if (a<0)
return (-1*a);
else
return (a);
}
int main()
{
float no;
cout<<"Enter The Number For Finde ABS: ";
cin>> no;
abs (no);
cout<<"The ABS For "<<no<<" Is: "<<abs(no)<<endl;
return(0);
}
