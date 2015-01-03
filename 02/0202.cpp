#include<iostream>
#include<math.h>

#define VMAX 1000000
#define KMAX 30

using namespace std;

	int K[KMAX];
	char T[KMAX][VMAX];

void eratos(int n,bool prime[]){
	for(int i=0;i<=n;i++)prime[i]=false;
	for(int i=3;i<=n;i+=2)prime[i]=true;
	prime[2]=true;
	int lim=(int)sqrt((double)n)+1;
	for(int i=3;i<=lim;i+=2){
		if(!prime[i])continue;
		for(int j=i+i;j<=n;j+=i)prime[j]=false;
	}
}	

int main(){
	bool prime[VMAX+1];
	eratos(VMAX,prime);
	
	int k,v;

	while(cin>>k>>v && !(k==0 && v==0)){
		for(int i=0;i<k;i++)cin>>K[i];
		
		for(int j=0;j<=v;j++)T[0][j]=0;
		for(int j=K[0];j<=v;j+=K[0])T[0][j]=1;
		for(int i=0;i<k;i++)T[i][0]=1;
		
		for(int i=1;i<k;i++){
			for(int j=1;j<K[i];j++)T[i][j]=T[i-1][j];
			for(int j=K[i];j<=v;j++){
				T[i][j]=(T[i-1][j] | T[i][j-K[i]]);
			}
		}
		int ans=-1;
		for(int i=v;i>=2;i--){
			if(prime[i] && T[k-1][i]){
				ans=i;
				break;
			}
		}
		if(ans==-1)cout<<"NA"<<endl;
		else cout<<ans<<endl;
	}

}
