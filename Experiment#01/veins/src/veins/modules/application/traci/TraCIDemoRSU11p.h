#pragma once
#include "veins/modules/application/ieee80211p/DemoBaseApplLayer.h"
using namespace omnetpp;
namespace veins
{
class VEINS_API TraCIDemoRSU11p : public DemoBaseApplLayer
{
public:
    void initialize(int stage) override;
    //kafe code
    int ID;
    int category;
    opp_string name;
    double x_cord;
    double y_cord;
    opp_string address;
    opp_string description;
    int lifeTimeofService;
    int counting;
    int count_service;
    //end
    void finish() override;
protected:
    void handleSelfMsg(cMessage* msg) override;
    //void onBSM(DemoSafetyMessage* bsm) override;
    //void onWSM(BaseFrame1609_4* wsm) override;
    //void onWSA(DemoServiceAdvertisment* wsa) override;
    //void handlePositionUpdate(cObject* obj) override;
    //kafe code
    bool sentMessage;
    int firstService;
    int serviceSendNow;
    int numRSU;
    int lastService;
    int ttl;
    double serviceInterval;
    //cMessage* serviceAdvertisementEvent; //need to change to cMessage* sendAdvEvt
    void sendAdvertisement(int var);
public:
    void prepareServices();
    //end
};
}
