#pragma once

#include "ofMain.h"
#include "ofxGui.h"

#include "BouncyBall.h"

class ofApp : public ofBaseApp {

	public:
		static const int nBalls = 10;
		vector<BouncyBall> balls;

		ofxPanel gui;
		ofParameter<int> radius;
		ofParameter<float> speedX;
		ofParameter<float> speedY;
		ofParameter<ofColor> color;

		ofArduino arduino;
		void setupArduino(const int& version);

		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
};