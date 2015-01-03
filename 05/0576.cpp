#include<iostream>

using namespace std;
int main(){
	int d;
	cin>>d;
	int koku,san,x,y;
	cin>>koku>>san>>x>>y;
	cout<<d-max(koku/x+(koku%x!=0),san/y+(san%y!=0))<<endl;
}
