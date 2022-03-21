#include <stdio.h>
#include <string.h>

typedef struct  SinhVien
{
    char mssv[10];
    char hoten[30];
    int gt;
    char lop[10];
    float DTB ;

}sv;
// cau 1 nhap danh sach cac sinh vien 

void inputN(int &n)
{
    printf("nhap vao so luong sinh vien :");
    scanf("%d",&n);
}

void inputSV(sv &x)
{
    printf("\nnhap vao ma so sinh vien : ");
    scanf("%s",&x.mssv);
    printf("nhap vao ho va ten : ");
    fflush(stdin); gets(x.hoten);
    printf("nhap vao gioi tinh 1 la nam va 0 la nu : ");
    scanf("%d",&x.gt);
    printf("nhap vao lop : ");
    scanf("%s",&x.lop);
    printf("nhap vao diem trung binh : ");
    scanf("%f",&x.DTB);
}

sv outputSV(sv &x)
{
    printf("\nma so sinh vien : %s",x.mssv);
    printf("\nho va ten sinh vien : %s",x.hoten);
	if(x.gt == 1){
		printf("\ngioi tinh nnam",x.gt);
	}
	if(x.gt == 0){
    	printf("\ngioi tinh nu",x.gt);
	}
    printf("\nlop : %s",x.lop);
    printf("\ndiem trung binh cua sinh vien : %f\n",x.DTB);
}

void nhapdanhsach(sv a[] , int n)
{
	
    for(int i = 0 ; i < n ; i ++)
    {
        inputSV(a[i]);
    }
    
    
}
void xuatdssv(sv a[], int n)
{
	sv x;
	printf("\ndanh sach sinh vien");
	for(int i = 0 ; i < n ;i++)
	{
		outputSV(a[i]);
	}
}
void xuatsvdbtlonhon5(sv a[], int n)
{
	sv x;
	printf("\ndiem trung binh > 5 : ");
	for(int i = 0 ;i < n; i++)
	{
		if(a[i].DTB > 5)
			outputSV(a[i]);
	}
}
void xuatdssvcntt(sv a[], int n)
{
	sv x;
	printf("\nsinh vien nganh cong nghe thong tin ");
	for(int i = 0 ; i < n ;i++)
	{
		if(strstr(a[i].lop ,"TH"))
			outputSV(a[i]);
	}
}
int demsinhviennu(sv a[], int n)
{
	sv x;

	int dem = 0;
	for(int i = 0 ;i < n; i++)
	{
		if(a[i].gt == 0)
			dem++;
	}
	return dem;
}

int main()
{
    int n;
    sv x;
    sv a[100];
    inputN(n);
	nhapdanhsach(a,n);
	xuatdssv(a,n);
	xuatsvdbtlonhon5(a,n);
	xuatdssvcntt(a,n);
	printf("\nso luong sinh vien nu la : %d",demsinhviennu(a,n));
	
	
    
}
