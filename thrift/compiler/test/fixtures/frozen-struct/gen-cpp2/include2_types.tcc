/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include "src/gen-cpp2/include2_types.h"

#include <thrift/lib/cpp2/GeneratedSerializationCodeHelper.h>

#include <thrift/lib/cpp2/protocol/BinaryProtocol.h>
#include <thrift/lib/cpp2/protocol/CompactProtocol.h>

namespace some { namespace ns {

template <class Protocol_>
uint32_t IncludedB::read(Protocol_* iprot) {
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
uint32_t IncludedB::serializedSize(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("IncludedB");
  xfer += prot_->serializedFieldSize("i32Field", apache::thrift::protocol::T_I32, 1);
  xfer += prot_->serializedSizeI32(this->i32Field);
  xfer += prot_->serializedFieldSize("strField", apache::thrift::protocol::T_STRING, 2);
  xfer += prot_->serializedSizeString(this->strField);
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t IncludedB::serializedSizeZC(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("IncludedB");
  xfer += prot_->serializedFieldSize("i32Field", apache::thrift::protocol::T_I32, 1);
  xfer += prot_->serializedSizeI32(this->i32Field);
  xfer += prot_->serializedFieldSize("strField", apache::thrift::protocol::T_STRING, 2);
  xfer += prot_->serializedSizeString(this->strField);
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t IncludedB::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("IncludedB");
  xfer += prot_->writeFieldBegin("i32Field", apache::thrift::protocol::T_I32, 1);
  xfer += prot_->writeI32(this->i32Field);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("strField", apache::thrift::protocol::T_STRING, 2);
  xfer += prot_->writeString(this->strField);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

}} // some::ns
