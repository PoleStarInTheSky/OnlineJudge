#include<iostream>
#include<algorithm>
using namespace std;

struct num{
	int id ;
	double value ;
	}; 

bool byId(num a,num b){
	return a.id>b.id;
}

bool byValue(num a,num b){
	return a.value>b.value;
}

int main(){
	int n,m,k;
	num a[1000];
	
	while(cin>>n>>m>>k){
	
	for(int i=1;i<1000;i++){
	   a[i].id = i;
		a[i].value = 0;
	}
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				double temp ;
				cin>>temp;
				a[j].value += temp;
			}
		}
		
		sort(a+1,a+1+m,byValue);
		sort(a+1,a+1+k,byId);
		for(int i=1;i<k;i++){
			cout<<a[i].id<<' ';
		}
		cout<<a[k].id<<endl;
	}
}

