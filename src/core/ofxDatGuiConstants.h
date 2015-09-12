/*
    Copyright (C) 2015 Stephen Braitsch [http://braitsch.io]

    Permission is hereby granted, free of charge, to any person obtaining a copy
    of this software and associated documentation files (the "Software"), to deal
    in the Software without restriction, including without limitation the rights
    to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
    copies of the Software, and to permit persons to whom the Software is
    furnished to do so, subject to the following conditions:

    The above copyright notice and this permission notice shall be included in all
    copies or substantial portions of the Software.

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
    IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
    FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
    AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
    LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
    OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
    SOFTWARE.
*/

#pragma once
#include "ofMain.h"

static const string ofxDatGuiAssetDir = "ofxdatgui_assets";

namespace ofxDatGuiColor
{
    const ofColor GUI_BKGD          = ofColor::fromHex(0x303030);
    const ofColor ROW_BKGD          = ofColor::fromHex(0x1A1A1A);
    const ofColor LABEL             = ofColor::fromHex(0xEEEEEE);
    const ofColor TEXT              = ofColor::fromHex(0x00FF00);
    const ofColor TEXT_HIGHLIGHT    = ofColor::fromHex(0x688EB5);
    const ofColor INPUT             = ofColor::fromHex(0x303030);
    const ofColor SLIDER            = ofColor::fromHex(0x2FA1D6);
    const ofColor BUTTON_OVER       = ofColor::fromHex(0x777777);
    const ofColor BUTTON_DOWN       = ofColor::fromHex(0x222222);
    const ofColor MATRIX_BUTTON     = ofColor::fromHex(0x555555);
    
// stripe identifiers //
    const ofColor INPUT_STRIPE      = ofColor::fromHex(0xE61D5F);
    const ofColor BUTTON_STRIPE     = ofColor::fromHex(0xFFD00B);
    const ofColor TOGGLE_STRIPE     = ofColor::fromHex(0xFFD00B);
    const ofColor SLIDER_STRIPE     = ofColor::fromHex(0x2FA1D6);
    const ofColor DROPDOWN_STRIPE   = ofColor::fromHex(0x1ED36F);
}

enum ofxDatGuiAnchor
{
    NO_ANCHOR = 0,
    TOP_LEFT = 1,
    TOP_RIGHT = 2
};

enum ofxDatGuiAlignment
{
    LEFT = 1,
    CENTER = 2,
    RIGHT = 3
};




