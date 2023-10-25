#include <iostream>

int main() {

    int v=1;

    int * ptr = &v;

    std::cout<<"Value of v is:"<<v<<std::endl;

    *ptr=23;

    std::cout<<"Value of v is:"<<v<<std::endl;

    std::cout<<"Size of pointer on this machine is:"<<sizeof(ptr)<<std::endl;
    std::cout<<"Size of int on this machine is:"<<sizeof(int)<<std::endl;
    std::cout<<"Size of uint on this machine is:"<<sizeof(uint)<<std::endl;
    std::cout<<"Size of long on this machine is:"<<sizeof(long)<<std::endl;
    return 0;
}
