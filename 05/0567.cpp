#include<iostream>
#include<math.h>
#include<algorithm>

using namespace std;
int data[222];
int main(){

	int n;
	cin>>n;
	int A,B;
	cin>>A>>B;
	int C;
	cin>>C;
	for(int i=0;i<n;i++)cin>>data[i];
	sort(data,data+n,greater<int>());
	int cal=C;
	int mon=A;
	int num=0;
	while(1.*cal/mon<1.*(cal+data[num])/(mon+B)){
		cal+=data[num++];
		mon+=B;
	}
	cout<<cal/mon<<endl;
}
