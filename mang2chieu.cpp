#include <stdio.h>
void nhap(int a[][100],int n);
void xuat(int a[][100],int n);
int tong(int a[][100],int n);
int tich(int a[][100],int n);
void kiemtra(int a[][100],int n);
int main()
{
	int a[100][100];
	int n;
	printf("nhap n: ");
	scanf("%d",&n);
	nhap(a,n);
	xuat(a,n);
	tong(a,n);
	//tich(a,n);
	printf("\ncot %d co tich be nhat",tich(a,n));
	kiemtra(a,n);
	return 0;
}

void nhap(int a[][100], int n){
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			printf("a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
}

void xuat(int a[][100], int n){
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			printf("%5d",a[i][j]);
		}
		printf("\n");
	}
}

int tong(int a[][100], int n){
	int s=0;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			s=s+a[i][j];
		}
	}
	printf("tong mang: %d",s);
}

int tich(int a[][100],int n){
	int min=0,k;
	for(int j=0; j<n; j++){
		int p=1;
		for(int i=0; i<n; i++){
			p=p*a[i][j];
			if(min>p){
				min=p;
				k=j;
			}
		}
		printf("\ntich cot %d: %d",j,p);
	}
	return k,min;
}
void kiemtra(int a[][100],int n){
	int dem=0;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(i<j){
				if(a[i][j]==0){
					dem++;
				}
			}
			else if(i>j){
				if(a[i][j]==0){
					dem++;
				}
			}
		}
	}
	if(dem==0){
		printf("\nma tran khong phai la ma tran tam giac");
	}
	else{
		printf("\nma tran la ma tran tam giac");
	}
}
