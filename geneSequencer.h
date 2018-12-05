
#include <iostream>
#include <fstream>
#include <vector>
#include "gene.h"
#include "chromosome.h"

using namespace std;
//GeneSequencer
class GeneSequencer{
	public:
		Chromosome CreateChromsome();
		Chromosome ImportChromosome();
		Chromosome OutputChromosome();
		Chromosome DoMeiosis(Chromosome, Chromosome);
		void SequenceChromosome(Chromosome);
		bool PowerOnSelfTest;
};
