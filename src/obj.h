#include <utility>
#include <unordered_map>
#include <string>

#ifndef OBJ_H
#define OBJ_H

template<class T> class Obj {
  private:    
    std::unordered_map<std::string, T> items;
  public:
    Obj(){
        items = {};
    };
    void set(std::string key, T value){
        items[key] = std::move(value);
    }
    T get(std::string key){
        return items[key];
    }
    
};

#endif