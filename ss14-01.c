#include <stdio.h>
#include <string.h>

int main()
{	
	char chuoi[100];
	printf("Moi ban nhap chuoi ky tu minh muon nhap:");
	scanf("%s",&chuoi);
	printf("Chuoi ban vua nhap la:%s\n",chuoi); 
	printf("Chuoi ban vua nhap co:%d\n",strlen(chuoi));
 
	return 0;

 }

