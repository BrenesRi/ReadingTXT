//
// Created by ribre on 24/06/2022.
//

#include "PlayerFIleManager.h"

vector<Player> PlayerFIleManager::loadCSV(const string &filename) {
    string tempName, tempTeam, tempStrSalary, tempNewLine;
    double tempSalary;

    Player tempJugador;
    std::vector<Player> tempPlayers;

    std::ifstream in(filename, std::ios::in | std::ios::binary);

    if(!in.is_open()) {
        throw std::invalid_argument("Could not open file ["+ filename + "]");
    }

    getline(in, tempName, '\r'); // ignoring first line with variable names
    getline(in, tempNewLine, '\n');
    while(in.good()) {
        // getting the values
        getline(in, tempName,';');
        getline(in, tempTeam, ';');
        getline(in, tempStrSalary, '\r');
        getline(in, tempNewLine, '\n');

        // changing anything that is not a string
       tempSalary = stod(tempStrSalary);

        // creating Person
        tempJugador.setName(tempName);
        tempJugador.setTeam(tempTeam);
        tempJugador.setSalary(tempSalary);

        // adding Person to list
        tempPlayers.push_back(tempJugador);
    }

    return tempPlayers;
}

vector<Player> PlayerFIleManager::loadTXT(const string &filename) {
    string tempName, tempTeam, tempStrSalary, tempNewLine;
    double tempSalary;

    Player tempJugador;
    std::vector<Player> tempPlayers;

    std::ifstream in(filename, std::ios::in | std::ios::binary);

    if(!in.is_open()) {
        throw std::invalid_argument("Could not open file ["+ filename + "]");
    }

    getline(in, tempName, '\r'); // ignoring first line with variable names
    getline(in, tempNewLine, '\n');
    while(in.good()) {
        // getting the values
        getline(in, tempName,' ');
        getline(in, tempTeam, ' ');
        getline(in, tempStrSalary, '\r');
        getline(in, tempNewLine, '\n');

        // changing anything that is not a string
        tempSalary = stod(tempStrSalary);

        // creating Person
        tempJugador.setName(tempName);
        tempJugador.setTeam(tempTeam);
        tempJugador.setSalary(tempSalary);

        // adding Person to list
        tempPlayers.push_back(tempJugador);
    }

    return tempPlayers;
}
