cplusplus {{
#include "veins/base/messages/AirFrame_m.h"
using veins::AirFrame;
}}

namespace veins;

class AirFrame;

//
// Extension of base AirFrame message to have the underMinPowerLevel field
//
message AirFrame11p extends AirFrame {
    bool underMinPowerLevel = false;
    bool wasTransmitting = false;
}
