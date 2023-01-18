#pragma once
#include <iostream>
#include <ostream>
using namespace std;
class Note
{
	int valeur;
	int coefficient;
public:
	Note();
	Note(int, int);
	Note(Note&);
	friend ostream& operator<<(ostream&, Note&);
	friend istream& operator>>(istream&, Note&);
	int get_val() {
		return valeur;
	}
	void set_val(int v) {
		valeur = v;
	}
	int get_coef() {
		return coefficient;
	}
	void set_coef(int c) {
		coefficient = c;

	}
	bool operator== (Note);
	~Note();

};

