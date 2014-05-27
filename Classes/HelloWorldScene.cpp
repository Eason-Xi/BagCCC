#include "HelloWorldScene.h"
#include "UI/Bagpanel.h"
USING_NS_CC;

CCScene* HelloWorld::createScene()
{
    // 'scene' is an autorelease object
    auto scene = CCScene::create();
    
    // 'layer' is an autorelease object
    auto layer = HelloWorld::create();

    // add layer as a child to scene
    scene->addChild(layer);

    // return the scene
    return scene;
}

// on "init" you need to initialize your instance
bool HelloWorld::init()
{
    //////////////////////////////
    // 1. super init first
    if ( !CCLayer::init() )
    {
        return false;
    }
    
	Bagpanel* bag = Bagpanel::create();
	this->addChild(bag);
    
    return true;
}



