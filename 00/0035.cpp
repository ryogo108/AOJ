#include<iostream>
#include<complex>
#include<algorithm>
#include<vector>
using namespace std;

typedef complex<double> P;

#define EPS (1e-10)

#define EQ(a,b) (abs((a)-(b)) < EPS)

#define EQV(a,b) ( EQ((a).real(), (b).real()) && EQ((a).imag(), (b).imag()) )


double cross(P a, P b) {
  return (a.real() * b.imag() - a.imag() * b.real());
}

bool inTriangle(P v1,P v2,P v3,P v){
	if(cross(v2-v1,v-v1)<-EPS&&cross(v3-v2,v-v2)<-EPS&&cross(v1-v3,v-v3)<-EPS)return true;
	else if(cross(v2-v1,v-v1)>EPS&&cross(v3-v2,v-v2)>EPS&&cross(v1-v3,v-v3)>EPS)return true;
	return false;
}

P data[4];
bool input(){
	char c;
	
	for(int i=0;i<4;i++){
		if(!(cin>>data[i].real()))return false;
		cin>>c;
		cin>>data[i].imag();
		if(i<3)cin>>c;
	}
	return true;
}
int main(){
	while(input()){
		
		for(int i=0;i<4;i++){
			vector<P>v;
			for(int j=0;j<4;j++){
				if(j!=i)v.push_back(data[j]);
			}
			if(inTriangle(v[0],v[1],v[2],data[i])){
				cout<<"NO"<<endl;
				goto fail;
			}
		}
		cout<<"YES"<<endl;
		fail:;
	}
	
}
