#include"Book.h"
#include <iostream>
using namespace std;

Book::Book() : LibraryItem(), author("Unknown"),pages(0) {}

Book::Book(int id,const string& title, double price,const string& author,int pages) : LibraryItem(id,title,price),author(author),pages(pages){}

string Book::getAuthor() const { return author; }
int Book::getPages() const { return pages; }

void Book::setAuthor(const string& author) { this-> author = author; }
void Book::setPages(int pages) { this-> pages = pages;}

void Book::displayInfo()const {
	cout << "===========[Book]==========" << endl;
	cout << "   ID       :" << getId() << endl;
	cout << "   Title    :" << getTitle() << endl;
	cout << "   Author   :" << author << endl;
	cout << "   Price    :" << price << endl;
	cout << "   Status   :" << (getIsBorrowed() ? "Borrowed" : "Available") << endl;
	cout << "===========================" << endl;
}

double Book::calculateLateFee(int days) const {
	const double ratePerDay = 1.50;
	return days * ratePerDay;
	}