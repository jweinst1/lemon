#include <iostream>

//uses initalization list

int getInt(int num){
    return num;
}


//struct with constructor and init list.
struct pair {
       int x;
       int y;
    pair(): x(2), y(2) {};
};

int main(){
    pair g;
    std::cout<< g.x << std::endl;
    return 0;
}