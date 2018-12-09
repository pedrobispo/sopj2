//
// Created by pedro on 07/12/2018.
//

#ifndef PJ2_BUFFER_H
#define PJ2_BUFFER_H

#include <vector>
class buffer {
private:
    int size;
    std::vector<std::vector<int>> realpos;

public:
    int get_size(){
        return size;
    }
    void set_size(int value){
        size = value;
    }



};


#endif //PJ2_BUFFER_H
