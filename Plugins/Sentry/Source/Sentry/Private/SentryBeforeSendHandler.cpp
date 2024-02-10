#include "SentryBeforeSendHandler.h"

class USentryEvent;
class USentryHint;

USentryEvent* USentryBeforeSendHandler::HandleBeforeSend_Implementation(USentryEvent* Event, USentryHint* Hint)
{
	return NULL;
}

USentryBeforeSendHandler::USentryBeforeSendHandler()
{

}
