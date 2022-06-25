//
// Created by ribre on 24/06/2022.
//

#ifndef UNTITLED2_PLAYER_H
#define UNTITLED2_PLAYER_H

#include <ostream>
#include "Person.h"

    using namespace std;
class Player: public Person{
private:
    string team;
    double salary;
public:
    Player();

    Player(const string &name, const string &team, double salary);

    const string &getTeam() const;

    void setTeam(const string &team);

    double getSalary() const;

    void setSalary(double salary);

    friend ostream &operator<<(ostream &os, const Player &player);

    string toString() override;
};


#endif //UNTITLED2_PLAYER_H
