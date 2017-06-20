#include <iostream>
#include <memory>

//using unique smart pointers


int main(){
    std::unique_ptr<int> g(new int(5));
    std::unique_ptr<int[]> arr(new int[3]);
    arr[0] = 4;
    std::cout << *(g.get()) << std::endl;
    std::cout << arr[0] << std::endl;
    return 0;
}