//
//  particle.hpp
//  balls practice
//
//  Created by 郑晴 on 11/12/17.
//

#pragma once
#include "ofMain.h"

class Pixel{
public:
    void setup( ofPoint _pos, ofColor _color, float _size);
    void update();
    void draw();
    
    ofPoint homepoint;
    ofColor color;
    float size;
    ofPoint vel;
    ofPoint noiseIndex;
    ofPoint noise;
};
