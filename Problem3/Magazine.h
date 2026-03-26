#ifndef MAGAZINE_H
#define MAGAZINE_H

#include "LibraryItem.h"

class Magazine : public LibraryItem {
private:
    int issueNumber;
    string publisher;
    
public:
    Magazine();
    Magazine(int id, string title, double price, int issueNumber, string publisher);
    
    int getIssueNumber() const;
    string getPublisher() const;
    
    void setIssueNumber(int issueNumber);
    void setPublisher(string publisher);
    
    void displayInfo() const override;
    double calculateLateFee(int days) const override;
};

#endif