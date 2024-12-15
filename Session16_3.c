#include<stdio.h>
int tinhTong(int *x,int *y);
int main(){
int a =10;
int b =20;
int tong =tinhTong(&a,&b);
printf("tong 2 so la %d",tong);



return 0;

}
tinhTong(int *x,int *y){
	int sum =0;
	sum = *x + *y;
	return sum;
}
