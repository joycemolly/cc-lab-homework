//
//  snow.hpp
//  cc particle homework
//
//  Created by 郑晴 on 11/21/17.
//

#pragma once
#include "ofMain.h"


class Snow{
public:
    void setup(int x, int y);
    void update();
    void draw(int x, int y);
    
    ofPoint pos;
    ofPoint vel;
    int alpha;
    
};


