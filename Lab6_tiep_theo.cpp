#include <stdio.h>
#include <string.h>

typedef struct Sach
{
    char ma[30];
    char ten[30];
    char Tac_gia[30];
    char loai_sach;
    int NXB;
    long Gia_ban;
    int So_luong;
}S;
void nhap(int &n)
{
	printf("nhap vao so luong sach : ");
	scanf("%d",&n);
}
void nhap_thong_tin(S &x)
{
    printf("\nnhap vao ma sach : ");
    scanf("%s",&x.ma);
    printf("nhap vao ten sach :");
    fflush(stdin); gets(x.ten);
    printf("nhap vao ten tac gia : ");
    fflush(stdin); gets(x.Tac_gia);
    printf("nhap vao loai sach 1 la xa hoi va 2 la tu nhien : ");
    scanf("%s",&x.loai_sach);
    printf("nhap vao nam xuat ban : ");
	scanf("%d",&x.NXB);
    printf("nhap vao gia ban : ");
    scanf("%d",&x.Gia_ban);
    printf("nhap vao so luong : ");
    scanf("%d",&x.So_luong);
}
void xuat_thong_tin_sach(S x)
{
	
	printf("\nMa sach : %s",x.ma);
	printf("\nTen sach : %s",x.ten);
	printf("\nTac gia : %s",x.Tac_gia);
	if(x.loai_sach == 1)
	{
		printf("\nsach xa hoi ");
	}
	if(x.loai_sach == 2)
	{
		printf("\nsach tu nhien : ");
	}
	printf("\nNha xuat ban : %s",x.NXB);
	printf("\nGia ban : %d",x.Gia_ban);
	printf("\nSo luong : %d\n",x.So_luong);
}
void Nhap_nhieu_sach(S x, S a[], int n)
{
	for(int i = 0 ; i < n ; i++)
	{
		nhap_thong_tin(a[i]);
	}
	
	
}
void xuat_nhieu_sach(S x, S a[],int n)
{
	for(int i = 0 ; i < n ; i++)
	{
		xuat_thong_tin_sach(a[i]);
	}
}
int main(){
	S x;
	S a[100];
	int n;
	nhap(n);
	Nhap_nhieu_sach(x,a,n);
	xuat_nhieu_sach(x,a,n);
}
