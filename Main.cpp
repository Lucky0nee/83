#include <iostream>
#include <queue>

int main() {
	std::queue<char> qe;
	std::vector<char> vec;
	char ch = 'A';

	std::cout << "queue: ";
	for (int i = 0; i < 25; i++) {
		qe.push(ch); ch++;
		std::cout << qe.back() << " ";
	}

	if (qe.size() >= 25) {
		std::cout << "\nsize == 25 ->: \n";

		for (int i = 0; i < 25; i++) {
			std::cout << "Deleted: " << qe.front() << "\n";
			qe.pop();
		}
	}

	return 0;
}

/*
Створити адаптер черга. Додати в неї 25 символьних елементів. Після того,
як розмір сягне 25, опрацювати всі елементи черги, вивівши їх послідовно на
екран і вилучивши з місця зберігання.
*/
