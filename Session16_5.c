#include<stdio.h>
void fixArr(int *x,int a,int b);
int main(){
	int arr[] = {4,6,5,2,9,8};
	int index,value;
	int size = sizeof(arr)/sizeof(int);
	for(int i =0;i<size;i++){
		printf("%d ",arr[i]);
	}
printf("\nmoi ban nhap vi tri can sua : ");
scanf("%d",&index);
printf("moi ban nhap gia tri : ");
scanf("%d",&value);
fixArr(arr,index,value);
	for(int i =0;i<size;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}
fixArr(int *x,int a,int b){
	*(x+(a-1)) = b;
}
