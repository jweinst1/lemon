#include <iostream>
#include <unordered_map>

class List {
    private:
       int last;
       std::unordered_map<int, int> items;
    public:
       List(){
           last = -1;
           
       }
       
       int len(){
           return last + 1;
       }
};

int main(){
    List g;
    std::cout << g.len() << std::endl;
    return 0;
}