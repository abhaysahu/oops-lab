#include<stdio.h>
int cat(char *p,char *q){
	int i=0;
while(*(p+i)!='\0'){
	i++;
}
int k=0;
while(*(q+k)!='\0'){
*(p+i)=*(q+k);
k++;
i++;
}


}



int main(){
	char c[50],d[50];
	scanf("%s",c);
	scanf("%s",d);
	cat(&c,&d);
	printf("%s",c);
	getch();


}
