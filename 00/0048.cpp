#include<iostream>

using namespace std;

int main(){
	double x;
	while(cin>>x){
		if(x<=48.0)cout<<"light fly";
		else if(x<=51.0)cout<<"fly";
		else if(x<=54.0)cout<<"bantam";
		else if(x<=57.0)cout<<"feather";
		else if(x<=60.0)cout<<"light";
		else if(x<=64.0)cout<<"light welter";
		else if(x<=69.0)cout<<"welter";
		else if(x<=75.0)cout<<"light middle";
		else if(x<=81.0)cout<<"middle";
		else if(x<=91.0)cout<<"light heavy";
		else 			cout<<"heavy";
		cout<<endl;
	}
}
