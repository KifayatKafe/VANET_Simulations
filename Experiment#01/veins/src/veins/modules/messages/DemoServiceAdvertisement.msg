cplusplus 
{{
#include "veins/base/utils/Coord.h"
#include "veins/modules/messages/BaseFrame1609_4_m.h"
}}
namespace veins;
class BaseFrame1609_4;
class noncobject Coord;
packet DemoServiceAdvertisment extends BaseFrame1609_4 
{
    int targetChannel;
    string serviceDescription;
}
