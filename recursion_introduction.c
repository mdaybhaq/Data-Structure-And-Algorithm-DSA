#include <stdio.h>
int  fun1(int x){
		if (x>0){
			printf("%d \n", x);
			fun1(x-1);
		}
	}


int  fun2(int x){
	if (x>0){
		fun1(x-1);
		printf("%d \n", x);
	}
}


int main(){
	int x =3;
	fun1(x);
	fun2(x);
}
	
