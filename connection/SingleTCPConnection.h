#ifndef __SINGLE_TCP_CONNECTION_H__
#define __SINGLE_TCP_CONNECTION_H__

class ConnectionEventHandler;
class ProtocolHandler;

class SingleTCPConnection
{
public:
    SingleTCPConnection(void);
    virtual ~SingleTCPConnection(void);

public:
    void SetConnectionEventHandler(ConnectionEventHandler* pHandler);
    void SetProtocolHandler(ProtocolHandler* pHandler);

    int Connect(const char* pAddress, int nPort);
    int Listen(int nPort);

    int Send(const void* pBuffer, int nSize);
};

#endif  // __SINGLE_TCP_CONNECTION_H__
