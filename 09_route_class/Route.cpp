#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>



class Route {
    // Constructor - is called when object is created
    // Constructor has the same name as the class and has no return type (even no void)
    Route(const std::string& src, const std::string& dest, const std::string& tran = "Car") {
        setSource(src);
        setDestination(dest);
        transport = tran;
    }


    void updateLength() {
        // Complex function that calculated the distance between 2 places
        length = rand() % 1000 + 100;

    }

    void print() const { // const method cannot change the attributes
        // source = "abc" is prohibited
        std::cout << "{ " << source << " -> " << destination << ", " << length << " }\n";
    }

    // Getter (accessor function)
    std::string getSource() {
        return source;
    }

        std::string getDestination() {
        return destination;
    }

    int getLength() {
        return length;
    }


    // TODO implement other getters

    // Setters (mutator functions)
    void setDestination(const std::string& dest) {
        destination = dest;
        updateLength();

        void setSource(const std::string& src) {
            source = src;
            updateLength();
        }

private:
    void updateLength() {
        // Complex function that calculated the distance between 2 places
        length = rand() % 1000 + 100;

    }

    std::string source;
    std::string destination;
    int length;


}

    
}



int main (void) {
    // Create the route
    Route trip("Lakeland", "Orlando", 40);
    trip.source = "Lakeland";
   // trip.destination = "Orlando";
   // trip.length = 40;

    trip.print();


    // TODO update print and set transport method 
    Route summer_trip("Lakeland", "Key West", "Plane");
    // summer_trip.source = "Lakeland";
    summer_trip.setDestination = "New York";

    summer_trip.print();



    return 0;
}