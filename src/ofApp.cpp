#include "ofApp.h"
//--------------------------------------------------------------
void ofApp::setup(){
	gui.setup();
	ofBackground(0);
	gui.add(n.setup("NUMBER OF ITERATIONS", 6, 0, 100));
	gui.add(d.setup("DEGREES", 71, 0, 360));
	gui.add(sf.setup("SCALING FACTOR", 200, 50, 500));
	//gui.add(number.set("NUMBER", 2, 0, 100));
	//ofSetFrameRate(60);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	gui.draw();
	
	ofTranslate(ofGetWindowHeight() / 2, ofGetWindowWidth() / 2);
	//ofCircle(0, 0, 10);
	ofBeginShape();
	for (float i = 0; i < 361; i++)
	{
		ofSetLineWidth(1);
		ofSetColor(255,255,255);
		ofNoFill();
		float k = i* d;
		//k = ofDegToRad(k);
		float r = sin(ofDegToRad(n * k));
		float x = r * cos(ofDegToRad(k));
		float y = r * sin(ofDegToRad(k));
		//if(i%2==0)
		//std::cout << sin(ofDegToRad(2.3)) << std::endl;
		ofVertex(sf * x, sf * y);
	}
	ofEndShape();
	//OUTLINE
	ofBeginShape();
	for (float i = 0; i < 361; i++)
	{
		ofSetLineWidth(.5);
		ofNoFill();
		ofSetColor(255, 0, 255);
		float k = i;
		//k = ofDegToRad(k);
		float r = sin(ofDegToRad(n * k));
		float x = r * cos(ofDegToRad(k));
		float y = r * sin(ofDegToRad(k));
		//if(i%2==0)
		//std::cout << k << " ";
		ofVertex(sf * x, sf * y);
	}
	ofEndShape();
	//ofTranslate(540,540);
	//gui.draw();
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
