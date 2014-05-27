#include "Bagpanel.h"
#include "UIDefine.h"


#define BAG_PAGE_NUM  3 //共3页

#define VERTICAL_NUM    4 //竖4
#define HORIZONTAL_NUM  9 //横9

#define NUM_ON_ONE_PAGE  36     //一页的个数
#define GRID_W_H         80     //grid 宽和高
#define BAG_BEGIN_SLOT   1001 

#define ZORDER_0  0
#define ZORDER_1  1 

Bagpanel::Bagpanel(void)
{
}


Bagpanel::~Bagpanel(void)
{
}

bool Bagpanel::init()
{
	if (!CCLayer::init())
	{
		return false;
	}

	initBagPanel();
	return true;
}

void Bagpanel::initBagPanel()
{
	WINSIZE;
	
	CCSize scale9Size;
	const char* scale9Image;
	
	//背景
	float bgWidth =  winSize.width;
	float bgHeight =  winSize.height-80;
	this->setContentSize(CCSizeMake(bgWidth,bgHeight));
	this->setPosition(0,80);

	scale9Size = CCSize(bgWidth,bgHeight);
	scale9Image = MAIN_BG_387_164;
	//_bg = CCScale9Sprite::createWithSpriteFrameName(scale9Image, MAIN_BG_387_164_CCRect);
	_bg->setContentSize(scale9Size);
	_bg->setAnchorPoint(ccp(0,0));
	_bg->setPosition(ccp(0,0));
	this->addChild(_bg,ZORDER_0);

	
}


