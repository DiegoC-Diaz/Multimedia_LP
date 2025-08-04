#include "headers/byteworker.h"



ByteWorker::ByteWorker(){



}

void ByteWorker::parseBigEndian(){

    uint32_t value = 0x12345678;



    uint32_t shifted_value =(value>>24) & 0x000000FF|(value>>8) & 0x0000FF00|(value<<8) & 0x00FF0000 |(value << 24) & 0xFF000000;

    std::cout<<value<<std::endl;
    std::cout<<shifted_value;
  


}