#include "Celebrity.h"
#include <string>

/**
 * accessor and mutators, deconstructors, and operator functions 
 */

Celebrity::Celebrity() {}
Celebrity::~Celebrity() {}

Celebrity::Celebrity(std::string name, int ranking, std::string occ, bool met) {
	this->name = name;
	this->ranking = ranking;
	this->occ = occ;
	this->met = met;
}
		
std::string Celebrity::getName() const{
	return name;
}
int Celebrity::getRanking() const{
	return ranking;
}
std::string Celebrity::getOcc()const{
	return occ;
}
bool Celebrity::getMet() const{
	return met;
}

void Celebrity::setName(std::string name){
	this->name = name;
}
void Celebrity::setRanking(int Ranking){
	this->ranking = ranking;
}
void Celebrity::setOcc(std::string occ){
	this->occ = occ;
}
void Celebrity::setMet(bool met){
	this->met = met;
}


bool Celebrity::operator< (Celebrity & c) {
	if (this->getRanking() < c.getRanking())
		return true;
	return false;
	
}

