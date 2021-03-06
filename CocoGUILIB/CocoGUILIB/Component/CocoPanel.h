/*
 * Copyright (c) 2012 Chukong Technologies, Inc.
 *
 * http://www.sweetpome.com
 * http://tools.cocoachina.com
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the
 * "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sublicense, and/or sell copies of the Software, and to permit
 * persons to whom the Software is furnished to do so, subject to the
 * following conditions:
 *
 * The above copyright notice and this permission notice shall be included
 * in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN
 * NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,
 * DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR
 * OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE
 * USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

#ifndef __CocoGUI__CocoPanel__
#define __CocoGUI__CocoPanel__

#include "CocoContainerWidget.h"
#include "UISprite.h"
#include "UIScale9Sprite.h"

namespace cs {
    class CocoPanel : public CocoContainerWidget
    {
    public:
        CocoPanel();
        virtual ~CocoPanel();
        static CocoPanel* create();
//        static CocoPanel* create(cocos2d::CCDictionary* options);
//        static CocoPanel* createWithJson(sp::SPJsonDictionary* options);
        virtual bool init();
//        virtual bool initWithOptions(cocos2d::CCDictionary* options);
//        virtual bool initWithOptions_json(sp::SPJsonDictionary* options);
        void setBackGroundImage(const char* fileName,bool useSpriteFrame = false);
        void setBackGroundImageScale9(const char* fileName,cocos2d::CCRect capInsets,bool useSpriteFrame = false);
//        virtual CRenderNode* getValidNode();
        virtual void setColorAndSize(int r,int g,int b,int o,float width,float height);
        virtual void setSize(float width,float height);
        void setBackGroundImageScale9Enable(bool able);
        virtual void setColor(int r,int g,int b);
        virtual void setOpacity(int opcity);
    protected:
        bool m_bBackGroundScale9Enable;
        UIElement* m_pBackGroundImage;
    };
}

#endif /* defined(__CocoGUI__CocoPanel__) */
