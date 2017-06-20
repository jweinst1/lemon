#include "lemon.h"
#include <iostream>
#include <string>

int main(){
    Lemon<int> a;
    std::string h = "hello";
    std::string& k = h;
    a.set(k, 4);
    std::cout << a.get(k) <<std::endl;
    std::cout << a.contains(k) <<std::endl;
    Lemon<int> b;
    std::cout << (a == b) << std::endl;
}