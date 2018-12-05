#pragma once


#include <iostream>
#include <fstream>
#include <vector>
#include "gene.h"

//Chromosome
class Chromosome{
	private:
		vector<Gene> Genes;
	public:
		void AddGene(Gene newGene);
		void AnalyzeGenotype();
		void InputFromFile(ifstream&);
		void OutputToFile(ofstream&);
		Gene FindGene(string);
		Chromosome operator+(Chromosome);
		bool runUnitTests();
		//Chromosome Constructor
		Chromosome();
};


