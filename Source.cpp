#include <iostream>

class ClasaDeBaza
{
public:
	virtual void Mesaj();
};
class ClasaDerivata : public ClasaDeBaza
{
public:
	virtual void Mesaj() override;
};

int main()
{
	ClasaDerivata cd;
	cd.Mesaj();

	system("pause");
}

void ClasaDeBaza::Mesaj()
{
	std::cout << "Aceasta este functia din cadrul clasei de baza." << std::endl;
}
void ClasaDerivata::Mesaj()
{
	std::cout << "Aceasta este functia din cadrul clasei derivate." << std::endl;
}