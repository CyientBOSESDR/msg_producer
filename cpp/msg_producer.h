#ifndef MSG_PRODUCER_I_IMPL_H
#define MSG_PRODUCER_I_IMPL_H

#include "msg_producer_base.h"

class msg_producer_i : public msg_producer_base
{
    ENABLE_LOGGING
    public:
        msg_producer_i(const char *uuid, const char *label);
        ~msg_producer_i();

        void constructor();

        int serviceFunction();

    protected:
};

#endif // MSG_PRODUCER_I_IMPL_H
