#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    }


//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(255, 255, 255);
    ofSetColor(87, 50, 33);
    ofNoFill();
    ofCircle(400,225,30);
    ofCircle(400,150,30);
    ofCircle(400,250,25);
    ofLine(100,100,300,400);
    ofLine(100,150,200,400);
    ofLine(50,350,100,200);
    ofLine(100,300,300,500);
    ofRect(300,200,30,400);
    ofTriangle (300,270,300,300,200, 220);
    ofTriangle(400, 270, 300,200,300,220);
    //ofTriangle (300,270,300,300,100, 220);
    //ofTriangle(200, 170, 300,300,200,220);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

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
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
