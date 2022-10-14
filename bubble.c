#include<stdio.h>
#include<conio.h>

void main() {
	int arr[100];
	int n; 
	
	printf("So phan tu:", n);
	scanf("%d", &n);
		int i, j, temp;
	for (i=0; i < n; i++) {
		printf(" phan tu %d: ", i + 1); 
		scanf("%d", &arr[i]);
	}

	for (i = 0; i < n - 1; ++i) {
		for ( j=0; j < n - i -1; ++j) {
			if ( arr[j] > arr [j + 1]) {
				int temp = arr[j];
				    arr[j] = arr[j+1];
				    arr [j+1] = temp;
			}
		}
	}
	printf("Thu tu phan tu:\n");
	for (i=0; i< n; i++) {
		printf("%d\t", arr[i]);
	}
	getch();
}

