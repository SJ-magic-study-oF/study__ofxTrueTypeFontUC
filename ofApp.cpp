/************************************************************
************************************************************/
#include "ofApp.h"

/************************************************************
************************************************************/

//--------------------------------------------------------------
void ofApp::setup(){
	/********************
	********************/
	ofSetWindowTitle( "Japanese Test" );
	ofSetWindowShape( WIDTH, HEIGHT );
	
	ofSetVerticalSync(true);
	ofSetFrameRate(60);
	ofSetEscapeQuitsApp(false);

	/********************
	********************/
	setlocale(LC_ALL, "jpn");
	font.loadFont("RictyDiminished-Regular.ttf", 30);
	
	/********************
	********************/
	FILE* fp;
	fp = fopen("../../../data/data.txt", "r");
	if(fp == NULL){
		printf("No data file\n");
		std::exit(1);
	}
	
	char buf[BUF_SIZE];
	while(fscanf(fp, "%s", buf) != EOF){
		if(strcmp(buf, "<Event>") == 0){
			fscanf(fp, "%s", buf);
			data0 = atof(buf);
			
			fscanf(fp, "%s", buf);
			phrase = buf;
			
			fscanf(fp, "%s", buf);
			data1 = atof(buf);
		}
	}
	printf("%f, %f\n", data0, data1);
}


//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	ofBackground(0);
	ofSetColor(255);
	
	font.drawString(phrase, 100, 100);
	
	/*
	char buf[256] = "こんにちは";
	// font.drawString("こんにちは", 100, 100);
	font.drawString(buf, 100, 100);
	*/
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
