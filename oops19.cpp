#include <iostream> 
#include <iomanip> 
#include <string> 
 
using namespace std; 
 
const int MAX = 2; 
 
class Student { 
private: 
    string name; 
    string dept; 
    string id; 
 
public: 
    void addRecord( string name, string dept, string id ) { 
        this->name = name; 
        this->dept = dept; 
        this->id = id; 
    } 
    void display() { 
        cout << left << setw(25) << name << left << setw(20) << dept << setw(15) << id << endl; 
    } 
}; 
 
int main( void ) { 
    Student s[MAX]; 
    string name, dept, id; 
 
    for( int i=0; i<MAX; i++ ) { 
        cout << "Enter name : ";    getline( cin, name ); 
        cout << "Enter dept : ";    getline( cin, dept ); 
        cout << "Enter ID   : ";    getline( cin, id ); 
        s[i].addRecord( name, dept, id ); 
        cout << endl; 
    } 
 
    cout << left << setw(25) << "NAME" << left << setw(20) << "DEPARTMENT" << setw(15) << "ID NUMBER" << endl; 
 
    for( int i=0; i<MAX; i++ ) 
        s[i].display(); 
} 