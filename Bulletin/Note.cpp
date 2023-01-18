#include "Note.h"


//	int valeur;
//	int coefficient;
//public:
//	Note(int, int);
//	Note(Note&);
//	friend ostream& operator<<(ostream&, const Note&);
//	friend istream& operator>>(istream&, const Note&);
//	bool operator== (Note);
//	~Note();
using namespace std;
Note::Note() {
	valeur = 0;
	coefficient = 0;
}
Note::Note(int valeur, int coefficient){
	this->valeur = valeur;
	this->coefficient = coefficient;
}


Note::Note(Note& N) {
	N.valeur = valeur;
	N.coefficient = coefficient;

}

ostream& operator<<(ostream& s, Note& N) {
	s << "La valeur est :" << N.get_val() << " Le coefficient est : " << N.get_coef();
	return s;
}

istream& operator>>(istream& s, Note& N) {
	s >> N.valeur >> N.coefficient;
	return s;
}

bool Note::operator==(Note N) {
	return valeur == N.valeur && coefficient == N.coefficient;
}



