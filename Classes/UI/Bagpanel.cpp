#include "Bagpanel.h"
#include "UIDefine.h"


#define BAG_PAGE_NUM  3 //��3ҳ

#define VERTICAL_NUM    4 //��4
#define HORIZONTAL_NUM  9 //��9

#define NUM_ON_ONE_PAGE  36     //һҳ�ĸ���
#define GRID_W_H         80     //grid ��͸�
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
	
	//����
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


