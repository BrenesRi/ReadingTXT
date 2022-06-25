//
// Created by ribre on 24/06/2022.
//

#include "Player.h"

Player::Player() = default;

Player::Player(const string &name, const string &team, double salary) : Person(name), team(team), salary(salary) {}

const string &Player::getTeam() const {
    return team;
}

void Player::setTeam(const string &team) {
    Player::team = team;
}

double Player::getSalary() const {
    return salary;
}

void Player::setSalary(double salary) {
    Player::salary = salary;
}

ostream &operator<<(ostream &os, const Player &player) {
    os << static_cast<const Person &>(player) << " team: " << player.team << " salary: " << player.salary;
    return os;
}

string Player::toString() {
    stringstream ss;
    ss << (*this);
    return ss.str();
}
