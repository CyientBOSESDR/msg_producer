#include <iostream>
#include "ossie/ossieSupport.h"

#include "msg_producer.h"
int main(int argc, char* argv[])
{
    msg_producer_i* msg_producer_servant;
    Component::start_component(msg_producer_servant, argc, argv);
    return 0;
}

