#include <stdio.h>

int main(){
	int arr[1000],n;
	printf("Nhap n= ");
	scanf("%d",&n);
	
	for (int i=0; i<n; i++){
		printf("Nhap phan tu arr[%d]= ",i);
		scanf("%d",&arr[i]);
	}
	int sum=0,count=0;
	for (int i=0; i<n; i++){
		if (arr[i] % 2 != 0){
			sum+=arr[i];
			count++;
		}
	}
	if (count > 0){
		float tb=(float) sum/count;
		printf("Trung binh cong cac so le trong mang la: %f \n",tb);
	}else{
		printf("Mang khong co so le!");
	}
	
}
