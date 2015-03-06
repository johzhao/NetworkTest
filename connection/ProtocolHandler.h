#ifndef __PROTOCOL_HANDLER_H__
#define __PROTOCOL_HANDLER_H__

class ProtocolHandler
{
public:
    virtual ~ProtocolHandler() {}

public:
    virtual void OnSendComplete(const void* pBuffer, int nSize) = 0;
    virtual void SendFailed(int nErrorCode) = 0;

    virtual void OnReceived(const void* pBuffer, int nSize) = 0;
};
#endif  // __PROTOCOL_HANDLER_H__
