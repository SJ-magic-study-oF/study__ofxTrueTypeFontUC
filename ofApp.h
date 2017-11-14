/************************************************************
参考URL
	openFrameworksで日本語を表示する方法
		https://qiita.com/0x50/items/5b0df23cac2dfbc60247
		
	addon
		https://github.com/hironishihara/ofxTrueTypeFontUC
		
description
	ofxTrueTypeFontUCは、下のように、非常に自然に表示が行える。
		char buf[256] = "こんにちは";
		// font.drawString("こんにちは", 100, 100);
		font.drawString(buf, 100, 100);
	L"xxx"でなく、charをそのまま渡せばOK.
		
	code上、日本語は、分岐判定などには一切使わず、
	表示のみなので、一旦char buf[]で受け、これをstringに渡し、string(phrase)を
		font.drawString(phrase, 100, 100);
	と言う感じで渡せばOK.
************************************************************/
#pragma once

/************************************************************
************************************************************/
#include "ofMain.h"
#include "ofxTrueTypeFontUC.h"

/************************************************************
************************************************************/
class ofApp : public ofBaseApp{
private:
	enum{
		WIDTH = 1280,
		HEIGHT = 720,
	};
	enum{
		BUF_SIZE = 1000,
	};
	
	ofxTrueTypeFontUC font;
	
	double data0;
	double data1;
	string phrase;
	
public:
	void setup();
	void update();
	void draw();

	void keyPressed(int key);
	void keyReleased(int key);
	void mouseMoved(int x, int y );
	void mouseDragged(int x, int y, int button);
	void mousePressed(int x, int y, int button);
	void mouseReleased(int x, int y, int button);
	void mouseEntered(int x, int y);
	void mouseExited(int x, int y);
	void windowResized(int w, int h);
	void dragEvent(ofDragInfo dragInfo);
	void gotMessage(ofMessage msg);
};
