#ifndef BOOK_H
#define BOOK_H
#include"LibraryItem.h"
#include<string>
using namespace std;

class Book : public LibraryItem {
private:
	string author;
	int pages;

public:
	Book();
	Book(int id, const string& title, double price, const string& author, int pages);

	string getAuthor() const;
	int getPages() const;

	void setAuthor(const string& author);
	void setPages(int pages);

	void displayInfo() const override;
	double calculateLateFee(int days) const override;

};
#endif
