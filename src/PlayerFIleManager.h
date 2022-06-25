//
// Created by ribre on 24/06/2022.
//

#ifndef UNTITLED2_PLAYERFILEMANAGER_H
#define UNTITLED2_PLAYERFILEMANAGER_H
#include "Player.h"
#include "vector"
#include<fstream>

class PlayerFIleManager {
public:
    vector<Player> loadCSV(const std::string &filename);
    vector<Player> loadTXT(const std::string &filename);
};


#endif //UNTITLED2_PLAYERFILEMANAGER_H
