#include <utility>
#include <unordered_map>
#include <string>

#ifndef LEMON_H
#define LEMON_H

template<class T> class Lemon {
  private:    
    std::unordered_map<std::string, T> items;
  public:
    Lemon(){
        items = {};
    };
    void set(const std::string& key, T value){
        items[key] = std::move(value);
    }
    //retrieves the value
    T get(const std::string& key){
        return items[key];
    }
    //checks if key exists
    bool contains(const std::string& key){
        return items.find(key) != items.end();
    }
    
    void del(const std::string& key){
        items.erase(key);
    }
    
    void delAll(){
        items.erase(items.begin(), items.end());
    }
    //checks for similarity of keys
    bool operator==(Lemon<T> other){
        for(auto& pair: items){
            if(!(other.contains(pair.first))) return false;
        }
        return true;
    }
    //checks for similarity of keys
    bool operator!=(Lemon<T> other){
        for(auto& pair: items){
            if(other.contains(pair.first)) return false;
        }
        return true;
    }
};

#endif