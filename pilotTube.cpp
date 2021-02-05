#include<bits/stdc++.h>

using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	float h1,h2,dif;
	float g=980.665;
	cout<<"input H1 in cm : ";
	cin>>h1;
	cout<<endl;
	cout<<"input H2 in cm : ";
	cin>>h2;
	cout<<endl;
	dif=abs(h1-h2);
	cout<<"ΔH = "<<dif<<endl;
	float x= 2*g*dif;
	float v = pow(x,0.5);

	cout<<"V = "<<v<<"cm/sec"<<endl;
	
	return 0;
}
