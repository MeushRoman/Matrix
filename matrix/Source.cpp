#include "Matrix.h"

using namespace std;

void main() {
	Matrix m(1, 15, 5);
	
	cout << m;
	m[0][0] = 6;
	cout << m;


	system("pause");
}