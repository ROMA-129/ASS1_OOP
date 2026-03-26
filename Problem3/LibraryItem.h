#ifndef LIBRARYITEM_H
#define LIBRARYITEM_H

#include <iostream>
#include <string>
using namespace std;

class LibraryItem {
private:
    int id;
    string title;
    bool isBorrowed;
    
protected:
    double price;  // protected عشان الأبناء يقدروا يوصلوله
    
    static int totalItems;  // static variable
    
public:
    // Constructors
    LibraryItem();
    LibraryItem(int id, string title, double price);
    
    // Virtual Destructor (مهم للـ Polymorphism)
    virtual ~LibraryItem();
    
    // Getters
    int getId() const;
    string getTitle() const;
    bool getIsBorrowed() const;
    double getPrice() const;
    
    // Setters
    void setId(int id);
    void setTitle(string title);
    void setIsBorrowed(bool isBorrowed);
    void setPrice(double price);
    
    // Static function
    static int getTotalItems();
    
    // Overloaded borrowItem functions
    void borrowItem();  // بدون باراميتر
    void borrowItem(string borrowerName);  // مع باراميتر
    
    // Friend function for price comparison
    friend void comparePrice(LibraryItem& a, LibraryItem& b);
    
    // Pure virtual functions (لازم الأبناء ينفذوها)
    virtual void displayInfo() const = 0;
    virtual double calculateLateFee(int days) const = 0;
};

#endif