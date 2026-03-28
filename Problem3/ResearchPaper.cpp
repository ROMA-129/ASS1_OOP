#include"ResearchPaper.h"
#include<iostream>
using namespace std;

ResearchPaper::ResearchPaper() : LibraryItem(), researcher("Unknown"), field("General"){}

ResearchPaper::ResearchPaper(int id, const string& title, double price, const string& researhcer, const string& field): LibraryItem(id,title,price), researcher(researcher),field(field){}

string ResearchPaper::getResearcher() const { return researcher; }
string ResearchPaper::getField() const { return field; }

void ResearchPaper::setResearcher(const string& researcher) { this->researcher = researcher; }
void ResearchPaper::setField(const string& field) { this->field = field; }

void ResearchPaper::displayInfo() const {
	cout << "=====[RESEARCH PAPER]=====" << endl;
	cout << "ID          :" << getId() << endl; 
	cout << "Title       :" << getTitle() << endl;
	cout << "Researcher  :" << researcher << endl;
	cout << "Field       :" << field << endl;
	cout << "Price       :" << price << endl;
	cout << "Status      :" <<(getIsBorrowed()?"Borrowed":"Available") << endl;
	cout << "==========================" << endl;
}
double ResearchPaper::calculateLateFee(int days) const {
	const double ratePerDay = 1.00;
	const double flatFee = 5.00;
	return flatFee + (days * ratePerDay);
}


