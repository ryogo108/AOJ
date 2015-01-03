#include<iostream>
#include<algorithm>
#include<functional>
#include<cmath>  // log10(int n);
#include<math.h>
 
//#include"PC.h"
 
using namespace std;
 
 
bool pitagoras_number(int data[3]){
sort(data,data+3,greater<int>());
int sum;
for(int i=1;i<3;i++)sum+=pow(data[i],2.0);
 
return pow(data[0],2.0)==sum;
 
 
}
 
 
int main(){
 
int n;
cin>>n;
    for(int i=0;i<n;i++){
    int data[3];
    for(int i=0;i<3;i++)cin>>data[i];
     
    if(pitagoras_number(data))cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
     
    }
 
}
