#include <iostream>
#include "Player.h"
#include "PlayerFIleManager.h"
#include <vector>
int main() {
    double totalSalary = 0;
 PlayerFIleManager playersRead;
 vector<Player> jugadoresLeidos;
 jugadoresLeidos =playersRead.loadCSV("../../database.txt");
    for (auto & jugadoresLeido : jugadoresLeidos) {
        std::cout << jugadoresLeido.toString() << endl;
    }
    cout<<endl;
    for (auto & jugadoresLeido : jugadoresLeidos) {
        totalSalary = totalSalary + jugadoresLeido.getSalary();
    }
    cout << totalSalary <<endl;
    cout<<endl;
    cout<< "Probando achivo de texto normal"<<endl;
    totalSalary =0;
    cout<<endl;

    vector<Player> jugadorestxt;
    jugadorestxt =playersRead.loadTXT("../../database2.txt");
    for (auto & jugadoresLeidow : jugadorestxt) {
        std::cout << jugadoresLeidow.toString() << endl;
    }
    for (auto & jugadoresLeidow : jugadorestxt) {
        totalSalary = totalSalary + jugadoresLeidow.getSalary();
    }
    cout << totalSalary-1 <<endl;
    cout<<endl;
    return 0;

    //Prueba texto normal

}
