#pragma once
#include "veins/modules/application/ieee80211p/DemoBaseApplLayer.h"
namespace veins
{
class VEINS_API TraCIDemo11p : public DemoBaseApplLayer
{
public:
    void initialize(int stage) override;
protected:
    void onWSM(BaseFrame1609_4* wsm) override;
    void handleSelfMsg(cMessage* msg) override;
};
}
