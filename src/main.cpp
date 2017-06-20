#include "obj.h"
#include <iostream>
#include <string>

int main(){
    Obj<int> a;
    std::string k = "hello";
    a.set(k, 4);
    std::cout << a.get(k) <<std::endl;
}