#include "headers/encoder.h"

Encoder::Encoder()
{
}
std::vector<std::vector<unsigned int>> Encoder::encodeImage(const char *str)
{
    std::ifstream file(str);
    std::string text;

    while (getline(file, text))
    {
        Encoder::encodedImage.push_back(Encoder::encodeLine(text));
    }
    return Encoder::encodedImage;
}

std::vector<std::vector<unsigned int>> Encoder::getEncodedImage()
{

    return Encoder::encodedImage;
}

std::vector<unsigned int> Encoder::encodeLine(std::string line)
{
    std::vector<unsigned int> pack;
    for (int index = 0; index < Encoder::image_size / 4; index++)
    {
        std::string subs = line.substr(index * 8, 8);

        unsigned int value = Encoder::textByteToInt(subs);

        pack.push_back(value);
    }
    return pack;
}

unsigned int Encoder::textByteToInt(std::string byte)
{
    std::bitset<8> bits(byte);
    return static_cast<unsigned int>(bits.to_ullong());
}