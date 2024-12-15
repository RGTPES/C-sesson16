#include<stdio.h>
void printArr(int *aPtr,int size);
int main(){
int arr[]={3,4,5,2,7,1};
int size = sizeof(arr)/sizeof(int);
printArr(arr,size);

return 0;

}
printArr(int *aPtr, int size){
	
	for(int i =0;i<size;i++){
		printf("%d ",*(aPtr + i));
	}
}
