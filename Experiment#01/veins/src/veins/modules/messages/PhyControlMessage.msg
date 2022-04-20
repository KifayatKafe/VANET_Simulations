namespace veins;

//
// Defines a control message that can be associated with a MAC frame to set
// transmission power and datarate on a per packet basis
//
message PhyControlMessage {
    //modulation and coding scheme to be used (see enum TxMCS in ConstsPhy.h)
    int mcs = -1;
    //transmission power to be used in mW
    double txPower_mW = -1;
}
