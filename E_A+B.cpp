#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

struct alphabet{
	string s[10];
	int n[10];
};

int toNum(int a,alphabet chart,int pos3,string num1){
		if(pos3!=-1){
			for(int i=0;i<10;i++){
				if(num1.substr(0,pos3)==chart.s[i]){
					a = chart.n[i];
				}
			}
			
			for(int i=0;i<10;i++){
				if(num1.substr(pos3+1)==chart.s[i]){
					a = a*10+chart.n[i];
				}
			}
		}else{
			for(int i=0;i<10;i++){
				if(num1.substr(0)==chart.s[i]){
					a = chart.n[i];
				}
		}
		
		}
		return a;
}
int main(){
	alphabet chart;
	chart.s[0]="zero";
	chart.s[1]="one";
	chart.s[2]="two";
	chart.s[3]="three";
	chart.s[4]="four";
	chart.s[5]="five";
	chart.s[6]="six";
	chart.s[7]="seven";
	chart.s[8]="eight";
	chart.s[9]="nine";
	for(int i=0;i<10;i++){
		chart.n[i] =i;
	}
	int pos1,pos2,a,b,pos3,pos4;
	string temp,num1,num2;
	while(getline(cin,temp)){
		pos1 = temp.find(" + ");
		pos2 = temp.find(" =");
		num1 = temp.substr(0,pos1);
		num2 = temp.substr(pos1+3,pos2-pos1-3);
		//cout<<num1<<'*'<<endl<<num2<<'*'<<endl;
		pos3 = num1.find(' ');
		pos4 = num2.find(' ');
		a=toNum(a,chart,pos3,num1);
		b=toNum(b,chart,pos4,num2);
		if(a+b==0) continue; 
		cout<<a+b<<endl;
	
							}
}

/*
读入两个小于100的正整数A和B,计算A+B.
需要注意的是:A和B的每一位数字由对应的英文单词给出.
Input
测试输入包含若干测试用例,每个测试用例占一行,格式为"A + B =",相邻两字符串有一个空格间隔.当A和B同时为0时输入结束,相应的结果不要输出.
Output
对每个测试用例输出1行,即A+B的值.
Sample Input
one + two =
three four + five six =
zero seven + eight nine =
zero + zero =
Sample Output
3
90
96
*/ 
