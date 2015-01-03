#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct Box{
	int x1,y1,z1,x2,y2,z2;
};

vector<long long>X;
vector<long long>Y;
vector<long long>Z;
vector<Box>data;

bool che(Box B1,Box B2){
	bool re=true;
	return (B1.x1<=B2.x1 && B1.x2>=B2.x2 
		 && B1.y1<=B2.y1 && B1.y2>=B2.y2
		 && B1.z1<=B2.z1 && B1.z2>=B2.z2);
}

int cou(int x,int y,int z){
	int x1=X[x],x2=X[x+1];
	int y1=Y[y],y2=Y[y+1];
	int z1=Z[z],z2=Z[z+1];
	Box B2=(Box){x1,y1,z1,x2,y2,z2};
	int re=0;
	for(int i=0;i<data.size();i++){
		Box B1=data[i];
		if(che(B1,B2))re++;
	}
	return re;
}
int main(){
	int n,k;
	cin>>n>>k;
	for(int i=0;i<n;i++){
		Box tmp;
		cin>>tmp.x1>>tmp.y1>>tmp.z1>>tmp.x2>>tmp.y2>>tmp.z2;
		
		data.push_back(tmp);
		X.push_back(tmp.x1);X.push_back(tmp.x2);
		Y.push_back(tmp.y1);Y.push_back(tmp.y2);
		Z.push_back(tmp.z1);Z.push_back(tmp.z2);
	}
	sort(X.begin(),X.end());
	sort(Y.begin(),Y.end());
	sort(Z.begin(),Z.end());
	long long ans=0;
	for(int x=0;x<X.size()-1;x++){
		for(int y=0;y<Y.size()-1;y++){
			for(int z=0;z<Z.size()-1;z++){
				if(cou(x,y,z)>=k)ans+=(long long)((X[x+1]-X[x])*(Y[y+1]-Y[y])*(Z[z+1]-Z[z]));
			}
		}
	}
	
	cout<<ans<<endl;
}
