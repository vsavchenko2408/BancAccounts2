#pragma once
#include <vector>
#include "client.h"
#include "transaction.h"
class Account
{
    int _clientID;
    static int _accountID;
    long long _money;
    std::vector<Transaction> _transactions;
    bool _isActiveAccount;

    public:
    Account() = delete;
    Account(Client& client, long long money, bool isactive): _clientID(client.get_clientID()), _money(money), _isActiveAccount(true)
    {
        _accountID++;
    }
    long long getMoney()
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