#include<iostream>
#include<cstdlib>
#include<ctime>

int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;


	//Среднее арифметическое в массиве, пример из книги.
	//Массив пользовательского размера.

	int arr[100];
	std::cout << "Введите количество элементов от 1 до 100 -> ";
	std::cin >> n;

	while (n < 1 || n > 100)//блок не дает вывести больше размера массива = 100.
	{
		std::cout << "Ошибка! Введите число от 1 до 100 -> ";
		std::cin >> n;
	}

	std::cout << "Введите элементы:\n";

	for (int i = 0; i < n; i++) {
		std::cout << "Элемент №" << i << " -> ";
		std::cin >> arr[i];
	}
	std::cout << "Итоговый массив:\n{ ";
	for (int i = 0; i < n; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b }" << std::endl;


	//ДЗ № 14. Задача 2.
	std::cout << "Задача 2.\nМассив:\n";
	const int size2 = 10;
	int arr2[size2];
	srand(time(NULL));

	
	for (int i = 0; i < size2; i++) {
		arr2[i] = rand() % (70 + 1 - 50) + 50;//[50...70]
		std::cout << arr2[i] << " ";
	}
	std::cout << std::endl;
	std::cout << "Введите число -> ";
	std::cin >> n;
	std::cout << "Элементы, входящие в диапазон от " << n - 3 << " до " << n + 3 << ":\n";
	for (int i = 0; i < size2; i++)
		if (arr2[i] >= n - 3 && arr2[i] <= n + 3)
			std::cout << arr2[i] << ' ';
	std::cout << std::endl;

	return 0;
}