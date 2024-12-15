#include<stdio.h>
void sortArr(int *aPtr, int size);
int main(){
int a[]={3,4,7,9,5,2,1};
int size = sizeof(a)/sizeof(int);
sortArr(a,size);




return 0;

}
void sortArr(int *aPtr, int size){
	for(int i =0;i<size;i++){
		for(int j =i+1;j<size;j++)
		if(*(aPtr  +i)>*(aPtr + j)){
			int temp = *(aPtr + i);
			*(aPtr + i) = *(aPtr + j);
			*(aPtr + j) = temp;
		}
	}
	for(int i =0;i<size;i++){
	printf("%d ",*(aPtr + i));
}
}
