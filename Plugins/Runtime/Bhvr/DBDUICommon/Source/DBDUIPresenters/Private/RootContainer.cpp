#include "RootContainer.h"

URootContainer::URootContainer()
{
	this->GameLayer = EGameLayer::Default;
	this->UnfocusedOpacity = 0.200000;
	this->_presenterParentWidgets = TMap<TSubclassOf<UPresenterParentWidget>, UPresenterParentWidget*>();
	this->_rootWidget = NULL;
}
