//
// Created by ribre on 24/06/2022.
//

#include "Person.h"

#include <utility>

Person::Person() = default;

Person::Person(string name) : name(std::move(name)) {}

const string &Person::getName() const {
    return name;
}

void Person::setName(const string &name) {
    Person::name = name;
}

ostream &operator<<(ostream &os, const Person &person) {
    os << "Nombre: " << person.name;
    return os;
}

string Person::toString() {
    stringstream ss;
    ss << (*this);
    return ss.str();
}
