#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    ofSetBackgroundAuto(false);
    
    int rainNum = 350;
    for(int i =0; i<rainNum; i++){
        Ball drop;////////
        rains.push_back(drop);
    }
    
    rainingRestart();
     
//    for(int a=0;a<rainNum; a++){
//        Snow snow;
//        snows.push_back(snow);
//    }

}


void ofApp::rainingRestart(){
    ofPoint position;
    position.set(ofGetMouseX(),ofGetMouseY());
    ofColor color;
    color.setHsb(ofRandom(255),255,192);

    for(int i =0;i <rains.size();i++){
        rains[i].setup(position.x,position.y, color);
    }
}


//--------------------------------------------------------------
void ofApp::update(){
    for(int i =0; i <rains.size(); i++){
        rains[i].update(ofRandom(-1.2, 1.2), ofRandom(-1,1));
    }
    if(rains[0].alpha<=0){
        rainingRestart();
        
    }
    
    for(int a =0; a<snows.size();a++){
        snows[a].update();
    }

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(0, 0, 0,18);
    ofDrawRectangle(0, 0, ofGetWidth(), ofGetHeight());
    for(int i =0; i <rains.size(); i++){
        rains[i].draw();
        
    }
    


}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if(key == 'h'){
        for(int i =0; i <rains.size(); i++){
            rains[i].update(ofRandom(-10, 10), ofRandom(-10,10));
            
    }
 
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
