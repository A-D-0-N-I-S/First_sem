#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int number;

	cout << "Эта программа выбора switch\n\n";

	cout << "Здраствуйте, не желаете ли проибрести новый автомобиль Mitsubishi? (1 - да, 2 - нет, 3 - незнаю)\n";
	cin >> number;


	switch (number)
	{
	case 1: 
		cout << "Вы заинтересованы в модели Lancer? (1 - да, 2 - нет)\n";

		cin >> number;
		switch (number)
		{
		case 1: 
			cout << "Вы точно уверены?(1 - да, 2 - сомневаться)\n";

			cin >> number;
			switch (number)
			{
				case 1: 
					cout << "Ура!!!!!! Наконец-то продали эту машину!!! (Вы ощущаете себя обманутым. Нажмите Enter, чтобы принять)\n"; 
					break;
				case 2: 
					cout << "Вы проснулись (Успех!)\n"; 
					break;
			}
			break;

		case 2: 
			cout << "Неверный ответ (Это точно)\n"; 
			break;
		}
		break;
			

	case 2: 
		cout << "Вы уверены?(1 - да, 2 - нет)\n";
			cin >> number;
			switch (number)
				{
				case 1: 
					cout << "Вы точно уверены?(1 - да, 2 - нет)\n";
				cin >> number;
				switch (number)
				{
					case 1: 
						cout << "Вы проснулись (Успех!)\n";
						break;
					case 2: 
						cout << "Советуем Вам как можно скорее определиться\n"; 
						break;
				}
				break;

					case 2: cout << "Тогда мы оформим на Вас Lancer Evolution X (1 - противиться, 2 - молчать)\n";
						cin >> number;
						switch (number)
						{
							case 1: 
								cout << "Уже поздно, пока мы базарили, я успел оформить договор на покупку! Приятного пользования! (Вы ощущаете себя обманутым. Нажмите Enter, чтобы принять)\n"; 
								break;
							case 2: 
								cout << "Вы проснулись (Успех!)\n"; 
								break;
					 
						}
						break;
			}
			break;

	case 3: 
		cout << "Советуем Вам как можно скорее определиться (1 - бежать, 2 - молча уйти, 3 - показать на улице свой Porshe)\n";
			cin >> number;
			switch (number)
			{
				case 1: 
					cout << "Бежать уже некуда! (Вы ощущаете, что не сможете выбраться...)\n"; 
					break;
				case 2: 
					cout << "Схватить его! (Вы пытаетесь спастись... и Вам это не удалось)\n"; 
					break;
				case 3: 
					cout << "Ну и что? (Ваш Porshe таинственным образом пропадает на ваших же глазах... Здесь что-то не так... )\n"; 
					break;

				default: cout << "Это всё странно (Вы в недоумении)\n"; 
					break;
			}
			break;

	default:
		cout << "Это всё странно\n";
	}

	return 0;
}
