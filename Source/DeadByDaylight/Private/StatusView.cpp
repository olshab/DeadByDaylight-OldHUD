#include "StatusView.h"
#include "StatusViewSource.h"

class ADBDPlayer;

void AStatusView::ResetView_Implementation(const ADBDPlayer* dbdPlayer)
{

}

void AStatusView::FireNotification(const FStatusViewSource statusViewSource)
{

}

AStatusView::AStatusView()
{
	this->_isActive = false;
	this->_level = -1;
	this->_percentageFill = 0.000000;
	this->_isClockwiseTimer = false;
	this->_localDBDPlayer = NULL;
}
