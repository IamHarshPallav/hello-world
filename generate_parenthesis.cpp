#include<iostream>
using namespace std;
void generateparenthesis(int n;char output[],int i,int open,int close){
if(i == 2*n){
	output[i] == '\0';
	cout<<output;
}
if(n<open){
	output[i]="(";
	generateparenthesis(n,output,i+1,open+1,close);
}
if(close<open){
	output[i]=")";
	generateparenthesis(n,output,i+1,open,close+1);
}
}


int main(){
int n;
cin>>n;
char output[1000];
generateparenthesis(n,output,0,0,0);
return 0;
}