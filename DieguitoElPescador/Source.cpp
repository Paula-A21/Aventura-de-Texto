#include <iostream>

using namespace std;

int main()
{
	int optionJuego = 0;

	do
	{
		cout << "Bienvenido!, que desea hacer?" << endl;
		cout << "1_ Jugar" << endl;
		cout << "2_ Salir" << endl;
		cin >> optionJuego;

		if (optionJuego == 1)
		{
			int optionObj = 0;
			
			cout << "------------------------------------------------------------------" << endl;
			cout << "*El personaje de Dieguito se encuentra pescando en un bosque.* \n";
			cout << "*A Dieguito se le aparece un pescado magico que le dice que puede \nregalarle uno de los objetos que estan perdidos en su lago.*" << endl;
			cout << "------------------------------------------------------------------" << endl;
			

			do
			{
				cout << "Cual de estas opciones prefieres? " << endl;
				cout << "1_ El sombrero de Smitty Werben Man Jensen." << endl;
				cout << "2_ El anillo mi precioso." << endl;
				cout << "3_ La brujula que no apunta al norte." << endl;
				cout << "------------------------------------------------------------------" << endl;
				cin >> optionObj;

				switch (optionObj)
				{
				case 1: cout << "Buena eleccion, yo lo conoci, el era el #1." << endl;
					break;

				case 2: cout << "No entiendo porque los humanos les llama la atencion \nbrilla mucho, pero me parece aburrido. Una vez lo \nuse y mi familia me ignoro por una semana hasta que me lo saque." << endl;
					break;

				case 3: cout << "Era de un tipo que la gente siempre estaba por atraparlo. \nUna vez la segui y me llevo a un lugar con mucha comida" << endl;
					break;
				default:
					cout << "No intentes enganiarme, solo te di tres opciones." << endl;
					break;
				}
				
				

			} while (optionObj < 1 || optionObj > 3);
			
			cout << "------------------------------------------------------------------" << endl;
			
		}

		else if (optionJuego < 2 || optionJuego > 1)
		{
			cout << "-----------------------------------------------------------------" << endl;
			cout << "Error, esa opcion no se encuntra. Por favor intentelo de nuevo."<< endl;
			cout << "-----------------------------------------------------------------" << endl;

		}

	} while (optionJuego != 2); 

	return 0;
}