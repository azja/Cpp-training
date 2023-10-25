#include <iostream>

//Let's try to write down program which shows the bit representation of uint

const size_t N = 8*sizeof(uint);

bool check(size_t shift, size_t number){

 return (1 << shift) & number;
 
}


int main() {

size_t number = 17;

size_t moving_bit = 1;

std::cout<<moving_bit<<" "<<(moving_bit << 1)<<" "<<moving_bit<<std::endl;

for (auto i=0U;i<N;++i){

std::cout<<check(i,number);
}

std::cout<<std::endl;

size_t * ptr  = &number;

std::cout<<*ptr<<std::endl;

return 0;
}
