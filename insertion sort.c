#include<stdio.h>
#include<conio.h>
int main () {
	int a[100];
	int n;
	int i, j, temp;
	printf("So phan tu : ");
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	for (i =1; i < n; i++) {
		int temp = a[i];
		j = i - 1;
		while ( j >= 0 && temp < a[j]) {
			a[j+1] = a[j];
			j--;
		}
		a[j+1]= temp;
	}
	for (i =0; i < n; i++) {
		printf("%d ", a[i]);
	}
	return 0;
}
