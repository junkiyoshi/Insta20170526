#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetFrameRate(30);
	ofBackground(0);
	ofSetWindowTitle("Sphere");

	this->radius = 250;

}

//--------------------------------------------------------------
void ofApp::update(){
}

//--------------------------------------------------------------
void ofApp::draw(){

	this->cam.begin();

	int span = 4;
	for (int i = 0; i < 360; i += span) {
		for (int j = 0; j < 180; j += span) {
			int x = radius * cos(i * DEG_TO_RAD) * sin(j * DEG_TO_RAD);
			int y = radius * sin(i * DEG_TO_RAD) * sin(j * DEG_TO_RAD);
			int z = radius * cos(j * DEG_TO_RAD);

			ofVec3f location = ofVec3f(x, y, z);
			float noise_value = ofNoise(x / (span * 100.f), y / (span * 100.f), z / (span * 100.f), ofGetFrameNum() * 0.05);
			if (noise_value > 0.55) {
				location *= 1.25;
			} else {

			}
			ofSetColor(255);
			ofSphere(location, 5);
		}
	}

	this->cam.end();
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
