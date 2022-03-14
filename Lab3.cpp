#include <stdio.h>
#define MAX 100
// nhap ma tran a bao gom dong cot 
void nhapdongcot(int &d, int &c){
	printf("nhap vao so dong : "); scanf("%d",&d);
	printf("nhap vao so cot : "); scanf("%d",&c);
}
void nhapmatran(int a[][10], int d , int c){
	for(int i = 0 ; i < d ; i++){
		for(int j =0 ; j < c ; j++){
			printf("a[%d][%d] = ",i,j);
			scanf("%d", &a[i][j]);
		}
	}
}
// cau 2 xuat ma tran a
void xuatmatran(int a[][10], int d , int c){
	printf("\nma tran la : \n");
	for(int i = 0;i <d ; i++ ){
		for(int j=0 ; j< c; j++)
			printf("%5d",a[i][j]);
		printf("\n");
	}
}
//cau 3 tinh tong cac phan tu

int tinhtongcacphantu(int a[][10], int d , int c){
	int tong = 0;
 	for(int i = 0;i < d ; i++){
 		for(int j=0 ; j< c; j++)
 	tong = tong +a[i][j];
 	}
	return tong;
}
// cau 4 tinh trung binh cong 
float trungbinhcong(int a[][10], int d, int c){
	return tinhtongcacphantu(a,d,c) *1.0/(d*c);
}
// cau 5 tinh trung binh cong cua duong
float trungbinhcongsoduong(int a[][10], int d , int c){
	 int dem = 0;
	 int tong1 = 0;
	 for(int i = 0; i < d ; i++){
		 for (int j = 0; j < c; j++)
		 {
			 if(a[i][j] > 0)
				 tong1 = tong1 + a[i][j];
				 dem++;
		 }
	 	}return tong1 *1.0/dem;
}
int timmax(int a[][10], int d , int c)
{
	int max = a[0][0];
	for(int i = 0 ; i < d; i++){
		for(int j= 0 ; j < c; j++)
		{
			if(max < a[i][j])
				max = a[i][j];
		}
	return max;
}
// goi ham xuat ma tran 
int main(){
	int a[10][10],d,c;
	nhapdongcot(d,c);nhapmatran(a,d,c);xuatmatran(a,c,d);
	printf("\ntong ma tran la : %d",tinhtongcacphantu(a,d,c));
	printf("\ntrung binh cong ma tran : %f",trungbinhcong(a,d,c));
	printf("\ntrung binh cong so duong cua ma tran : %f",trungbinhcongsoduong(a,d,c));
	printf("\ngia tri lon nhat la : %d",timmax(a,d,c));
	return 0;
}