#include "iostream"
#include "Poco/Net/HTTPResponse.h"
#include "Poco/Net/HTTPSClientSession.h"
#include "Poco/StreamCopier.h"

using Poco::Net::HTTPSClientSession;
using Poco::Net::HTTPResponse;
using Poco::StreamCopier;

void responseparser(HTTPSClientSession &session, HTTPResponse &responseMessage){
    std::istream& stream = session.receiveResponse(responseMessage);
    StreamCopier::copyStream(stream, std::cout);
}
