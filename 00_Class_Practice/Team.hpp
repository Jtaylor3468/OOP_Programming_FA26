#ifndef TEAM_HPP
#define TEAM_HPP

#include "Player.hpp"
#include <vector>


// Team class describes what a Team contains
// and what a Team is able to do
class Team {
    public:
    void addPlayer(const Player& player);    // Adds one Player to the team's roster
    void showRoster() const; // Goes through the roster and prints every Player; const means this function does not change the Team

    private:
    std::vector<Player> roster;     // Vector that stores all Player objects on the Team
};


#endif