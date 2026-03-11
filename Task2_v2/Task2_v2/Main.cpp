#include <iostream>
#include "Player.h"
#include "Warrior.h"
#include "Magician.h"
#include "Thief.h"
#include "Archer.h"

int main(void)
{
	Player* player = nullptr;
	int choice = 0;

	/*std::cout << "                 < 직업 선택 > " << std::endl;
	std::cout << "[1.Warrior] [2.Magician] [3.Thief] [4.Archer]" << std::endl;
	std::cin >> choice;*/
	std::cout << "=====================================================" << std::endl;
	std::cout << "           [ R P G  A D V E N T U R E ]" << std::endl;
	std::cout << "=====================================================" << std::endl;
	std::cout << "              ▶ 클래스를 선택하세요 ◀" << std::endl;
	std::cout << "-----------------------------------------------------" << std::endl;
	std::cout << " (1) Warrior   (2) Magician   (3) Thief   (4) Archer" << std::endl;
	std::cout << "-----------------------------------------------------" << std::endl;
	std::cout << " >> ";

	while (true)
	{
		std::cin >> choice;

		switch (choice)
		{
		case 1:
			player = new Warrior();
			break;
		case 2:
			player = new Magician();
			break;
		case 3:
			player = new Thief();
			break;
		case 4:
			player = new Archer();
			break;
		default:
			std::cout << "잘못 입력했습니다. 다시 입력하세요." << std::endl;
			continue;
		}
		break;
	}

	player->attack();

	if (player != nullptr)
	{
		delete player;
		player = nullptr;
	}

	return 0;
}