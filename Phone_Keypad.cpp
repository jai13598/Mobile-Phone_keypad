#include<iostream>
using namespace std;
char key[][10]={"","","ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"};
void Phone_keypad(char* in,char* opt,int i,int j){
	if(in[i]=='\0'){//base case
		opt[j]='\0';
		cout<<opt<<endl;
		return;
	}
	//recursive case
	int digit=in[i]-'0';
	for(int k=0;key[digit][k]!='\0';k++){
		opt[j]=key[digit][k];
		Phone_keypad(in,opt,i+1,j+1);
	}
}
int main(){
	char in[100];
	char opt[100];
	cin>>in;
	Phone_keypad(in,opt,0,0);
	return 0;
}
