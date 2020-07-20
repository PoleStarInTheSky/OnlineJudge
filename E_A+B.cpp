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
��������С��100��������A��B,����A+B.
��Ҫע�����:A��B��ÿһλ�����ɶ�Ӧ��Ӣ�ĵ��ʸ���.
Input
��������������ɲ�������,ÿ����������ռһ��,��ʽΪ"A + B =",�������ַ�����һ���ո���.��A��BͬʱΪ0ʱ�������,��Ӧ�Ľ����Ҫ���.
Output
��ÿ�������������1��,��A+B��ֵ.
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
