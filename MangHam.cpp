#include<conio.h>
#include<stdio.h>
void NhapMang(int array[100],int n){
	for(int i=0;i<n;i++){
		printf("array[%d]=",i);
		scanf("%d",&array[i]);
	}	
}
void InMang(int arr[100],int n){
	for(int i=0;i<n;i++){
		printf("arr[%d]=%d",i,arr[i]);
	}
}
int TongMang(int mang[100],int n){
	int tong=0;
	for(int i=0;i<n;i++){
		if(mang[i]%2==0) tong = tong+mang[i];
	}
	return tong;
}
// viet ham tinh tong cac giai thua cua cac phan tu trong mang
int TimMax(int mang[100],int n){
	int max=mang[0];
	for(int i=0;i<n;i++){
		if(max<mang[i]) max = mang[i];
	}
	return max;
}
int main(){
	int mang[100];
	int n; // so phan tu muon nhap vao mang
	printf("Nhap n=");
	scanf("%d",&n);
	NhapMang(mang,n);
	InMang(mang,n);
	printf("Tong cac phan tu chan la %d",TongMang(mang,n));
	printf("Phan tu lon nhat la %d",TimMax(mang,n));
	
}
