#pragma once
#include <string>
class Client
{
    std::string _name;
    std::string _surname;
    static int _countID;
    int _ID;
    public:
    Client():_name("nobody"), _surname("noone")
    {
        _ID = ++_countID;
    }
    Client(std::string name, std::string surname): _name(name), _surname(surname)
    {
        _ID = ++_countID;
    }
    int get_clientID() const
    {
        return _ID;
    }
};