/*
 * (c) 2020 Copyright, Real-Time Innovations, Inc.  All rights reserved.
 *
 * RTI grants Licensee a license to use, modify, compile, and create derivative
 * works of the Software.  Licensee has the right to distribute object form
 * only for use with RTI products.  The Software is provided "as is", with no
 * warranty of any type, including any warranty for fitness for any purpose.
 * RTI is under no obligation to maintain or support the Software.  RTI shall
 * not be liable for any incidental or consequential damages arising out of the
 * use or inability to use the software.
 */

#include "ConnectorBase.hpp"

ConnectorBase::ConnectorBase(const std::string topicName)
        : topicName_(topicName)
{
}

ConnectorBase::~ConnectorBase()
{
}

auto ConnectorBase::connect() -> bool
{
    connected_ = true;
    return connected_;
}

void ConnectorBase::disconnect()
{
    connected_ = false;
}

auto ConnectorBase::connected() -> bool
{
    return connected_;
}
