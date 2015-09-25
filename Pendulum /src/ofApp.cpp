#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate ( 60); //Set screen frame rate ofSetFrameRate
    pos0 = ofPoint (512, 300); //Set initial values
   pos = ofPoint (600, 200);
    velocity = ofPoint (100, 0);
}

//--------------------------------------------------------------
void ofApp::update(){
    float dt = 1.0/60.0; //constants
    float mass = 0.1;   // Time Step
    float rubberLen = 200.00; //Mass of a ball
    float k = 0.5; //Segment's Length
    //Gravity force
    ofPoint g(0.0, 9.8);
    ofPoint delta = pos - pos0;
    float len = delta.length();
    //Vector's length
    float hookevalue = k * (len-rubberLen);
    delta .normalize();
    //Normalize vector's length
    ofPoint hookeForce = delta * (- hookevalue);
    //Update velocity and pos
    ofPoint force = hookeForce + g;
    //Resulte force
    ofPoint a =  force / mass;
    //Second Newton's law
    velocity += a * dt;
    //Euler Method
    pos +=  velocity * dt;
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground (255, 255, 255); //Setting Background color
    //Draw rubber as a blue line
    ofSetColor(0, 0, 255);
    //Set blue color
    ofLine(pos0.x, pos0.y , pos.x, pos.y); //draws line
    // Draw ball  as a red  circle
    ofSetColor(255, 0, 0);
    ofFill();
    ofCircle(pos.x, pos.y, 20); // Draws circle
    
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){

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