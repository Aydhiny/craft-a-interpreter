#include <iostream>

using namespace std;

const char* linija = "-------------------------------------\n";

class Automobil 
{
private:
	string _naziv;
	int _brzina;
	float _ubrzanje;
public:
	Automobil() 
	{
		_naziv = "default";
		_brzina = 20;
		_ubrzanje = 50.5f;
	}

	Automobil(string naziv, int brzina, float ubrzanje) 
	{
		_naziv = naziv;
		_brzina = brzina;
		_ubrzanje = ubrzanje;
	}

	string GetNaziv() { return _naziv; }
	int GetBrzina() { return _brzina; }
	float GetUbrzanje() { return _ubrzanje; }

	~Automobil()
	{
		cout << "Dealokacija...";
	}
};

int main() 
{
	float broj = 2.3;
	float* copy = &broj;

	cout << "Vrijednost broja je: " << broj << " // 2.3" << endl;
	cout << "Adresa broja je: " << &broj << endl;

	cout << linija;

	cout << "Vrijednost copy: " << *copy << "// 2.3 \n";
	cout << "Memorija na koju COPY pokazuje je: " << copy << "// ISTO KAO I MEMORIJA BROJA \n ";
	cout << "Adresa kopije je: " << &copy << endl;

	cout << linija;

	cout << "KLASE" << endl;

	Automobil Gklasa;
	Automobil* kopija = &Gklasa;

	cout << Gklasa.GetBrzina() << " " << Gklasa.GetNaziv() << " " << Gklasa.GetUbrzanje() << endl;
	cout << linija;
	cout << "kopija: " << kopija << " // " << &Gklasa << endl;

	return 0;
}