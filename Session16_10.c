#include<stdio.h>
void dltArr(int *aPtr,int index,int *size);
int main(){
int arr[]={4,2,6,7,8};
int size = sizeof(arr)/sizeof(int);
int index;
for(int i =0;i<size;i++){
	printf("%d ",arr[i]);
}
printf("\nmoi ban nhap vi tri can xoa : ");
scanf("%d",&index);

 dltArr(arr, index,&size);
for(int i =0;i<size;i++){
	printf("%d ",arr[i]);
}


return 0;

}
void dltArr(int *aPtr,int index,int *size){

	for(int i =index-1;i<=*size;i++){
		*(aPtr+i)=*(aPtr+i+1);
		
		
	}

	(*size)--;
}
