#pragma once

#include <iostream>
#include <string>
#include <unordered_map>

class Room {
private:
    double meters_;

public:
    Room(double meters) : meters_(meters) {}

    void show_human() const;
};

class Castle {
private:
    std::unordered_map<size_t, Room*> people;
public:
    Room* get_room(size_t rooms);
};