#include "LibraryItem.h"

// Initialize static variable
int LibraryItem::totalItems = 0;

// Constructors
LibraryItem::LibraryItem() 
    : id(0), title(""), price(0), isBorrowed(false) {
    totalItems++;
}

LibraryItem::LibraryItem(int id, string title, double price) 
    : id(id), title(title), price(price), isBorrowed(false) {
    totalItems++;
}

// Destructor
LibraryItem::~LibraryItem() {
    totalItems--;
}

// Getters
int LibraryItem::getId() const { return id; }
string LibraryItem::getTitle() const { return title; }
bool LibraryItem::getIsBorrowed() const { return isBorrowed; }
double LibraryItem::getPrice() const { return price; }

// Setters
void LibraryItem::setId(int id) { this->id = id; }
void LibraryItem::setTitle(string title) { this->title = title; }
void LibraryItem::setIsBorrowed(bool isBorrowed) { this->isBorrowed = isBorrowed; }
void LibraryItem::setPrice(double price) { this->price = price; }

// Static function
int LibraryItem::getTotalItems() { return totalItems; }

// Overloaded borrowItem functions
void LibraryItem::borrowItem() {
    if (!isBorrowed) {
        isBorrowed = true;
        cout << "Item \"" << title << "\" has been borrowed." << endl;
    } else {
        cout << "Item \"" << title << "\" is already borrowed." << endl;
    }
}

void LibraryItem::borrowItem(string borrowerName) {
    if (!isBorrowed) {
        isBorrowed = true;
        cout << "Item \"" << title << "\" has been borrowed by " << borrowerName << "." << endl;
    } else {
        cout << "Item \"" << title << "\" is already borrowed." << endl;
    }
}

// Friend function
void comparePrice(LibraryItem& a, LibraryItem& b) {
    if (a.price > b.price) {
        cout << "\"" << a.title << "\" is more expensive than \"" << b.title << "\"." << endl;
    } else if (a.price < b.price) {
        cout << "\"" << b.title << "\" is more expensive than \"" << a.title << "\"." << endl;
    } else {
        cout << "\"" << a.title << "\" and \"" << b.title << "\" have the same price." << endl;
    }
}