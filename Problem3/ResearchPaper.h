#ifndef RESEARCHPAPER_H
#define RESEARCHPAPER_H
#include"LibraryItem.h"
#include <string>
using namespace std;
class ResearchPaper : public LibraryItem {
private:
	string researcher;
	string field;

public:
	ResearchPaper();
	ResearchPaper(int id, const string& title, double price, const string& researcher, const string& field);

	string getResearcher() const;
	string getField() const;

	void setResearcher(const string& reseacher);
	void setField(const string& field);

	void displayInfo() const override;
	double calculateLateFee(int days) const override;
};

#endif
