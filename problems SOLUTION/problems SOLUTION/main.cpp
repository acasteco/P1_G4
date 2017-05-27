#include <iostream>

void Swap(int *a, int *b) {
	int tmp = *a;
	a = b;
	*b = tmp;
}

int main() {
	int a[]{ 3,4, 9, 8, 2 };

	int *b = new int(5);
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	Swap(a, b);
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	int &d{ *b };
	std::cout << d << std::endl;
	for (int &it : a) it = d;
	std::cout << a[3] << std::endl;

	delete b;
	return 0;
}