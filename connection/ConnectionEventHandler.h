#ifndef __CONNECTION_EVENT_HANDLER_H__
#define __CONNECTION_EVENT_HANDLER_H__

class ConnectionEventHandler
{
public:
    virtual ~ConnectionEventHandler() {}

public:
    virtual void OnConnectted(void) = 0;
    virtual void ConnectFailed(int nErrorCode) = 0;

    virtual void OnDisconnectted(void) = 0;
};

#endif  //__CONNECTION_EVENT_HANDLER_H__
