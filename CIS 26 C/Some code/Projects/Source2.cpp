#include <iostream>
using namespace std;

void common(int, int);

int main() {

	int x;
	int y;

	cin >> x;
	cin >> y;

	common(x,y);

	return 0;
}

void common(int arg, int arg2) {
	int* ptr;
	int size = 0;
	int temp = arg;
	int i;

	while(temp != 0) {
		temp /= 10;
		size++;
	}

	ptr = new int[size];

	for(i = 0; i < size; i++) {
	
		ptr[i] = arg % 10;
		arg /= 10;
	}

	for( i = 0; i < size; i++) {
		cout << ptr[i] << endl;
	}

	return;
}