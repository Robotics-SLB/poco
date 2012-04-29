//
// Binder.cpp
//
// $Id: //poco/Main/Data/testsuite/src/Binder.cpp#4 $
//
// Copyright (c) 2006, Applied Informatics Software Engineering GmbH.
// and Contributors.
//
// Permission is hereby granted, free of charge, to any person or organization
// obtaining a copy of the software and accompanying documentation covered by
// this license (the "Software") to use, reproduce, display, distribute,
// execute, and transmit the Software, and to prepare derivative works of the
// Software, and to permit third-parties to whom the Software is furnished to
// do so, all subject to the following:
// 
// The copyright notices in the Software and this entire statement, including
// the above license grant, this restriction and the following disclaimer,
// must be included in all copies of the Software, in whole or in part, and
// all derivative works of the Software, unless such copies or derivative
// works are solely in the form of machine-executable object code generated by
// a source language processor.
// 
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE, TITLE AND NON-INFRINGEMENT. IN NO EVENT
// SHALL THE COPYRIGHT HOLDERS OR ANYONE DISTRIBUTING THE SOFTWARE BE LIABLE
// FOR ANY DAMAGES OR OTHER LIABILITY, WHETHER IN CONTRACT, TORT OR OTHERWISE,
// ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
// DEALINGS IN THE SOFTWARE.
//


#include "Binder.h"
#include "Poco/Data/LOB.h"
#include "Poco/Exception.h"


namespace Poco {
namespace Data {
namespace Test {


Binder::Binder()
{
}


Binder::~Binder()
{
}


void Binder::bind(std::size_t pos, const Poco::Int8 &val, Direction dir)
{
}


void Binder::bind(std::size_t pos, const Poco::UInt8 &val, Direction dir)
{
}


void Binder::bind(std::size_t pos, const Poco::Int16 &val, Direction dir)
{
}


void Binder::bind(std::size_t pos, const Poco::UInt16 &val, Direction dir)
{
}


void Binder::bind(std::size_t pos, const Poco::Int32 &val, Direction dir)
{
}


void Binder::bind(std::size_t pos, const Poco::UInt32 &val, Direction dir)
{
}


void Binder::bind(std::size_t pos, const Poco::Int64 &val, Direction dir)
{
}


void Binder::bind(std::size_t pos, const Poco::UInt64 &val, Direction dir)
{
}


#ifndef POCO_LONG_IS_64_BIT
void Binder::bind(std::size_t pos, const long& val, Direction dir)
{
}
#endif


void Binder::bind(std::size_t pos, const bool &val, Direction dir)
{
}


void Binder::bind(std::size_t pos, const float &val, Direction dir)
{
}


void Binder::bind(std::size_t pos, const double &val, Direction dir)
{
}


void Binder::bind(std::size_t pos, const char &val, Direction dir)
{
}


void Binder::bind(std::size_t pos, const char* const &pVal, Direction dir)
{
}


void Binder::bind(std::size_t pos, const std::string& val, Direction dir)
{
}


void Binder::bind(std::size_t pos, const BLOB& val, Direction dir)
{
}


void Binder::bind(std::size_t pos, const CLOB& val, Direction dir)
{
}


void Binder::bind(std::size_t pos, const Date& val, Direction dir)
{
}


void Binder::bind(std::size_t pos, const Time& val, Direction dir)
{
}


void Binder::bind(std::size_t pos, const DateTime& val, Direction dir)
{
}


void Binder::bind(std::size_t pos, const NullData& val, Direction dir)
{
}


void Binder::reset()
{
}


} } } // namespace Poco::Data::Test
