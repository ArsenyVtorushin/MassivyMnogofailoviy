#include "Third.hpp"

void Third()
{
	int profit[12]{};

	std::cout << "Введите прибыль фирмы за год:\n\n";

	int month = 1;
	for (int i = 0; i < 12; i++)
	{
		std::cout << "  За " << month << "-ый месяц: ";
		std::cin >> profit[i];
		month++;
	}

	int monthStart, monthEnd;
	std::cout << "\nМежду какими месяцами смотреть прибыль?\nМежду (номер):";
	std::cin >> monthStart;
	std::cout << "и ";
	std::cin >> monthEnd;

	int maxProf = profit[0], minProf = profit[0];
	for (int i = monthStart; i < monthEnd; i++)
	{
		if (profit[i] > maxProf)
		{
			maxProf = profit[i];
		}
		if (profit[i] < minProf)
		{
			minProf = profit[i];
		}
	}

	std::cout << "\nНаибольшая прибыль за этот период: " << maxProf
		<< "\nНаименьшая прибыль за этот период: " << minProf << "\n\n";
}