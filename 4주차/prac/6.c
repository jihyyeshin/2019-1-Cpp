#include <stdio.h>

int main() {
	int rowNum, colNum;
	int **arr1, **arr2;
	int i, j;
	printf("���� ������ �Է��ϼ��� :");
	scanf_s("%d", &rowNum);
	printf("\n");
	printf("���� ������ �Է��ϼ��� :");
	scanf_s("%d", &colNum);
	printf("\n");
	arr1 = (int **)malloc(sizeof(int*)*rowNum);
	arr2 = (int **)malloc(sizeof(int*)*rowNum);
	for (i = 0; i < rowNum; i++) {
		arr1[i] = (int*)malloc(sizeof(int) * colNum);
		arr2[i] = (int*)malloc(sizeof(int) * colNum);
	}
	printf("���1�� �Է��ϼ���:");
	for (i = 0; i < rowNum; i++) {
		for (j = 0; j < colNum; j++) {
			scanf_s("%d", &arr1[i][j]);
		}
	}
	printf("���2�� �Է��ϼ���:");
	for (i = 0; i < rowNum; i++) {
		for (j = 0; j < colNum; j++) {
			scanf_s("%d", &arr2[i][j]);
			printf("%d ", arr1[i][j] + arr2[i][j]);
		}
		printf("\n");
	}

}