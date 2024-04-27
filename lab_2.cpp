// lab_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

bool static stream_with_error(std::istream* input) {
	if (input->fail()) {
		input->clear();
		input->ignore(INT_MAX, '\n');
		return true;
	}

	return false;
}

void static task_1() {
	float x, y;

	do {
		std::cout << "Введите x:" << std::endl;
		std::cin >> x;
	} while (stream_with_error(&std::cin));

	if (x < -3) {
		y = 3;
	}
	else if (x >= -3 && x < 2) {
		y = 4;
	}
	else {
		y = 1;
	}

	std::cout << "Значение y: " << y << std::endl;

	system("pause");
}

bool static dot_in_circle(float x, float y, float r_squared) {
	return ((x * x) + (y * y)) <= r_squared;
}

void static task_2() {
	float x, y;

	std::cout << "x=";
	std::cin >> x;
	std::cout << "y=";
	std::cin >> y;

	bool dot_in_area = y < 0 ? false : !dot_in_circle(x, y, 1) && dot_in_circle(x, y, 4);

	std::cout << "Точка принадлежит фигуре: " << (dot_in_area ? "Да" : "Нет") << std::endl;
}

void static task_3() {
	float O_x, O_y, O_r;
	float A_x, A_y;

	std::cout << "Введите координаты точки O через пробел: ";
	std::cin >> O_x >> O_y;

	std::cout << "Введите радиус окружности: ";
	std::cin >> O_r;

	std::cout << "Введите координаты точки A через пробел: ";
	std::cin >> A_x >> A_y;

	bool dot_in_area = ((O_x - A_x) * (O_x - A_x) + (O_y - A_y) * (O_y - A_y)) <= O_r * O_r;
	std::cout << "Точка A принадлежит окружности с центром в точке O: " << (dot_in_area ? "Да" : "Нет") << std::endl;

	system("pause");
}


int main()
{
	setlocale(LC_ALL, "");

	task_1();
	//task_2();
	//task_3();
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
