#include "BorderTile2.h"

ABorderTile2::ABorderTile2()
{
	this->Borders = TArray<FBorderElements2>();
	this->EnableBorderDirection = false;
	this->BorderDirection = EDirection::Up;
}
