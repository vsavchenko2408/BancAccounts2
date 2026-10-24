#pragma once
#include "client.h"
#include <vector>

class Account
{
    int _clientID;
    static int _accountID;
    long long _money;
    //std::vector<Transaction> _transactions;
    bool _isActiveAccount;

    public:
    Account() = delete;
    Account(Client& client, long long money, bool isactive): _clientID(client.get_clientID()), _money(money), _isActiveAccount(true)
    {
        _accountID++;
    }
};