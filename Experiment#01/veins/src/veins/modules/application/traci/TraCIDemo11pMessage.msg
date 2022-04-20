cplusplus 
{{
#include "veins/base/utils/Coord.h"
#include "veins/modules/messages/BaseFrame1609_4_m.h"
#include "veins/base/utils/SimpleAddress.h"
}}
namespace veins;
class BaseFrame1609_4;
class noncobject Coord;
class LAddress::L2Type extends void;
packet TraCIDemo11pMessage extends BaseFrame1609_4 
{
    string demoData="Hi how are you";
    LAddress::L2Type senderAddress = -1;
    int serial = 0;
}