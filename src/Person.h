//
// Created by ribre on 24/06/2022.
//

#ifndef UNTITLED2_PERSON_H
#define UNTITLED2_PERSON_H
#include "iostream"
#include "sstream"

using namespace std;
class Person {
private:
    string name;
public:
    Person();

    explicit Person(string name);

    const string &getName() const;

    void setName(const string &name);

    friend ostream &operator<<(ostream &os, const Person &person);

    virtual string toString();
};


#endif //UNTITLED2_PERSON_H
