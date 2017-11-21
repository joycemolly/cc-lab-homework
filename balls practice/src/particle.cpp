//
//  particle.cpp
//  balls practice
//
//  Created by 郑晴 on 11/12/17.
//

#include "particle.hpp"


void Pixel::setup(ofPoint _pos, ofColor _color, float _size){
    
    homepoint = _pos;
    color = _color;
    size = _size;
    vel.x = ofRandom(-200,200);
    vel.y = ofRandom(-200,200);
    
    noiseIndex.x = ofRandomf();
    noiseIndex.y = ofRandomf();
}

void Pixel::update(){
    
  
    
    noise.x = ofNoise(noiseIndex.x)*100;
    noise.y = ofNoise(noiseIndex.y)*100;
    
    noiseIndex.x+=0.01;
    noiseIndex.y+= 0.02;
    
}

void Pixel::draw(){
    ofColor(color);
    ofDrawCircle(homepoint+noise, size);
    
}
