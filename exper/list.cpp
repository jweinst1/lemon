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
       
       void push(int arg){
           items[++last] = arg;
       }
       
       int get(int index){
           //prevents out of range
           return index >= 0 && index <= last ? items[index] : -1;
       }
       
       int pop(){
           return last >= 0 ? items[last--] : -1;
       }
};

int main(){
    List * g = new List();
    std::cout << g->len() << std::endl;
    g->push(3);
    std::cout << g->get(0) << std::endl;
    std::cout << g->pop() << std::endl;
    delete g;
    return 0;
}