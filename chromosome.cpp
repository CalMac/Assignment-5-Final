#include <iostream>
#include <vector>
#include "chromosome.h"


	void Chromosome::AddGene(Gene newGene){
			Genes.push_back(newGene);
		}
		Chromosome::Chromosome(){
		}
	void Chromosome::AnalyzeGenotype(){
	
	};
	Gene Chromosome::FindGene(string name){
	//return Genes[name];
	}
	void Chromosome::OutputToFile(ofstream& fileOut){
		 for( unsigned int i = 0; i < Genes.size(); i++){
        Genes.at(i).WriteToFile(fileOut);
	}
	}

