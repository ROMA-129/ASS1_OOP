#include "Magazine.h"

Magazine::Magazine() : LibraryItem(), issueNumber(0), publisher("") {}

Magazine::Magazine(int id, string title, double price, int issueNumber, string publisher)
    : LibraryItem(id, title, price), issueNumber(issueNumber), publisher(publisher) {}

int Magazine::getIssueNumber() const { return issueNumber; }
string Magazine::getPublisher() const { return publisher; }

void Magazine::setIssueNumber(int issueNumber) { this->issueNumber = issueNumber; }
void Magazine::setPublisher(string publisher) { this->publisher = publisher; }

void Magazine::displayInfo() const {
    cout << "=== MAGAZINE ===" << endl;
    cout << "ID: " << getId() << endl;
    cout << "Title: " << getTitle() << endl;
    cout << "Issue Number: " << issueNumber << endl;
    cout << "Publisher: " << publisher << endl;
    cout << "Price: $" << getPrice() << endl;
    cout << "Status: " << (getIsBorrowed() ? "Borrowed" : "Available") << endl;
}

double Magazine::calculateLateFee(int days) const {
    // Magazines: $0.5 per day
    return days * 0.5;
}