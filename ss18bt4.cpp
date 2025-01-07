#include<stdio.h>
void array(int *arr,int size){
	for(int i=0;i<size;i++){
		printf("\nphan tu %d: %d",i,*(arr+i));
	}
}
int main(){
	int arr[]={2,6,1,7,8};
	int size= sizeof(arr)/sizeof(arr[0]);
	printf("cac phan tu trong mang: \n",arr);
	array(arr,size);
	return 0;
}
