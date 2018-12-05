#include "allele.h"
#include <iostream>

using namespace std;
Allele::Allele(string x, string y, string z){
		this->variantName = x;
		this->variantType = y;
		this->nucleotideSequence = z;

	}
string Allele::GetNucleotideSequence(){
	return nucleotideSequence;
}
void Allele::SetNucleotideSequence(string sequence){
		 	this->nucleotideSequence = sequence;
}
		void Allele::SetAlleleVariant(string variantA){
			this->variantName = variantA;
		}
		string Allele::GetAlleleType(){
		return variantName;
		}

		void Allele::SetAlleleType(string typeA){
			this->variantType = typeA;
		}
		string Allele::GetVariantType(){
		return variantType;
		}
		void Allele::SetFileOut(string fileOut){
			this->fileOut = OutputString;
		}
		//Writing To File
		void Allele::WriteAlleleToFile(ofstream& fileOutput){
		fileOutput <<  nucleotideSequence << ",";
		fileOutput <<  variantName << ",";
		fileOutput <<  variantType << ",";
		}
	//	}

	//Get Allele

	//Other Tools
	Allele::Allele(){
	}
	bool runUnitTests;