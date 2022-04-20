namespace veins;

message AckTimeOutMessage {
    // The corresponding WSM's tree id
    unsigned long wsmId = -1;
    // Access category on which the AckTimer is set
    int ac = -1;
}
