#include<bits/stdc++.h>
using namespace std;
int main(){
	long long i,j,t=1,maxt=0,flag=0;
	while(cin>>i>>j){ 
	if(i>j){
	swap(i,j);
	flag =1;
	} 
	for(long long p=i;p<=j;p++){
	    long long k=p;
		while(k!=1){
		if(k%2==0) k /= 2;
		else k = 3*k +1;
		t++;	
		}
		if(t>maxt) maxt=t;
		t=1;
	}
	if(flag) swap(i,j);
	cout<<i<<' '<<j<<' '<<maxt<<endl;
	maxt=0,t=1,flag=0;
	}
} 

/* 
һ��������n,���������n=3*n+1 ż��n=n/2,ֱ��n=1,ִֹͣ��;ִ�еĴ�����T;
��������[i��j]��T�����ֵ��
����n=22 ִ�еĹ���Ϊ 22 11 34 17 52 26 13 40 20 10 5 16 8 4 2 1 �ܹ�ִ����16�μ�T=16;
��i=4,j=6ʱ T(4)=3,T(5)=6,T(6)=9;�������ֵT��9.
Input

����Ϊ�������룬������������i��j;��֤�����������0С��10^6;
You can assume that no opperation overflows a 32-bit integer.
Output
ÿ�����������
i��j��T��
Sample Input
10 1
4 6
201 210
900 1000
Sample Output
10 1 20
4 6 9
201 210 89
900 1000 174
*/
