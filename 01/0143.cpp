#include<iostream>
#include<complex>

#define EPS 1e-3

using namespace std;

typedef complex<double> P;

double cross(P v1,P v2){
	return v1.real()*v2.imag()-v1.imag()*v2.real();
}

bool che(P v1,P v2,P v3,P v){
	if(cross(v2-v1,v-v1)<-EPS&&cross(v3-v2,v-v2)<-EPS&&cross(v1-v3,v-v3)<-EPS)return true;
	else if(cross(v2-v1,v-v1)>EPS&&cross(v3-v2,v-v2)>EPS&&cross(v1-v3,v-v3)>EPS)return true;
	return false;
}

int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		P v1,v2,v3;
		P k,s;
		cin>>v1.real()>>v1.imag()>>v2.real()>>v2.imag()>>v3.real()>>v3.imag()>>k.real()>>k.imag()>>s.real()>>s.imag();
		
		if(che(v1,v2,v3,k)^che(v1,v2,v3,s)==1)cout<<"OK"<<endl;
		else cout<<"NG"<<endl;
	}
}
