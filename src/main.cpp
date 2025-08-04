#include <iostream>
#include "headers/encoder.h"
#include "headers/byteworker.h"
int main()
{
    ByteWorker bt= ByteWorker();
    bt.parseBigEndian();


    /*
    Encoder encoder = Encoder();
    auto EncodedImage = encoder.encodeImage("letter.txt");
    int index = 1;
    for (auto &row : EncodedImage)
    {

        for (auto &value : row)
        {
            std::cout << "(" << value << "),";
        }
        if (index % 4 == 0)
        {
            std::cout << "\n";
        }

        index++;
    }

    return 0;*/
}
