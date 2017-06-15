//c++ unordered maps

#include <iostream>
#include <unordered_map>
#include <string>

int main(){
    std::unordered_map<std::string, int> dict;
    dict["foo"] = 3;
    dict["hoo"] = 4;
  for (auto& x: dict) {
    std::cout << x.first << ": " << x.second << std::endl;
  }
    return 0;
}

/*hoo: 4
foo: 3*/