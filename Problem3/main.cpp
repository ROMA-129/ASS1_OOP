#include<iostream>
#include<iomanip>
#include"LibraryItem.h"
#include"Book.h"
#include"Magazine.h"
#include"ResearchPaper.h"
using namespace std;

void printSectionHeader(const string& title) {
	cout << "===========================" << endl;
	cout << " " << title << endl;
	cout << "===========================" << endl;
}
int main() {
	cout << fixed << setprecision(2);

	printSectionHeader("creating Library Items");

	Book book1(100, "A tale of Two cites", 50.99, "Charles Dikens",438);
	Book book2(101, "Clean code", 49 ,"RObery C.MArten",431);
	Magazine mag1(201, "Maged", 15.00, 305, "Abu Dabi media Network");
	ResearchPaper rp1(301, "Deep Learning in Medical Imaging", 65.00, "Dr.Sara Ahmed", "Artificial Intelligence");
	cout << "Four library items created successfully" << endl;

	printSectionHeader("Display Info");
	
	LibraryItem* items[4];
	items[0] = &book1;
	items[1] = &book2;
	items[2] = &mag1;
	items[3] = &rp1;

	for (int i = 0;i<4;i++) {
		items[i]->displayInfo();
	}

	printSectionHeader("Late Fee Calculation");
	int lateDayes = 7;
	for (int i = 0;i < 4;i++) {
		double fee = items[i]->calculateLateFee(lateDayes);
		cout << " " << items[i]->getTitle() << " " << "-> Late Fee: " << fee << endl;
	}

	printSectionHeader("BorrowItem");
	cout << "__Calling borrowItem() without borrower name:" << endl;
	book1.borrowItem();
	cout << "__Calling borrowIten() whith borrower name:" << endl;
	book2.borrowItem("Mohammed Ghazi");
	mag1.borrowItem("Mariem");
	rp1.borrowItem("TA.Mina");
	
	cout << "__Attempting to Borrow an already-borowed item:" << endl;
	book1.borrowItem("Ali");

	printSectionHeader("comparing price");
	cout << "Comparing book1 vs book2: " << endl;
	comparePrice(book1, book2);

	cout << "comparing Magazine vs Research paper: " << endl;
	comparePrice(mag1, rp1);

	cout << "comparing Book2 vs Research paper:" << endl;
	comparePrice(book2, rp1);


	printSectionHeader("Total items created");
	cout << "Total items created:" << LibraryItem::getTotalItems() << endl;

	printSectionHeader("Update Item status After Borrowing");

	for (int i = 0;i < 4;i++) {
		cout << " " << items[i]->getId() << " " << items[i]->getTitle() << (items[i]->getIsBorrowed() ? "Borrowed" : "Availabe") << endl;
	}

	return 0;


}