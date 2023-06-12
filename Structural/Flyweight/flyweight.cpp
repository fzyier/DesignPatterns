#include "flyweight.hpp"

// ! Room
void Room::show_human() const
{
    std::cout << "Meters: " << meters_ << '\n';
}
// ! Castle
Room* Castle::get_room(size_t rooms) 
{
    if (people.find(rooms) != people.end()) 
    {
        return people[rooms];
    } 
    else 
    {
        Room* room = new Room(rooms);
        people[rooms] = room;
        return room;
    }
}