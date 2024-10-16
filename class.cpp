#include <iostream>
#include <string>

class Person {
public:
    Person(const std::string& fname, const std::string& sname)
        : firstname(fname), secondname(sname) {}

    virtual void printName() const {
        std::cout << firstname << " " << secondname << std::endl;
    }

protected:
    std::string firstname;
    std::string secondname;
};

class Parent : public Person {
public:
    Parent(const std::string& fname, const std::string& sname)
        : Person(fname, sname) {}

    void printName() const override {
        std::cout << "Parent: " << firstname << " " << secondname << std::endl;
    }
};

class Student : public Person {
public:
    Student(const std::string& fname, const std::string& sname)
        : Person(fname, sname) {}

    void printName() const override {
        std::cout << "Student: " << firstname << " " << secondname << std::endl;
    }
};

int main() {
    Parent parent("John", "Doe");
    Student student("Mary", "Doe");

    parent.printName();
    student.printName();

    return 0;
}
