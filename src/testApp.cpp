#include "testApp.h"



//--------------------------------------------------------------
void testApp::setup(){

    ofSetFrameRate(60);
    ofEnableSmoothing();
    xPos = ofGetWindowWidth()*0.5;
    yPos = ofGetWindowHeight()*0.5;
    
    pos.x = ofGetMouseX();
    pos.y = ofGetMouseY();
    
    vel.x = 0;
    vel.y = 0;
    
}

//--------------------------------------------------------------
void testApp::update(){
    
   //wrap borders
    
    if(pos.x>ofGetWindowWidth()){
        pos.x=0;
    }
    
    if(pos.y>ofGetWindowHeight()){
        pos.y=0;
    }
    
    if(pos.x<0){
        pos.x=ofGetWindowWidth();
    }
    
    if(pos.y<0){
        pos.y=ofGetWindowHeight();
    }
    
    
   // pos+=vel;
    
  /*  if(speedX>0){
    speedX--;
    } else if(speedX<0){
        speedX++;
    }
    
    
    if(speedY>0){
    speedY--;
    } else if(speedY<0){
        speedY++;
    }

  
    pos.x+=speedX;
    pos.y+=speedY;
   
   */
}

//--------------------------------------------------------------
void testApp::draw(){
    ofBackgroundGradient(ofColor::white, ofColor(255,250,230), OF_GRADIENT_CIRCULAR);

    ofSetColor(255, 100, 0);
    ofCircle(pos.x,pos.y,myCircleRadius);


}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

    
}

//--------------------------------------------------------------
void testApp::keyReleased(int key){


    
}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y){

    
}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){
 

    
}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){


    
}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

    
   
   
    ofGetPreviousMouseX();
    ofGetPreviousMouseY();
    
}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}