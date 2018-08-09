#include<iostream>
using namespace std;
void length(char *p){
	int i=0,c=0;
	while(*(p+i)!='\0'){
		c++;
		i++;
	}
	cout<<"length is"<<c;
}

int main(){
	char a[100];
	cin>>a;
	length(a);
}
