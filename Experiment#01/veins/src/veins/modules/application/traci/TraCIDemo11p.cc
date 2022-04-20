#include "veins/modules/application/traci/TraCIDemo11p.h"
#include "veins/modules/application/traci/TraCIDemo11pMessage_m.h"
using namespace veins;
Define_Module(veins::TraCIDemo11p);
void TraCIDemo11p::initialize(int stage)
{
    DemoBaseApplLayer::initialize(stage);
    if (stage == 0)
    {
    }
}
void TraCIDemo11p::onWSM(BaseFrame1609_4* frame)
{
}
void TraCIDemo11p::handleSelfMsg(cMessage* msg)
{
}
