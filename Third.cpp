#include "Third.hpp"

void Third()
{
	int profit[12]{};

	std::cout << "������� ������� ����� �� ���:\n\n";

	int month = 1;
	for (int i = 0; i < 12; i++)
	{
		std::cout << "  �� " << month << "-�� �����: ";
		std::cin >> profit[i];
		month++;
	}

	int monthStart, monthEnd;
	std::cout << "\n����� ������ �������� �������� �������?\n����� (�����):";
	std::cin >> monthStart;
	std::cout << "� ";
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

	std::cout << "\n���������� ������� �� ���� ������: " << maxProf
		<< "\n���������� ������� �� ���� ������: " << minProf << "\n\n";
}