#include "7.h"

int main() {
	MyIntStack a;
	for (int i = 0; i<11; i++) { // 11°³¸¦ Çª½Ã
		if (a.push(i)) cout << i << ' '; // Çª½ÃµÈ °ª ¿¡ÄÚ
		else cout << endl << i + 1 << " ¹øÂ° stack full" << endl;
	}
	int n;
	for (int i = 0; i<11; i++) { // 11°³ ÆË
		if (a.pop(n)) cout << n << ' '; // ÆË ÇÑ °ª Ãâ·Â
		else cout << endl << i + 1 << " ¹øÂ° stack empty";
	}
	cout << endl;
}