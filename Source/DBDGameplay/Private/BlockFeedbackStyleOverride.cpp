#include "BlockFeedbackStyleOverride.h"

FBlockFeedbackStyleOverride::FBlockFeedbackStyleOverride()
{
	this->BlockSelfFeedbacks = TArray<ABlockFeedbackBase*>();
	this->BlockOtherFeedbacks = TArray<ABlockFeedbackBase*>();
}
