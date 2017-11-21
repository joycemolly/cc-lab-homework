//
//  ball.hpp
//  cc particle homework
//
//  Created by 郑晴 on 11/21/17.
//

#pragma once
#include "ofMain.h"

class Ball{
    
public:

    void setup(int x,int y,ofColor _color);
    void update(int x,int y);
    void draw();
    
    ofPoint pos;
    ofPoint vel;
    ofPoint acc;
    ofColor color;
    ofPoint speed;
    float alpha;
    
};




