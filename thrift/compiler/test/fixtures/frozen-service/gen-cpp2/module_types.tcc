/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include "src/gen-cpp2/module_types.h"

#include <thrift/lib/cpp2/GeneratedSerializationCodeHelper.h>

#include <thrift/lib/cpp2/protocol/BinaryProtocol.h>
#include <thrift/lib/cpp2/protocol/CompactProtocol.h>

namespace some { namespace ns {

template <class Protocol_>
uint32_t ModuleA::read(Protocol_* iprot) {
  uint32_t xfer = 0;
  std::string _fname;
  apache::thrift::protocol::TType _ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(_fname);

  using apache::thrift::TProtocolException;


  while (true) {
    xfer += iprot->readFieldBegin(_fname, _ftype, fid);
    if (_ftype == apache::thrift::protocol::T_STOP) {
      break;
    }
    if (fid == std::numeric_limits<int16_t>::min()) {
      this->translateFieldName(_fname, fid, _ftype);
    }
    switch (fid) {
      case 1:
      {
        if (_ftype == apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->i32Field);
          this->__isset.i32Field = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      }
      case 2:
      {
        if (_ftype == apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->strField);
          this->__isset.strField = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      }
      case 3:
      {
        if (_ftype == apache::thrift::protocol::T_LIST) {
          this->listField = std::vector<int16_t>();
          xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::list<::apache::thrift::type_class::integral>, std::vector<int16_t>>::read(*iprot, this->listField);
          this->__isset.listField = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      }
      case 4:
      {
        if (_ftype == apache::thrift::protocol::T_MAP) {
          this->mapField = std::map<std::string, int32_t>();
          xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::string, ::apache::thrift::type_class::integral>, std::map<std::string, int32_t>>::read(*iprot, this->mapField);
          this->__isset.mapField = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      }
      default:
      {
        xfer += iprot->skip(_ftype);
        break;
      }
    }
    xfer += iprot->readFieldEnd();
  }
  xfer += iprot->readStructEnd();

  return xfer;
}

template <class Protocol_>
uint32_t ModuleA::serializedSize(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("ModuleA");
  xfer += prot_->serializedFieldSize("i32Field", apache::thrift::protocol::T_I32, 1);
  xfer += prot_->serializedSizeI32(this->i32Field);
  xfer += prot_->serializedFieldSize("strField", apache::thrift::protocol::T_STRING, 2);
  xfer += prot_->serializedSizeString(this->strField);
  xfer += prot_->serializedFieldSize("listField", apache::thrift::protocol::T_LIST, 3);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::list<::apache::thrift::type_class::integral>, std::vector<int16_t>>::serializedSize<false>(*prot_, this->listField);
  xfer += prot_->serializedFieldSize("mapField", apache::thrift::protocol::T_MAP, 4);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::string, ::apache::thrift::type_class::integral>, std::map<std::string, int32_t>>::serializedSize<false>(*prot_, this->mapField);
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t ModuleA::serializedSizeZC(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("ModuleA");
  xfer += prot_->serializedFieldSize("i32Field", apache::thrift::protocol::T_I32, 1);
  xfer += prot_->serializedSizeI32(this->i32Field);
  xfer += prot_->serializedFieldSize("strField", apache::thrift::protocol::T_STRING, 2);
  xfer += prot_->serializedSizeString(this->strField);
  xfer += prot_->serializedFieldSize("listField", apache::thrift::protocol::T_LIST, 3);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::list<::apache::thrift::type_class::integral>, std::vector<int16_t>>::serializedSize<false>(*prot_, this->listField);
  xfer += prot_->serializedFieldSize("mapField", apache::thrift::protocol::T_MAP, 4);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::string, ::apache::thrift::type_class::integral>, std::map<std::string, int32_t>>::serializedSize<false>(*prot_, this->mapField);
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t ModuleA::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("ModuleA");
  xfer += prot_->writeFieldBegin("i32Field", apache::thrift::protocol::T_I32, 1);
  xfer += prot_->writeI32(this->i32Field);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("strField", apache::thrift::protocol::T_STRING, 2);
  xfer += prot_->writeString(this->strField);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("listField", apache::thrift::protocol::T_LIST, 3);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::list<::apache::thrift::type_class::integral>, std::vector<int16_t>>::write(*prot_, this->listField);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("mapField", apache::thrift::protocol::T_MAP, 4);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::string, ::apache::thrift::type_class::integral>, std::map<std::string, int32_t>>::write(*prot_, this->mapField);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

}} // some::ns
namespace some { namespace ns {

template <class Protocol_>
uint32_t ModuleB::read(Protocol_* iprot) {
  uint32_t xfer = 0;
  std::string _fname;
  apache::thrift::protocol::TType _ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(_fname);

  using apache::thrift::TProtocolException;


  while (true) {
    xfer += iprot->readFieldBegin(_fname, _ftype, fid);
    if (_ftype == apache::thrift::protocol::T_STOP) {
      break;
    }
    if (fid == std::numeric_limits<int16_t>::min()) {
      this->translateFieldName(_fname, fid, _ftype);
    }
    switch (fid) {
      case 1:
      {
        if (_ftype == apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->i32Field);
          this->__isset.i32Field = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      }
      default:
      {
        xfer += iprot->skip(_ftype);
        break;
      }
    }
    xfer += iprot->readFieldEnd();
  }
  xfer += iprot->readStructEnd();

  return xfer;
}

template <class Protocol_>
uint32_t ModuleB::serializedSize(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("ModuleB");
  xfer += prot_->serializedFieldSize("i32Field", apache::thrift::protocol::T_I32, 1);
  xfer += prot_->serializedSizeI32(this->i32Field);
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t ModuleB::serializedSizeZC(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("ModuleB");
  xfer += prot_->serializedFieldSize("i32Field", apache::thrift::protocol::T_I32, 1);
  xfer += prot_->serializedSizeI32(this->i32Field);
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t ModuleB::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("ModuleB");
  xfer += prot_->writeFieldBegin("i32Field", apache::thrift::protocol::T_I32, 1);
  xfer += prot_->writeI32(this->i32Field);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

}} // some::ns
namespace some { namespace ns {

template <class Protocol_>
uint32_t ExceptionA::read(Protocol_* iprot) {
  uint32_t xfer = 0;
  std::string _fname;
  apache::thrift::protocol::TType _ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(_fname);

  using apache::thrift::TProtocolException;


  while (true) {
    xfer += iprot->readFieldBegin(_fname, _ftype, fid);
    if (_ftype == apache::thrift::protocol::T_STOP) {
      break;
    }
    if (fid == std::numeric_limits<int16_t>::min()) {
      this->translateFieldName(_fname, fid, _ftype);
    }
    switch (fid) {
      case 1:
      {
        if (_ftype == apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->code);
          this->__isset.code = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      }
      case 2:
      {
        if (_ftype == apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->msg);
          this->__isset.msg = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      }
      default:
      {
        xfer += iprot->skip(_ftype);
        break;
      }
    }
    xfer += iprot->readFieldEnd();
  }
  xfer += iprot->readStructEnd();

  return xfer;
}

template <class Protocol_>
uint32_t ExceptionA::serializedSize(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("ExceptionA");
  xfer += prot_->serializedFieldSize("code", apache::thrift::protocol::T_I32, 1);
  xfer += prot_->serializedSizeI32(this->code);
  xfer += prot_->serializedFieldSize("msg", apache::thrift::protocol::T_STRING, 2);
  xfer += prot_->serializedSizeString(this->msg);
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t ExceptionA::serializedSizeZC(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("ExceptionA");
  xfer += prot_->serializedFieldSize("code", apache::thrift::protocol::T_I32, 1);
  xfer += prot_->serializedSizeI32(this->code);
  xfer += prot_->serializedFieldSize("msg", apache::thrift::protocol::T_STRING, 2);
  xfer += prot_->serializedSizeString(this->msg);
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t ExceptionA::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("ExceptionA");
  xfer += prot_->writeFieldBegin("code", apache::thrift::protocol::T_I32, 1);
  xfer += prot_->writeI32(this->code);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("msg", apache::thrift::protocol::T_STRING, 2);
  xfer += prot_->writeString(this->msg);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

}} // some::ns
namespace some { namespace ns {

template <class Protocol_>
uint32_t ExceptionB::read(Protocol_* iprot) {
  uint32_t xfer = 0;
  std::string _fname;
  apache::thrift::protocol::TType _ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(_fname);

  using apache::thrift::TProtocolException;


  while (true) {
    xfer += iprot->readFieldBegin(_fname, _ftype, fid);
    if (_ftype == apache::thrift::protocol::T_STOP) {
      break;
    }
    if (fid == std::numeric_limits<int16_t>::min()) {
      this->translateFieldName(_fname, fid, _ftype);
    }
    switch (fid) {
      case 1:
      {
        if (_ftype == apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->code);
          this->__isset.code = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      }
      case 2:
      {
        if (_ftype == apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->msg);
          this->__isset.msg = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      }
      default:
      {
        xfer += iprot->skip(_ftype);
        break;
      }
    }
    xfer += iprot->readFieldEnd();
  }
  xfer += iprot->readStructEnd();

  return xfer;
}

template <class Protocol_>
uint32_t ExceptionB::serializedSize(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("ExceptionB");
  xfer += prot_->serializedFieldSize("code", apache::thrift::protocol::T_I32, 1);
  xfer += prot_->serializedSizeI32(this->code);
  xfer += prot_->serializedFieldSize("msg", apache::thrift::protocol::T_STRING, 2);
  xfer += prot_->serializedSizeString(this->msg);
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t ExceptionB::serializedSizeZC(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("ExceptionB");
  xfer += prot_->serializedFieldSize("code", apache::thrift::protocol::T_I32, 1);
  xfer += prot_->serializedSizeI32(this->code);
  xfer += prot_->serializedFieldSize("msg", apache::thrift::protocol::T_STRING, 2);
  xfer += prot_->serializedSizeString(this->msg);
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t ExceptionB::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("ExceptionB");
  xfer += prot_->writeFieldBegin("code", apache::thrift::protocol::T_I32, 1);
  xfer += prot_->writeI32(this->code);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("msg", apache::thrift::protocol::T_STRING, 2);
  xfer += prot_->writeString(this->msg);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

}} // some::ns
