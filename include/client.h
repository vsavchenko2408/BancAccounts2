#pragma once
#include <string>
class Client
{
    std::string _name;
    std::string _surname;
    static int _clientID;
    public:
    Client():_name("nobody"), _surname("noone")
    {
        _clientID++;
    }
    Client(std::string name, std::string surname): _name(name), _surname(surname)
    {
        _clientID++;
    }
    int get_clientID()
    {
        return _clientID;
    }
};