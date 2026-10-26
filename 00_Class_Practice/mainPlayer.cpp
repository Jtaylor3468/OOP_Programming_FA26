#include "Player.hpp"
#include "Team.hpp"

int main(void) {
    // Create player object
    Player my_player;
    my_player.printInfo();

    my_player.setName("Bo Jackson");
    my_player.setTeam("Raiders");
    my_player.setNumber(34);
    my_player.setPoints(108);

    my_player.printInfo();


    // Create players with constructor
    Player ben_rice("Ben Rice", "Raiders", 65, 0);
    Player jadan_baugh("Jadan Baugh" , "Raiders", 13, 28);


    // Create Team object
    Team las_vegas_raiders;

    // add players to team

    return 0;
}