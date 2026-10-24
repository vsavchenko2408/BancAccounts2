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
}