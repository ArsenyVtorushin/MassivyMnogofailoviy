#include "First.hpp"

void First()
{
	const int size1 = 10;
	int arr1[size1]{};

	for (int i = 0; i < size1; i++)
	{
		arr1[i] = rand() % 100;
	}

	std::cout << "\nArray:\n";

	int max = arr1[0], min = arr1[0];

	for (int i = 0; i < size1; i++)
	{
		std::cout << std::right << std::setw(3) << arr1[i];
		if (arr1[i] > max)
		{
			max = arr1[i];
		}
		else if (arr1[i] < min)
		{
			min = arr1[i];
		}
	}
	std::cout << "\n\nMax: " << max << "\nMin: " << min;
}
