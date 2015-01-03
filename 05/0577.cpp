#include<iostream>

using namespace std;

int data[300][3];
int sum[300][3]={0};
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>data[i][0]>>data[i][1]>>data[i][2];
	}
	
	for(int k=0;k<3;k++)for(int i=0;i<n;i++){
		sum[i][k]=data[i][k];
		for(int j=0;j<n;j++){
			if(data[i][k]==data[j][k] && i!=j)sum[i][k]=0;
		}
	}
	for(int i=0;i<n;i++){
		cout<<sum[i][0]+sum[i][1]+sum[i][2]<<endl;
	}
}
