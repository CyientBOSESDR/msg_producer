#ifndef MSG_PRODUCER_BASE_IMPL_BASE_H
#define MSG_PRODUCER_BASE_IMPL_BASE_H

#include <boost/thread.hpp>
#include <ossie/Component.h>
#include <ossie/ThreadedComponent.h>

#include <ossie/MessageInterface.h>
#include "struct_props.h"

class msg_producer_base : public Component, protected ThreadedComponent
{
    public:
        msg_producer_base(const char *uuid, const char *label);
        ~msg_producer_base();

        void start() throw (CF::Resource::StartError, CORBA::SystemException);

        void stop() throw (CF::Resource::StopError, CORBA::SystemException);

        void releaseObject() throw (CF::LifeCycle::ReleaseError, CORBA::SystemException);

        void loadProperties();

    protected:
        // Member variables exposed as properties
        /// Message structure definition for Component_Members
        Component_Members_struct Component_Members;

        // Ports
        /// Port: message_out
        MessageSupplierPort *message_out;

    private:
};
#endif // MSG_PRODUCER_BASE_IMPL_BASE_H
