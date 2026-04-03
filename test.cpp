#include <iostream>
using namespace std;
class STUDENT{
private:
    string name;
    float grade;
public: 
    STUDENT(){
        name="";
        grade = 0.0;
    }
    STUDENT(string n, float g){
        name = n;
        grade = g;
    }
    string getname(){
        return name;
    }
    float getgrade(){
        return grade;
    }
    void display(){
        cout << getname() << " - "<< getgrade() << endl;
    }
};
class UNIVERSITY{
private:
    STUDENT s[3];
    int count =0;
public:
    void addstudent(STUDENT st){
        if(count<3){
            s[count] = st;
            count++;
        }
    }
    void displaystudent(){
        for(int i=0; i<count;i++){
            s[i].display();
        }
    }
};
int main(){
    UNIVERSITY u;
    STUDENT s1("marcel",3.5);
    STUDENT s2("mariam",2.5);
    
    u.addstudent(s1);
    u.addstudent(s2);

    u.displaystudent();
    return 0;
}