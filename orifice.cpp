#include<bits/stdc++.h>

using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	float h1,h2,Qact,x,Qth,Cd;

	cout<<"Enter H1:";
	cin>>h1;
	cout<<endl;
	cout<<"Enter H2:";
	cin>>h2;
	cout<<endl;
	cout<<"Enter Qact:";
	cin>>Qact;
	cout<<endl;

	x=abs(h1-h2);
	float a1=706.5,a2=200.96;
	float v=pow((2*980.665*x),0.5);
	Qth=(a1*a2*v)/(pow((a1*a1)-(a2*a2),0.5));
	Cd=Qact/Qth;

	cout<<"X:"<<x<<endl;
	cout<<"Qth:"<<Qth<<endl;
	cout<<"Cd:"<<Cd<<endl;


	
	return 0;
}
