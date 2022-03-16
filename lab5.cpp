#include <stdio.h>
#include <math.h>

typedef struct phanso
{
	int tu;
	int mau;
}PS;

void nhapphanso( PS &x)
{
	printf("nhap tu x : "); scanf("%d",&x.tu);
	do{
		printf("nhap mau so x : "); scanf("%d",&x.mau);
		if(x.mau == 0){
			printf("mau so phai khac 0 > nhap lai");
		}
	}while(x.mau == 0);
}
void nhapphanso1( PS &y)
{
	printf("nhap tu y : "); scanf("%d",&y.tu);
	do{
		printf("nhap mau so y : "); scanf("%d",&y.mau);
		if(y.mau == 0){
			printf("mau so phai khac 0 > nhap lai");
		}
	}while(y.mau == 0);
}

int ucln(int a, int b){
	a = abs(a); b = abs(b);
	while(a != b){
		if(a > b) a = a- b;
		else b = b -a;
	}
	return a;
}


void xuatphanso(PS x){
	printf("Phan so x : %d / %d",x.tu,x.mau);
}

void xuatphanso1(PS y){
	printf("Phan so y: %d / %d",y.tu,y.mau);
}

int main(){
	PS x;
	PS Y;
	
	nhapphanso1(y); xuatphanso(y);
	nhapphanso(x);  xuatphanso(x);

	//rutgonphanso(x);
	
}
