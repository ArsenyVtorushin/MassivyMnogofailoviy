#include "Start.hpp"

void Start()
{
	int chooseTask;

	while (true)
	{
		do
		{
			std::cout << "\n\n- �������� ����� ������� -\n\n";
			std::cout << "1\t2\t3\n    0 - �����\n";
			std::cin >> chooseTask;
		} while (chooseTask < 0 || chooseTask > 3);

		if (chooseTask == 1)
		{
			First();
		}
		else if (chooseTask == 2)
		{
			Second();
		}
		else if (chooseTask == 3)
		{
			Third();
		}
		else if (chooseTask == 0)
		{
			break;
		}
	}
}
