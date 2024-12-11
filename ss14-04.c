#include <stdio.h>
#include <string.h>

int main()
{
	char kytu;
	char chuoi[100]="xin chao moi nguoi minh la nhat";
	int n = strlen(chuoi);
	int count=0; 
	printf("Moi ban nhap ky tu muon tim kiem:");
	scanf("%c",&kytu);
	for(int i=0;i<n;i++) {
		if(kytu==chuoi[i]){
	       count++;
		}
	}
	printf("Ky tu %c xuat hien:%d",kytu,count);

	return 0;

 }

