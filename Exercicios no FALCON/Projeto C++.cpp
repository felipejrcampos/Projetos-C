#include <iostream>

using namespace std;

int main()
{
	float LITROS,KM,MEDIA;
	cout << "Informe o número de litros:\n";
	cin >> LITROS;
	cout << "Informe a quantodade de Km:\n";
	cin >> KM;
	MEDIA = KM/LITROS;
	cout << "O seu carro percorreu " << KM << " Km e usou " << LITROS << " litros de combustivel. A media foi de " << MEDIA << ".";
}