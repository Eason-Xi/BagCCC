#pragma once
#include "cocos2d.h"
#include "MacrosDefine.h"

#include "cocos-ext.h"
USING_NS_CC;
USING_NS_CC_EXT;



class Bagpanel:public CCLayer
{
public:
	Bagpanel(void);
	~Bagpanel(void);
	virtual bool init();

	void initBagPanel();
	CREATE_FUNC(Bagpanel);


private:
	CCSprite *_bg;
	cocos2d::CCLabelTTF * used_grid_lab;


};

