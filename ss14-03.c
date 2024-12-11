#include <stdio.h>
#include <string.h>

int main()
{
	char kytu; 
	char chuoi[100]="thnntbh";
	int n = strlen(chuoi); 
	for(int i=0;i<n/2;i++) {
		kytu=chuoi[i];
	    chuoi[i]=chuoi[n-i-1];
	    chuoi[n-i-1]=kytu;
	}
	for(int i=0;i<n;i++) {
		printf("%c",chuoi[i]);
	}

	return 0;

 }

