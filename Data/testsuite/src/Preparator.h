//
// Preparator.h
//
// $Id: //poco/Main/Data/testsuite/src/Preparator.h#3 $
//
// Definition of the Preparator class.
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


#ifndef Data_Test_Preparator_INCLUDED
#define Data_Test_Preparator_INCLUDED


#include "Poco/Data/AbstractPreparator.h"
#include "Poco/Any.h"


namespace Poco {
namespace Data {
namespace Test {


class Preparator: public Poco::Data::AbstractPreparator
	/// A no-op implementation of AbstractPreparator for testing.
{
public:
	Preparator();
		/// Creates the Preparator.

	~Preparator();
		/// Destroys the Preparator.

	void prepare(std::size_t pos, const Poco::Int8&);
		/// Preparations an Int8.

	void prepare(std::size_t pos, const Poco::UInt8&);
		/// Preparations an UInt8.

	void prepare(std::size_t pos, const Poco::Int16&);
		/// Preparations an Int16.

	void prepare(std::size_t pos, const Poco::UInt16&);
		/// Preparations an UInt16.

	void prepare(std::size_t pos, const Poco::Int32&);
		/// Preparations an Int32.

	void prepare(std::size_t pos, const Poco::UInt32&);
		/// Preparations an UInt32.

	void prepare(std::size_t pos, const Poco::Int64&);
		/// Preparations an Int64.

	void prepare(std::size_t pos, const Poco::UInt64&);
		/// Preparations an UInt64.

#ifndef POCO_LONG_IS_64_BIT
	void prepare(std::size_t pos, const long&);
		/// Preparations a long.
#endif

	void prepare(std::size_t pos, const bool&);
		/// Preparations a boolean.

	void prepare(std::size_t pos, const float&);
		/// Preparations a float.

	void prepare(std::size_t pos, const double&);
		/// Preparations a double.

	void prepare(std::size_t pos, const char&);
		/// Preparations a single character.

	void prepare(std::size_t pos, const std::string&);
		/// Preparations a string.

	void prepare(std::size_t pos, const Poco::Data::BLOB&);
		/// Preparations a BLOB.

	void prepare(std::size_t pos, const Poco::Data::CLOB&);
		/// Preparations a CLOB.

	void prepare(std::size_t pos, const Poco::Data::Date&);
		/// Preparations a Date.

	void prepare(std::size_t pos, const Poco::Data::Time&);
		/// Preparations a Time.

	void prepare(std::size_t pos, const Poco::DateTime&);
		/// Preparations a DateTime.

	void prepare(std::size_t pos, const Poco::Any&);
		/// Preparations an Any.

	void prepare(std::size_t pos, const Poco::Dynamic::Var&);
		/// Preparations a Var.
};


} } } // namespace Poco::Data::Test


#endif // Data_Test_Preparator_INCLUDED
