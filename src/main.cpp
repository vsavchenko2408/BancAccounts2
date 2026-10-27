#include <iostream>
#include "../include/account.h"
#include "../include/client.h"

int main()
{

    Client c("John", "Dou");
    Client d("John", "Fou");
    Client e;
    std::cout <<  c.get_clientID() << std::endl;
    std::cout <<  d.get_clientID() << std::endl;
    std::cout <<  e.get_clientID() << std::endl;

    Account a(c);
    Account b(c);
    a.add_money(400);
    if(a.withdraw(300)) std::cout << "Money withdraw succesfull!" << std::endl;
    else std::cerr << "Something wrong. Meybe not enought money!" << std::endl;
;
}