# study__ofxTrueTypeFontUC #

## 環境 ##
*	OS X El Capitan(10.11.6)
*	Xcode : 7.2
*	oF : 0.9.0

## add on ##
ofxTrueTypeFontUC

## Contents ##
ofTrueTypeFont は日本語を扱えないので、ofxTrueTypeFontUCで対応する。
日本語混じりのtext fileからdataを読み込み、利用するcaseを考える。
ただし、英語は内部分岐に使用、日本語は表示のみとする。  
  
ofxTrueTypeFontUCは、下のように、非常に自然に表示が行える。
	char buf[256] = "こんにちは";
	// font.drawString("こんにちは", 100, 100);
	font.drawString(buf, 100, 100);
L"xxx"でなく、charをそのまま渡せばOK.
	
code上、日本語は、分岐判定などには一切使わず、
表示のみなので、一旦char buf[]で受け、これをstringに渡し、string(phrase)を
	font.drawString(phrase, 100, 100);
と言う感じで渡せばOK.


## Device ##


## note ##






