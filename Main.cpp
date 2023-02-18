#include <iostream>
#include <string>

//std::string hash_converter(long long sums) {
//}

long long Random(long base_num = 0, long max_num = 10000) {
	long long return_value = 0;

	int size = 1;
	unsigned long long sums = 0;
	unsigned long long* arr = new unsigned long long[size];

	for (int i = 0; i < 100; i++) {
		//std::cout << arr[i] << std::endl;
		sums += arr[i];
		size++;
	}

	//std::cout << "\n\n" << sums << "\n";

	//if (sums > max_num) {
	//	int devident = 10;

	//	while ((sums / devident) > max_num) {
	//		devident *= 10;
	//		std::cout << "\n" << sums << "\n";
	//	}

	//	sums -= devident;
	//	std::cout << "\n" << sums << "\n";
	//}

	//if (sums > max_num) sums = sums - (max_num - sums);
	//std::cout << "\n" << sums << "\n";

	return sums;
}

int main() {

	std::cout << Random(1, 10);

	return 0;
}
