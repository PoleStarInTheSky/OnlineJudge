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
一个正整数n,如果是奇数n=3*n+1 偶数n=n/2,直到n=1,停止执行;执行的次数是T;
求在区间[i，j]中T的最大值。
比如n=22 执行的过程为 22 11 34 17 52 26 13 40 20 10 5 16 8 4 2 1 总共执行了16次即T=16;
当i=4,j=6时 T(4)=3,T(5)=6,T(6)=9;所以最大值T是9.
Input

输入为多组输入，输入两个整数i，j;保证输入的数大于0小于10^6;
You can assume that no opperation overflows a 32-bit integer.
Output
每行输出三个数
i，j，T。
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
