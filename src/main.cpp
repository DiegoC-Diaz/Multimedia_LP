#include <iostream>
#include "headers/encoder.h"





int main(){

    Encoder encoder=Encoder();
    auto EncodedImage=encoder.encodeImage("letter.txt");
    int index=1;
    for( auto& row: EncodedImage ){

        for(auto& value: row){
            std::cout<<"("<<value<<"),";
        
        }
        if(index%4 ==0){
             std::cout<<"\n";
        }
  

        index++;

    }

    std::cout<<"Calculatin size";

    return 0;


}

