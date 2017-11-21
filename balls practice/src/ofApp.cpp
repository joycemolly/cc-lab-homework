#include "ofApp.h"
#include "particle.hpp"


float friction;
ofPoint pos;
ofPoint vel;
int radius = 50;

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    pos.set(ofGetWidth()/2, ofGetHeight()/2);
    vel.set(0, 0);
    friction = 0.99;
    color = ofColor(255);
    


}

//--------------------------------------------------------------
void ofApp::update(){
    pos+=vel;
    vel*=friction;
    
    if(pos.x>ofGetWidth()-radius || pos.x<radius){
        vel.x*=-1;
    }
    if(pos.y>ofGetHeight()-radius || pos.y<radius){
        vel.y*=-1;
    }
    
    for(Pixel & p: particle ){
        p.update();
        
    }
    
    offset.x = ofGetWidth()/2.0 - (pos.x/2.0);
    offset.y = ofGetHeight()/2.0 -(pos.y/2.0);
    
    
        for(int y = 0;y< 30;y+=size){
            for(int x =0;x<30; x+=size){
                ofPoint _pos;
                _pos.set(x,y);
                _pos.x += offset.x;
                _pos.y += offset.y;
                
                
                
                Pixel p;
                p.setup(_pos, color, size);
                particle.push_back(p);
                
                
                
            }
        }
        
    }



    




//--------------------------------------------------------------
void ofApp::draw(){
    
 
    
    ofSetColor(color);

    
    for(auto &p :particle){
        p.draw();
    }
    
//    ofDrawCircle(pos, radius);
    

    

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    if(key = ' ' ){
        color.r = ofRandom(255);
        color.g = ofRandom(255);
        color.b = ofRandom(255);

    }


}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    vel.x += 5-ofRandom(10);
    vel.y += 5-ofRandom(10);

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    



}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
