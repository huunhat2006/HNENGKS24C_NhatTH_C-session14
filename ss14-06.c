#include <stdio.h>
#include <string.h>

int main()
{  
	char chuoi[100]="xin chao moi nguoi minh la nhat";
	int n = strlen(chuoi);
	int count=0;
	int check=0; 
	
	for(int i=0;i<n;i++) {	
		if(chuoi[i]==' '){
	       check++;
		}
		count++;	
	}
	printf("Chuoi co %d tu",count-check);
	return 0;

 }
