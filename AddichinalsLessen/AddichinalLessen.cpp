#include<iostream>
#include<cstdlib>
#include<ctime>

int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;


	//������� �������������� � �������, ������ �� �����.
	//������ ����������������� �������.

	int arr[100];
	std::cout << "������� ���������� ��������� �� 1 �� 100 -> ";
	std::cin >> n;

	while (n < 1 || n > 100)//���� �� ���� ������� ������ ������� ������� = 100.
	{
		std::cout << "������! ������� ����� �� 1 �� 100 -> ";
		std::cin >> n;
	}

	std::cout << "������� ��������:\n";

	for (int i = 0; i < n; i++) {
		std::cout << "������� �" << i << " -> ";
		std::cin >> arr[i];
	}
	std::cout << "�������� ������:\n{ ";
	for (int i = 0; i < n; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b }" << std::endl;


	//�� � 14. ������ 2.
	std::cout << "������ 2.\n������:\n";
	const int size2 = 10;
	int arr2[size2];
	srand(time(NULL));

	
	for (int i = 0; i < size2; i++) {
		arr2[i] = rand() % (70 + 1 - 50) + 50;//[50...70]
		std::cout << arr2[i] << " ";
	}
	std::cout << std::endl;
	std::cout << "������� ����� -> ";
	std::cin >> n;
	std::cout << "��������, �������� � �������� �� " << n - 3 << " �� " << n + 3 << ":\n";
	for (int i = 0; i < size2; i++)
		if (arr2[i] >= n - 3 && arr2[i] <= n + 3)
			std::cout << arr2[i] << ' ';
	std::cout << std::endl;

	return 0;
}