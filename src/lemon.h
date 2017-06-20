#include <utility>
#include <unordered_map>
#include <string>
#include <vector>

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
    
    T& at(const std::string& key){
        return items.at(key);
    }
    //copies the current lemon
    Lemon<T> copy(){
        Lemon<T> newCopy;
        for(auto& pair : items){
            newCopy.set(pair.first, pair.second);
        }
        return newCopy;
    }
    
    Lemon<T> construct(const std::vector<T>& values){
        Lemon<T> newCopy = copy();
        for(std::vector<T>::const_iterator it = values.begin();it != values.end();++it){
            
        }
        
    }
};

#endif