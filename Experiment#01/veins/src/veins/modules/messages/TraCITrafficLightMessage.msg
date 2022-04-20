namespace veins;

class DemoSafetyMessage;
enum TrafficLightAtrributeType {
    NONE = 0;
    LOGICID = 1;
    PHASEID = 2;
    SWITCHTIME = 3;
    STATE = 4;
};

enum TrafficLightChangeSource {
    UNKNOWN = 0;
    SUMO = 1;
    LOGIC = 2;
    RSU = 3;//If an RSU tries to change the values
};

// NOTE: Currently only supports changes of the IDs (due to variation in field types)
message TraCITrafficLightMessage {
    // traffic light id
    string tlId;
    // what field/attrbute of the traffic light changed?
    int changedAttribute @enum(TrafficLightAtrributeType);
    // value before the change
    string oldValue;
    // value that is to be set / was newly set
    string newValue;
    // where did the change originate
    int changeSource @enum(TrafficLightChangeSource);
};
