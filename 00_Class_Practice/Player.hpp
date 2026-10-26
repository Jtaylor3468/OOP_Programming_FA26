// .hpp header file. Keeps the description of the class. No implementation.
// Inclusion guard
#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <string>

class Player {
public:
    // No arg constructor
    Player();
    Player(const std::string& n, const std::string& t, int num, double player_points);

    // Printing the info method
    void printInfo() const;

    // Getters
    std::string getName() const;
    std::string getTeam() const;
    int         getNumber() const;
    double      getPoints() const;

    // Setters
    void        setName(const std::string& n);
    void        setTeam(const std::string& t);
    void        setNumber(int num);
    void        setPoints(double player_points);

private:
    std::string name;
    std::string team;
    int         number;
    double      points;
};



#endif