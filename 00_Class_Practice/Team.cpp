#include "Team.hpp"
#include <iostream>

// addPlayer receives one Player object and adds it to the team's roster
void Team::addPlayer(const Player& player) {
    roster.push_back(player);
}

// showRoster goes through every Player stored in the roster
// and tells each Player to print its own information
void Team::showRoster() const {
    for(int i = 0; i < roster.size(); i++) {
    std::cout << "--------------------\n";
    roster[i].printInfo();
    }
}