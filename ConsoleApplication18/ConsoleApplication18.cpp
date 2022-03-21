#include <iostream>
#include<ctime>
using namespace std;

void Game(string* a);
void Palochki(int Dl);
void Strashilka(int GlobalError);
void PalAndB(char Fix[], int Dl);


int main() 
{
	setlocale(00, "");
	srand(time(NULL));

	int Random = rand() % 23;

	string s0 = "pivo";
	string s1 = "lampa";
	string s2 = "zal";
	string s3 = "podlokotnik";
	string s4 = "bymajnik";
	string s5 = "processor";
	string s6 = "zavaryshka";
	string s7 = "kombinaciya";
	string s8 = "klaviatyra";
	string s9 = "bashnya";
	string s10 = "geolog";
	string s11 = "samovar";
	string s12 = "perpendikylyar";
	string s13 = "dlinnosheee";
	string s14 = "nepriyatnost";
	string s15 = "temperatyra";
	string s16 = "razdrajenie";
	string s17 = "jeleznodorojniy";
	string s18 = "tolerantnost";
	string s19 = "refleks";
	string s20 = "myata";
	string s21 = "limon";
	string s22 = "kosmos";


	string* uk[23]; /*массив указателей на слова*/

	uk[0] = &s0; /*берем адрес стринга и присваеваем указатель в массиве*/
	uk[1] = &s1;
	uk[2] = &s2;
	uk[3] = &s3;
	uk[4] = &s4;
	uk[5] = &s5;
	uk[6] = &s6;
	uk[7] = &s7;
	uk[8] = &s8;
	uk[9] = &s9;
	uk[10] = &s10;
	uk[11] = &s11;
	uk[12] = &s12;
	uk[13] = &s13;
	uk[14] = &s14;
	uk[15] = &s15;
	uk[16] = &s16;
	uk[17] = &s17;
	uk[18] = &s18;
	uk[19] = &s19;
	uk[20] = &s20;
	uk[21] = &s21;
	uk[22] = &s22;

	cout << "Привет!!!" << endl<<"Это виселица" <<endl<< "Надеюсь ты тут сдохнешь" << "(^_^)" << endl;
	Game(uk[Random]); /*берем рандомное слово и передаем его в функцию где будет всякая грязь*/
	
}

void Game(string* a)
{
	

	int Dl = a->size(); /*узнаем количество букв в нашем слове*/
	int GlobalError = 0;
	int GlobalCorrect = 0;
	char Bykva; /*буква пользователя*/
	char Slovo[20]; /*из нового стринга мы копируем наше слово в чар*/
	char Fix[20] = { '_','_', '_', '_', '_', '_', '_', '_', '_', '_', '_', '_', '_', '_', '_', '_', '_', '_', '_', '_' };

	string Slovo0 = *a; /*присваеваем наше слово к новому стригу потому что две страшные хуйни снизу не хотят работать с указателем на слово*/

	strcpy_s(Slovo, Slovo0.c_str()); /*strcpy - копирует из первого чара во второй, .c_str() - преобразует стринг для всяких взаимодействий с ним*/


	int Error = 0;
	
	
	Palochki(Dl);
	
	while (GlobalError<7)
	{
		cout << "Введи буковку :)" << endl;
		cin >> Bykva;
		for (int i = 0; i < Dl; i++) /*проверка слова*/
		{
			if (Bykva == Slovo[i])
			{
				Fix[i] = Slovo[i];
				GlobalCorrect += 1;
				cout << "ТЫ УГАДАЛ(>_<)" << endl<<endl;
			}
			else
			{
				Error += 1;

				if (Dl == Error)
				{
					GlobalError += 1;
					cout << endl;
					cout << "Ты на шаг ближе к цели" << endl << "Так держать!;-)" << endl;
					Strashilka(GlobalError);
					
				}
			}

		}
		Error = 0;
		
		if (GlobalCorrect == Dl)
		{
			cout << endl;
			PalAndB(Fix, Dl);
			cout << "Ты выиграл(О_О)"<<endl;
			cout << "Ну и ладно "<<endl;
			cout << "Во всяком случае ты когда-нибудь умрешь(^_^)"<<endl;
			return;
		}
		PalAndB(Fix, Dl);
	}
	
	cout << "Ты умер(X_X)" << endl << "Я С САМОГО НАЧАЛА ЗНАЛ ЭТО :-D"<<endl;
	   
		
	
}
void Palochki(int Dl)
{
	for (int i = 0; i < Dl; i++) /*рисуем палочки*/
	{
		
			cout << "_";
		
	}
	cout << endl;
}
void Strashilka(int GlobalError)
{
	switch (GlobalError)
	{
	case 1:
		cout << endl<<"  ____ |\n |     |\n |     |\n |     |\n_|_    |  "<<endl<<endl << endl << endl;
		break;
	case 2:
		cout<<endl << "  ____ |\n |   | |\n |   O |\n |     |\n_|_    |  "  << endl << endl << endl << endl;
		break;
	case 3:
		cout << endl <<"  ____ |\n |   | |\n |   O |\n |   | |\n_|_    |  " << endl << endl << endl << endl;
		break;
	case 4:
		cout << "  ____ |\n |   | |\n |   O |\n |  /| |\n_|_    |  " << endl << endl << endl << endl;
		break;
	case 5:
		cout << "  ____ |\n |   | |\n |   O |\n |  /|\\|\n_|_    |  " << endl << endl << endl << endl;
		break;
	case 6:
		cout<<"  ____ |\n |   | |\n |   O |\n |  /|\\|\n_|_ /  |  " << endl << endl << endl << endl;
		break;
	case 7:
		cout<<"  ____ |\n |   | |\n |   O |\n |  /|\\|\n_|_ / \\|  " << endl << endl << endl << endl;
		break;
		
	}
}
void PalAndB(char Fix[],int Dl)
{
	for (int i = 0; i < Dl; i++)
	{
		cout << Fix[i];
	}
	cout << endl<<endl;
}


