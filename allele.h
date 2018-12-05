#pragma once


#include <iostream>
#include <fstream>
#include <vector>


using namespace std;



class Allele {
	
	private:
		string nucleotideSequence;
		string variantName;
		string variantType;
		string fileOut;
		string OutputString;
	
	public:
	
		//Get Variables
		void SetNucleotideSequence(string sequence);
		void SetAlleleVariant(string variantA);
		void SetAlleleType(string typeA);
		void SetFileOut(string outputFile);
		string GetNucleotideSequence();
		string GetAlleleType();
		string GetVariantType();

		//Writing To File
	void WriteAlleleToFile(ofstream&);

	//Get Allele
	string getAlleleType(Allele& a, Allele& b);

	//Other Tools
	Allele();
	Allele(string);
	// Allele(string fileOut);
	Allele(string x, string y, string z);
	bool runUnitTests;
};