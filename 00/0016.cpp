#include<iostream>
#include<math.h>

#define PI 3.14159265359
using namespace std;

int main(){
	int n,r;
	char c;
	double nx=0,ny=0;
	int nr=90;
	while(cin>>n>>c>>r &&n+r){
		nx+=cos(nr*PI/180.0)*n;
		ny+=sin(nr*PI/180.0)*n;
		nr+=-1*r;
	}
	
	cout<<(int)nx<<endl<<(int)ny<<endl;
}
