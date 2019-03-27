//#include <iostream>
//using namespace std;
//int main() {
//	int rowNum, colNum;
//	int **arr1, **arr2;
//	int i, j;
//	cout << "행의 개수를 입력하세요 :";
//	cin >> rowNum;
//	cout << "\n";
//	cout << "열의 개수를 입력하세요 :";
//	cin >> colNum;
//	cout << "\n";
//	arr1 = (int **)malloc(sizeof(int*)*rowNum);
//	arr2 = (int **)malloc(sizeof(int*)*rowNum);
//	for (i = 0; i < rowNum; i++) {
//		arr1[i] = (int*)malloc(sizeof(int) * colNum);
//		arr2[i] = (int*)malloc(sizeof(int) * colNum);
//	}
//	cout << "행렬1을 입력하세요:";
//	for (i = 0; i < rowNum; i++) {
//		for (j = 0; j < colNum; j++) {
//			cin >> arr1[i][j];
//		}
//	}
//	cout << "행렬2을 입력하세요:";
//	for (i = 0; i < rowNum; i++) {
//		for (j = 0; j < colNum; j++) {
//			cin >> arr2[i][j];
//			cout << arr1[i][j] + arr2[i][j];
//		}
//		cout << "\n";
//	}
//
//}