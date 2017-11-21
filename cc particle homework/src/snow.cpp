//
//  snow.cpp
//  cc particle homework
//
//  Created by 郑晴 on 11/21/17.
//

#include "snow.hpp"

void Snow::setup(int x, int y){
    vel.set(0, ofRandom(1,4));
}

void Snow::update(){
    pos += vel;
    alpha--;
    
    
}

void Snow::draw(int x, int y){
    pos.set(x,y);
    ofSetColor(255,255,255,alpha);
    ofDrawCircle(pos, 1);
    
}
