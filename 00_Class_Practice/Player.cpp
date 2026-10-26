#include <iostream>
#include <string>

#include "Player.hpp"

// This file implements the functions that were declared in Player.hpp.
// The .hpp says what a Player can do.
// This .cpp defines how those functions actually work.


// Default constructor.
// Runs when a Player is created without any starting information.
// Gives the Player safe starting values.
Player::Player() {
    name = "-";
    team = "-";
    number = 0;
    points = 0.0;
}

// Constructor with arguments.
// Runs when a Player is created with starting information.
// The values come in through the parameters, then the setters store them
// in the Player's member variables.
Player::Player(const std::string& n, const std::string& t, int num, double player_points) {
    setName(n);
    setTeam(t);
    setNumber(num);
    setPoints(player_points);

}

// Prints the information currently stored inside this Player object.
// const means this function only reads the Player and does not change it.
void Player::printInfo() const {
    std::cout << "Name:\t\t" << name << std::endl;
    std::cout << "Team\t\t" << team << std::endl;
    std::cout << "Number\t\t" << number << std::endl;
    std::cout << "Points\t\t" << points << std::endl;
}

// Setters.
// These receive new values and store them in the Player's private member variables.
void        Player::setName(const std::string& n) {
    name = n;
}

void        Player::setTeam(const std::string& t) {
    team = t;
}

// Stores the jersey number if it is between 0 and 99.
// Otherwise, the number becomes 99.
void        Player::setNumber(int num) {
    number = (num > -1 && num < 100) ? num : 99;
}

// Stores the player's points if the value is positive.
// Otherwise, points becomes 0.
void        Player::setPoints(double player_points) {
    points = (player_points > 0) ? player_points : 0;
}