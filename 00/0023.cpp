#include<iostream>
#include<complex>
#define EPS 1e-10
using namespace std;

typedef complex<double>P;

int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		double ra,rb;
		P pa,pb;
		
		cin>>pa.real()>>pa.imag()>>ra;
		cin>>pb.real()>>pb.imag()>>rb;
		double d=abs(pa-pb);
		if(d<rb-ra)cout<<-2<<endl;
		else if(d<ra-rb)cout<<2<<endl;
		else if(d<=ra+rb)cout<<1<<endl;
		else cout<<0<<endl;
	}
}
