//#include <iostream>
//using namespace std;
//int main() {
//	int rowNum, colNum;
//	int **arr1, **arr2;
//	int i, j;
//	cout << "���� ������ �Է��ϼ��� :";
//	cin >> rowNum;
//	cout << "\n";
//	cout << "���� ������ �Է��ϼ��� :";
//	cin >> colNum;
//	cout << "\n";
//	arr1 = (int **)malloc(sizeof(int*)*rowNum);
//	arr2 = (int **)malloc(sizeof(int*)*rowNum);
//	for (i = 0; i < rowNum; i++) {
//		arr1[i] = (int*)malloc(sizeof(int) * colNum);
//		arr2[i] = (int*)malloc(sizeof(int) * colNum);
//	}
//	cout << "���1�� �Է��ϼ���:";
//	for (i = 0; i < rowNum; i++) {
//		for (j = 0; j < colNum; j++) {
//			cin >> arr1[i][j];
//		}
//	}
//	cout << "���2�� �Է��ϼ���:";
//	for (i = 0; i < rowNum; i++) {
//		for (j = 0; j < colNum; j++) {
//			cin >> arr2[i][j];
//			cout << arr1[i][j] + arr2[i][j];
//		}
//		cout << "\n";
//	}
//
//}