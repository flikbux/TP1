#include "date.h"

#include <iostream>


int main(){
    date premiere_date(20, 03, 2002);

    std::cout << premiere_date.GetJour() << std::endl;

}