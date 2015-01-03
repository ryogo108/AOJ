#include<iostream>
#include<algorithm>
#include<functional>
#include<cmath>  // log10(int n);
#include<math.h>
 
using namespace std;
 
 
int gcd(int x,int y){  //最大公約数 
if(y==0)return x;
 
if(x>y)return gcd(y,x%y);
else return gcd(x,y%x);
}
 
 
 
int main(){
 
int x,y;
while(cin>>x>>y)cout<<gcd(x,y)<<" "<<x/gcd(x,y)*y<<endl;
 
}
