/*	Project:    Gene Sequencer
	Name:       Cal McCormick
    Class:      CSC 1810 Section 3
*/

/*
IMPORTANT NOTE: This is only Part A, Due Tuesday The 23rd.
Notes:
Create a vector which counts up as Allele and Gene parts are added
Use append in order to allow the vector to expand


*/
#include <iostream>
#include <fstream>
#include <vector>
#include "allele.h"
#include "gene.h"
#include "chromosome.h"
#include "geneSequencer.h"

using namespace std;

// Class Creation
// GeneSequencer

int main(int argc, char *argv[])
{
//Main Menu Code
int tempUserInput;
int AnotherGene = 0;
ofstream outFS;
ifstream inFS;
string inputFile;
string geneName;
string Trait;
string SequenceA;
string VariantA;
string TypeA;
string SequenceB;
string VariantB;
string TypeB;
Chromosome c;
int geneNumber = 0;

	 while(tempUserInput != 6){
		cout << "Main Menu" << endl;
		cout << "Options:" << endl;
		cout << "1- Create Chromosome" << endl;
		cout << "2- Analyze Chromosome" << endl;
		cout << "3- Output Chromosome to File" << endl;
		cout << "4- Input Chromosome from File" << endl;
		cout << "5- Combine Chromsomes" << endl;
		cout << "6- Exit" << endl;
		cout << "7- Test Alleles" << endl;
		cout << "8- Test Genes" << endl;
		cout << "Please Enter User Selection: ";
		cin >> tempUserInput;
	while((tempUserInput == 1) && (AnotherGene !=1)){
		geneNumber = geneNumber + 1;
		//Gene Input

		cout << "What is The Name of This Gene?" << endl;
		cout << "Example: (Q489Z)" << endl;
		cin >> geneName;
		cout << "What is The Gene Trait?" << endl;
		cout << "Example: (Eye Color)" << endl;
		cin >>  Trait;
		cout << "What is The Allele 1 Variant" << endl;
		cout << "Example: (Brown Eyes)" << endl;
		getline(cin, VariantA);
		cin >> TypeA;
		cout << "What is the Allele 1 Type?" << endl;
		cout << "Example: (Dominant)" << endl;
		cin >> TypeA;
		cout << "What is The Allele 1 Sequence" << endl;
		cout << "Example: (GGCA)" << endl;
		cin >> SequenceA;
		cout << "What is The Allele 2 Variant" << endl;
		cout << "Example: (Blue Eyes)" << endl;
		getline(cin, VariantB);
		cin >> TypeB;
		cout << "What is the Allele 2 Type (Recessive)?" << endl;
		cout << "Example: (Recessive)" << endl;
		cin >> TypeB;
		cout << "What is The Allele 2 Sequence" << endl;
		cout << "Example: (CCGT)" << endl;
		cin >> SequenceB;


		//Allele Creator
		Allele myAllele1(VariantA, TypeA, SequenceA);
		Allele myAllele2(VariantB, TypeB, SequenceB);
		//Gene Creator
		

		Gene Gene1(myAllele1, myAllele2);
		Gene1.SetGene(geneName);
		Gene1.SetTrait(Trait);
		c.AddGene(Gene1);

		//Chromosome Creator
		
		

		
		
		
		
		
		
		/* GeneSequencer myGeneSequencer;
		myGeneSequencer.CreateChromsome();
		Chromosome Genes[0].SetGene();
		Chromosome Genes[0].myAllele1.SetType();
		*/
		
		cout <<"Do You Want to Add A New Gene?" << endl;
		cout << "Press 0 for yes, 1 for no" <<endl;
		cin >> AnotherGene;
	}
	

		//Chromosome Creator
		// c.AddGene(Gene Gene1);
		// 3 Inputs to an Allele, 2 Alleles to a Gene
		// }
	//Gene Display
	 if(tempUserInput == 2){
	
	 }


	//File Output
	 if(tempUserInput == 3){
	string outputFile;
	cout << "What File Would you like to Export to?";
	cin >> outputFile;
	ofstream fileOut;
	fileOut.open(outputFile);
	c.OutputToFile(fileOut);
	fileOut.close();


	
	}
	if(tempUserInput == 4){
		cout << "What File Would you like to Import from?";
		cin >> inputFile;
		ifstream inputIn;
		inputIn.open(inputFile);
		
		inputIn.close();

	
	}

	
	//Writing Allele
	
	
	
	

	
	//Combine Chromosomes
	if(tempUserInput == 5){
		cout << "This Feature Has Not Been Implemented Yet!" << endl;
	}
	//Exit
	if(tempUserInput == 6){
		continue;
	}
	if(tempUserInput == 7){
		// Allele Testing
		Allele myAllele;
		string alleleUnitTest;
		myAllele.SetNucleotideSequence("Pa");
		myAllele.SetAlleleVariant("ed");
		myAllele.SetAlleleType("ss");
		alleleUnitTest = myAllele.GetNucleotideSequence() + myAllele.GetVariantType() + myAllele.GetAlleleType();
		cout << alleleUnitTest << endl;
		 }
	if(tempUserInput == 8){
		// Gene Testing
		Gene myGene;
		myGene.SetGene("Pas");
		myGene.SetTrait("sed");
		cout << myGene.GetGene();
		cout << myGene.GetTrait();
		cout << endl;
	 	}
	 }
//Better way to test, fill up a gene with Alleles and variables, and then have the program check for correct varibles.


	//GeneOutput(CreateGene,CreateTrait);




		/*ofstream outFS(outputFile);
		outFS << CreateGene; 
		outFS << CreateTrait;
		outFS << CreateVariantA;
		outFS << CreateTypeA;
		outFS << CreateSequenceA;
		outFS << CreateVariantB;
		outFS << CreateTypeB;
		outFS << CreateSequenceB; */


	// This causes the program to pause at its completion.
	{
		char c;
		cout << "Hit enter to exit:";
		cin.get(c);
	}
	return 0;
}