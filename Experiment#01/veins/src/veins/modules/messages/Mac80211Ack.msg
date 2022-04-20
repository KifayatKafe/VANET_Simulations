cplusplus {{
    #include "veins/modules/messages/Mac80211Pkt_m.h"
}}

namespace veins;

class Mac80211Pkt;

packet Mac80211Ack extends Mac80211Pkt {
    unsigned long messageId; // The ID of the aknowledged packet
}
