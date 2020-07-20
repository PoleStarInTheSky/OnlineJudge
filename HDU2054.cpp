#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
	string a,b;
	int pos1=0,pos2=0;
	while(cin>>a>>b){
		int pos1 = a.find('.');
		int pos2 = b.find('.');
	if(pos1!=-1){
	for(int i=a.length()-1;i>=pos1;i--){
			if(a[i]!='0') {
			if(a[i]!='.') i++;
        	a = a.substr(0,i);
				break;
			}
		}
	}
		
		if(pos2!=-1){
		for(int i=b.length()-1;i>=pos2;i--){
			if(b[i]!='0') {
			if(b[i]!='.') i++;
			b = b.substr(0,i);
			break;
		}
		}}
		

		
		if(a==b)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
		pos1=0;
		pos2=0;
	}
}
