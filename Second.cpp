#include "Second.hpp"

void Second()
{
	int start, end;

	std::cout << "������� �������� �������:\n   ��������� �����: ";
	std::cin >> start;
	std::cout << "   �������� �����: ";
	std::cin >> end;

	int range = abs(end - start);

	int* arr_2 = new int[range];

	std::cout << "Array: \n";
	for (int i = 0; i < range; i++)
	{
		arr_2[i] = rand() % range + start;
		std::cout << arr_2[i] << " ";
	}

	int maximum;
	std::cout << "\n\n������� �����, ������ �������� ������ ��������: ";
	std::cin >> maximum;

	int sum = 0;

	for (int i = 0; i < range; i++)
	{
		if (arr_2[i] < maximum)
		{
			sum += arr_2[i];
		}
	}
	std::cout << "\nC���� ��������, ������� " << maximum << ": " << sum << "\n";

	delete[]arr_2;
}