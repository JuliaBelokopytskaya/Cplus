
#include <iostream>
using namespace std;

class Ship {
public:
    virtual void add() = 0;
    virtual void show() = 0;
    static Ship* begin;
    static void print();
protected:
    char name[25];
    Ship* next;
};
class Steamboat : virtual public Ship {
public:
    Steamboat();
    Steamboat(const char* n, int s);
    virtual ~Steamboat();
    void add();
    void show();
private:
    int lifting_capacity;
};
Steamboat::Steamboat(const char* n, int s) {
    strcpy_s(name, n); 
    lifting_capacity = s;
}
Steamboat::~Steamboat() {
}
void Steamboat::add() {
    this->next = Ship::begin; 
    Ship::begin = this; 
}
void Steamboat::show() {
    cout << "Name: " << name << endl;
    cout << "lifting_capacity: " << lifting_capacity << endl;
}
class Sailboat : virtual public Ship {
public:
    Sailboat();
    Sailboat(const char* n, int s);
    virtual ~Sailboat();
    void add();
    void show();
private:
    int lifting_capacity;
};
Sailboat::Sailboat(const char* n, int s) {
    strcpy_s(name, n); 
    lifting_capacity = s;
}
Sailboat::~Sailboat() {
}
void Sailboat::add() {
    this->next = Ship::begin;
    Ship::begin = this;
}
void Sailboat::show() {
    cout << "Name: " << name << endl;
    cout << "lifting_capacity: " << lifting_capacity << endl;
}
class Corvette : virtual public Ship {
public:
    Corvette();
    Corvette(const char* n, int s);
    virtual ~Corvette();
    void add();
    void show();
private:
    int lifting_capacity;
};
Corvette::Corvette(const char* n, int s) {
    strcpy_s(name, n); 
    lifting_capacity = s;
}
Corvette::~Corvette() {
}
void Corvette::add() {
    this->next = Ship::begin;
    Ship::begin = this;
}
void Corvette::show() {
    cout << "Name: " << name<<endl;
    cout << "lifting_capacity: " <<lifting_capacity << endl;
}

Ship* Ship::begin = 0;
void Ship::print() {
    Ship* tmp = Ship::begin;
    while (tmp) {
        tmp->show();
        tmp = tmp->next;
    }
}

int main() {

    Corvette d1("IzhCom", 125);  
    Sailboat d2("SPI", 150);  
    Steamboat d3("MVD", 300);
    d1.add(); 
    d2.add(); 
    d3.add();
    Ship::print();
    return 0;
}
