#pragma once
#include <vector>
#include "client.h"
#include "transaction.h"
class Account
{
    static int _countID;
    int _ID;
    int _clientID;
    long long _money;
    std::vector<Transaction> _transactions;
    bool _isActiveAccount;

    public:
    Account() = delete;
    Account(Client& client): _clientID(client.get_clientID())
    {
        _ID = ++_countID;
        _isActiveAccount = true;
        _money = 0;
    }
    int get_clientID() const 
    {
        return _clientID;
    }

    int get_ID() const 
    {
        return _ID;
    }

    long long Money() const
    {
        return _money;
    }

    bool transfer(long long valueToTransfer)
    {
        if(valueToTransfer >=_money)
        {
            _money = _money - valueToTransfer;
            return true;
        }
        return false;
    }
    
};