#include<iostream>
#include<string.h>
#include<algorithm>
#include<cstdlib>
#include<math.h>
using namespace std;

int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	cout<<"Enter values : "<<endl;

	float Cd,Q,H;
	int tankType;

	cout<<"Enter 'head over crest H(in meter) = ";
	cin>>H;
	cout<<endl;

	cout<<"Enter 'Flow rate Q(in m^3/sec) = ";
	cin>>Q;
	cout<<endl;

	cout<<"choose tank type : "<<endl;
	cout<<"1.Triangular    2. rectrangular"<<endl;

	cin>>tankType;
	//
	if(tankType==1){
		float power = pow(H,1.5);
		Cd=(0.659)*(Q/power);
	}
	//
	else if(tankType==2){
		float power = pow(H,1.5);
		Cd=(1.78)*(Q/power);
	}
	else{
		cout<<"INVALID TANK TYPE"<<endl;
	}
	cout<<"discharge coefficient(Cd) = "<<Cd<<endl;
	return 0;
}
