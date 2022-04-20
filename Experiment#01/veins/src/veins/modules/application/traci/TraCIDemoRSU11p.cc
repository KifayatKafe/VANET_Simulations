#include "veins/modules/application/traci/TraCIDemoRSU11p.h"
#include "veins/modules/application/traci/TraCIDemo11pMessage_m.h"
using namespace veins;
Define_Module(veins::TraCIDemoRSU11p);
void TraCIDemoRSU11p::initialize(int stage)
{
    DemoBaseApplLayer::initialize(stage);
    if (stage == 0)
    {
    }
    else if (stage == 1)
    {
    }
}
void TraCIDemoRSU11p::handleSelfMsg(cMessage* msg)
{
    //DemoBaseApplLayer::handleSelfMsg(msg);

    {
        switch (msg->getKind())
        {
        case SEND_BEACON_EVT:
        {
            DemoSafetyMessage* bsm = new DemoSafetyMessage();
            //TraCIDemo11pMessage* bsm= new TraCIDemo11pMessage();
            populateWSM(bsm);
            sendDown(bsm);
            scheduleAt(simTime() + beaconInterval, sendBeaconEvt);
            std::cout<<"RSU is sending a Beacon event"<<endl;
            EV<<"RSU is sending a Beacon event"<<endl;
            break;
        }
        case SEND_WSA_EVT:
        {
            DemoServiceAdvertisment* wsa = new DemoServiceAdvertisment();
            populateWSM(wsa);
            sendDown(wsa);
            scheduleAt(simTime() + wsaInterval, sendWSAEvt);
            std::cout<<"RSU is sending a WSA event"<<endl;
            EV<<"RSU is sending a WSA event"<<endl;
            break;
        }

        default:
        {
            if (msg) EV_WARN << "APP: Error: Got Self Message of unknown kind! Name: " << msg->getName() << endl;
            break;
        }
        }
    }
}

void TraCIDemoRSU11p::finish()
{
    DemoBaseApplLayer::finish();
}
