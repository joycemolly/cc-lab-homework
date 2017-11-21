//
//  ball.cpp
//  cc particle homework
//
//  Created by 郑晴 on 11/21/17.
//

#include "ball.hpp"

    void Ball::setup (int x,int y,ofColor _color){
        pos.set(x, y);
        color = _color;
        vel.set(ofRandom(-1.2, 1.2), ofRandom(-1,1));
        acc.set(0,ofRandom(0,0.01));
        alpha =255;
        
        
    }
    
    void Ball::update(int x,int y){
        vel.set(x, y);
        pos+=vel;
        vel+=acc;
        vel+=speed;
        
        alpha--;
        
    }
    
    void Ball::draw(){
        
        ofSetColor(color.r, color.g, color.b,alpha);
        ofDrawCircle(pos, 2);
        
    }
    

