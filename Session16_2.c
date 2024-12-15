#include<stdio.h>
void change(int *x,int *y);

int main(){
int a=10;
int b =20;
printf("gia tri cua a trc khi doi la %d\n",a);
printf("gia tri cua b trc khi doi la %d\n",b);
change(&a,&b);
printf("gia tri cua a sau khi doi la %d\n",a);
printf("gia tri cua a sau khi doi la %d\n",b);



return 0;

}
 change(int *x,int *y){
	int temp = *x;
	*x = *y;
	*y=temp;
}
