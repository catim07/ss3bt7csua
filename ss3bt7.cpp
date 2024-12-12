#include<stdio.h>
int main(){
	long sum,num;
	printf("moi ban nhap so co 4 so la: ");
	scanf("%ld",&num);
	if(num<1000 || num>9999){
		printf("khong hop le moi ban nhap lai");
		return 1;
	}
     	sum = sum + (num % 10);
		num = num / 10;
		sum = sum + (num % 10);
		num = num / 10;
		sum = sum + (num % 10);
		num = num / 10;
		sum = sum + (num % 10);
		num = num / 10;
		
	
	printf("tong tung so cua ban nhap la: %ld",sum);
	return 0;
}
