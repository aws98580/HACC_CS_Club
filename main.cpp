#include <string>
#include <vector>
#include <iostream>
using namespace std;


class Hotel {

 private:
  string name_;
  int numRooms_;

 public:
  //Constructor
  Hotel(const string& name, int numRooms) : name_(name), numRooms_(numRooms) {}

  //Getters
  const string& getName() const { return name_; }
  int getNumRooms() const { return numRooms_; }

};




class Room {

private:
  int roomNumber_;
  int numBeds_;
  bool isAvailable_;

 public:
//Constructor
  Room(int roomNumber, int numBeds, bool isAvailable)
      : roomNumber_(roomNumber), numBeds_(numBeds), isAvailable_(isAvailable) {}

  int getRoomNumber() const { return roomNumber_; }
  int getNumBeds() const { return numBeds_; }
  bool isAvailable() const { return isAvailable_; }
  void setAvailability(bool availability) { isAvailable_ = availability; }
};






int main() {
//Create a hotel of 10 rooms
Hotel h("The Grand Hotel", 10);

//Initialze a vector of room objects
vector<Room> rooms;
for (int i = 0; i < h.getNumRooms(); i++)
  rooms.emplace_back(i + 1, 2, true);

for (const auto& room : rooms) {
  if (room.isAvailable()) {
    cout << "Room " << room.getRoomNumber() << " is available with "
              << room.getNumBeds() << " beds." << endl;
  }
}

  }//end main