#include <iostream>
#include<string>
using namespace std;
 
const string data[2]={"JOI","IOI"};
int main() {
    // your code goes here
    string str;
    while(cin>>str){
        int ans[2]={0,0};
        for(int i=0;i<(int)str.size()-2;i++){
            for(int j=0;j<2;j++){
                if(str[i]==data[j][0] &&str[i+1]==data[j][1] && str[i+2]==data[j][2])ans[j]++;
        }
}
        cout<<ans[0]<<endl<<ans[1]<<endl;
     
 
}
}
