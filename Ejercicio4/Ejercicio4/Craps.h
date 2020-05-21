#pragma once
#include <cstdlib>
#include <iostream>

using namespace std;
using std::rand;
using std::srand;

class Craps {
public:
	Craps();
	int tirarDados();
	~Craps();
};