#include<iostream>
#include<vector>
#include<string.h>
#include<algorithm>
#include<cstdlib>
#include<math.h>
#include<map>
#include<set>
#include <numeric>
#include <cstring>
#include<unordered_set>
#include <climits>
using namespace std;

const int mxN=5e4,M=1e9+7;

int main() 
{
	float densityLiq,g,x,p,h,d,a,sigma,density,j,outDay,totalOut,volOutTot;

	j=0.85;
	sigma=690000000;

	cout<<"enter output per hour: ";
	cin>>outDay;

	cout<<"enter density of liquid : ";
	cin>>densityLiq;

	cout<<endl;

	totalOut=outDay*10*10;

	volOutTot=totalOut/densityLiq;

	x= volOutTot*(2.66)*(0.318);

	d=pow(x,0.33);	
//	cout<<d<<endl;

	h=1.5*d;
	//cout<<h<<endl;

	a=3.14*d*d;

	p=densityLiq*9.8*h;

	float thickShell,thickRoof,ThickBase;

	thickShell=(p*d)/((2*sigma*j)-p);
//	cout<<thickShell<<endl;

	thickRoof=(p*d)/((4*sigma*j)-p);
//	cout<<thickRoof<<endl;

	ThickBase=pow(((3*densityLiq*h*a)/(4*sigma*j)),1/2);
//	cout<<ThickBase<<endl;
	cout<<endl;

	cout<<"********************************************"<<endl;

	int in;
	cout<<"1. thickness of shell"<<endl;
	cout<<"2. thickness of roof"<<endl;
	cout<<"3. thickness of base"<<endl;
	cout<<"4.exit"<<endl<<endl;
	cout<<"enter query number : ";
	cin>>in;
	
		switch(in)
		{
			case 1:
				cout<<"the thickness of shell is "<<thickShell;
				break;

			case 2:
				cout<<"the thickness of roof is "<<thickRoof;
				break;

			case 3:
				cout<<"the thickness of base is "<<ThickBase;
				break;

			case 4:
				exit(0);		
		}



	return 0;
}
