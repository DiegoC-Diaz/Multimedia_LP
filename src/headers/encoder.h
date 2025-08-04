#ifndef ENCODER_H
#define ENCODER_H

#include <iostream>
#include <fstream> 
#include <string>
#include <math.h>
#include <cstdint>
#include <bitset>
#include<vector>
class Encoder{


    public:
        Encoder();



        std::vector<std::vector<unsigned int>> encodeImage(const char* fileDirectory);
        std::vector<unsigned int> encodeLine(std::string line);
        std::vector<std::vector<unsigned int>> getEncodedImage();
        
        
    private:
        std::vector<std::vector<unsigned int>> encodedImage;
        unsigned int textByteToInt(std::string byte);
        std::string file_dir;
        int image_size=10;
       
};

#endif