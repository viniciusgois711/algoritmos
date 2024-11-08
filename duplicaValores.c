#include <stdio.h>

void duplicar(int a[]){
	for(int i = 0; i<5; i++){
		a[i] = a[i]*2;
	}

}

int main(){
	int a[5] = {1,2,3,4,5};

	duplicar(a);
	for(int i = 0; i < 10; i++) {
		printf("%d ", a[i]);
	}
	
}