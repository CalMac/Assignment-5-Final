#pragma once


#include <iostream>
#include <fstream>
#include <vector>
#include "allele.h"

using namespace std;

//Gene
class Gene{
	private:
		string name;
		string traitType;
		Allele a;
		Allele b;
	
	public:
	//Getting Variables
	string GetGene();
	string SetGene();
	string GetTrait();
	Allele GetAlleleA();
	Allele GetAlleleB();
	void SetAlleleA(Allele b);
	void SetAlleleB(Allele a);
	void SetGene(string name);
	void SetTrait(string type);
	void SetName(string gene);	
	//Output to File
	void GeneOutput();
	//Copy From File
	void GeneInput(string);
	void WriteToFile(ofstream&);
	Allele GetExpressedTrait();
	//Internal Gene Constructor	
	Gene();
	Gene(Allele& a, Allele& b){
	}
};

