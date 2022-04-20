cplusplus 
{{
#include "veins/base/utils/SimpleAddress.h"
}}
namespace veins;
class LAddress::L2Type extends void;
packet BaseFrame1609_4 
{
    //Channel Number on which this packet was sent
    int channelNumber;
    
    //User priority with which this packet was sent (note the AC mapping rules in Mac1609_4::mapUserPriority)
    int userPriority = 7;
    
    //Unique number to identify the service
    int psid = 0;
    
    //Recipient of frame (-1 for any)
    LAddress::L2Type recipientAddress = -1;
}
