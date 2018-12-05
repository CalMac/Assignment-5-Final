#include "gene.h"
#include <iostream>

using namespace std;


string Gene::GetGene(){
	return name;
}
void Gene::SetGene(string name){
		 	this->name = name;
}
string Gene::GetTrait(){
	return traitType;
}
void Gene::SetTrait(string type){
		this->traitType = type;
}
Allele Gene::GetAlleleA(){
	return  a;
};
void Gene::SetAlleleA(Allele a){
		this->a = a;
};
Allele Gene::GetAlleleB(){
	return  b;
};
void Gene::SetAlleleB(Allele b){
		this->b = b;
};
void Gene::WriteToFile(ofstream& fileOutput){
fileOutput << name << "," << traitType;
a.WriteAlleleToFile(fileOutput);
b.WriteAlleleToFile(fileOutput);
}

Allele Gene::GetExpressedTrait(){
//This is writing from a file
};





//Other Tools
Gene::Gene(){
}