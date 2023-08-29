#include <iostream>
#include <Windows.h>
using namespace std;
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

class Dice
{
	//* modificadores de acceso
private:
	int target;
public:
	int value;
	//declarion de atributos

	//declar constructores
	//El constructor siempre lleva el mismo nombre de la clase
	//comunmente sirve para inicializar los atributos
	Dice()
	{
		target = 5;
		value = 0;
	}
	Dice(int tar)
	{
		target = tar;
	}
	Dice(int val, int tar)
	{
		target = tar;
		value = val;
	}
	//declara metodos

	//declaracion de setters y getters
	//declaracion de funciones de cambio y lectura
	//lectura getter
	/*tipo_dato getNombreAtributo()
	{
		return NombreAtributo;
	}

	// cambio setter
	void setNombreAtributo(tipo_dato valor)
	{
		NombreAtributo = valor;
	}*/

	int getTarget()
	{
		return target;
	}

	// cambio setter
	void setTarget(int x)
	{
		target = x;
	}

	//comportamiento
	void throwDice()//arrojar Dado
	{
		//asignar un valor al azar a Value

		value = (rand() % 6) + 1;
		cout << value;

		
		
	}
	bool isMatch() // hayEmparejamiento
	{
		bool resp;
		// pregunta de comparacion entre value y target
		
		resp=(value == target);

		return resp;
	}
	void print()
	{
		//modulo que muestra el value obtenido y el target
		//para representar graficamente, imprime asteriscos de tal manera
		//que asemejemos un dado. por ejemplo
		//Si value = 2, se deberia imprimir
		//  -------
		//  |  *  |
		//  |     |
		//  |  *  |
		//  -------
		


		/*if (value==1) {
			cout << "---------"<<endl;
			cout << "|       |" << endl;
			cout << "|   *   |" << endl;
			cout << "|       |" << endl;
			cout << "---------" << endl;

		}
		else if (value == 2) {
			cout << "---------" << endl;
			cout << "|   *   |" << endl;
			cout << "|       |" << endl;
			cout << "|   *   |" << endl;
			cout << "---------" << endl;

		}
		else if (value==3) {
			cout << "---------" << endl;
			cout << "|   *   |" << endl;
			cout << "|   *   |" << endl;
			cout << "|   *   |" << endl;
			cout << "---------" << endl;

		}
		else if (value==4) {
			cout << "---------" << endl;
			cout << "| *   * |" << endl;
			cout << "|       |" << endl;
			cout << "| *   * |" << endl;
			cout << "---------" << endl;
		}
		else if (value==5) {
			cout << "---------" << endl;
			cout << "| *   * |" << endl;
			cout << "|   *   |" << endl;
			cout << "| *   * |" << endl;
			cout << "---------" << endl;
		}
		else if (value==6) {
			cout << "---------" << endl;
			cout << "| *   * |" << endl;
			cout << "| *   * |" << endl;
			cout << "| *   * |" << endl;
			cout << "---------" << endl;
		}*/



		switch (value)
		{
		case 1:
			cout << "\n---------" << endl;
			cout << "|       |" << endl;
			cout << "|   *   |" << endl;
			cout << "|       |" << endl;
			cout << "---------" << endl;
			break;
		case 2:

			cout << "---------" << endl;
			cout << "|   *   |" << endl;
			cout << "|       |" << endl;
			cout << "|   *   |" << endl;
			cout << "---------" << endl;

			break;
		case 3:
			cout << "---------" << endl;
			cout << "|   *   |" << endl;
			cout << "|   *   |" << endl;
			cout << "|   *   |" << endl;
			cout << "---------" << endl;

			break;


		case 4:

			cout << "---------" << endl;
			cout << "| *   * |" << endl;
			cout << "|       |" << endl;
			cout << "| *   * |" << endl;
			cout << "---------" << endl;

			break;
		case 5:

			cout << "---------" << endl;
			cout << "| *   * |" << endl;
			cout << "|   *   |" << endl;
			cout << "| *   * |" << endl;
			cout << "---------" << endl;

			break;

		case 6:
			cout << "---------" << endl;
			cout << "| *   * |" << endl;
			cout << "| *   * |" << endl;
			cout << "| *   * |" << endl;
			cout << "---------" << endl;

			break;
		default:

			break;
		}
	}
};


int main(int argc, char* argv[]) {
	int opcion = 1;
	Dice d1(5);
	do
	{
		cout << "1.- Arrojar Dado" << endl;
		cout << "2.- Cambiar Target" << endl;
		cout << "0.- Salir" << endl;
		cin >> opcion;
		if (opcion == 1)
		{
			//arrojamos el dado
			d1.throwDice();
			cout << endl;
			//* preguntas si hay match
			// 
			if (d1.isMatch()) {
				SetConsoleTextAttribute(hConsole, 2);
				cout << "ganaste" << endl;
				
			}
			else {
				SetConsoleTextAttribute(hConsole, 4);
				cout << "perdiste perra vuelve a intentar" << endl;
			}
			// 
			//imprime si acerto de acuerdo a la pregunta
			//* imprime el valor representado con el dado
			d1.print();
			
			
			SetConsoleTextAttribute(hConsole, 7);
		}
		if (opcion == 2)
		{
			int nuevoTar;
			cout << "ingrese el nuevo valor del target" << endl;
			cin >> nuevoTar;
			d1.setTarget(nuevoTar);
			//*cambia el target de d1
			//pide datos de la consola para cambiarlo

		}

	} while (true);
	
	return 0;
}