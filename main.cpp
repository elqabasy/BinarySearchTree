#include <iostream>
using namespace std;


/** 5% bonus
 * Implementation for Binary Search Tree With linked list for every node.
 * The size of linkedlist will be specified as user input
 * also use anonymous function as parameter in c++
*/


// example
struct Student {
    string name;
    int age;

    // Constructor
    Student(const string& name, int age) : name(name), age(age) {}
};

ostream& operator<<(ostream& os, const Student& student) {
    os << "Student(name=" << student.name << ", age=" << student.age << ")";
    return os;
}


int main(int argc, char const *argv[]){    
    Student s = Student("Mahros", 19);
    cout << s << endl;

    return EXIT_SUCCESS;
}


