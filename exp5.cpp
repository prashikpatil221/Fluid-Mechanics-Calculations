#include<bits/stdc++.h>

using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	
	float d=0.082,ro=1000,vw=0.001;
	float h,q;
	cin>>h>>q;
	float dh=h*0.001;
	float Q=(q*0.001)/3600;
	float area=52.78*pow(10,-8);
	float vel=Q/area;
	float dp=ro*9.81*dh;
	float re= (ro*vel*d)/vw;


	cout<<"ΔH = "<<dh<<endl;
	cout<<"Flow rate (Q) = "<<Q<<endl;
	cout<<"ΔP = "<<dp<<endl;
	cout<<"Re = "<<re<<endl;
	return 0;
}
