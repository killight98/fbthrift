/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include <thrift/lib/cpp2/gen/module_metadata_cpp.h>
#include "thrift/compiler/test/fixtures/basic/gen-cpp2/module_metadata.h"

namespace apache {
namespace thrift {
namespace detail {
namespace md {
using ThriftMetadata = ::apache::thrift::metadata::ThriftMetadata;
using ThriftPrimitiveType = ::apache::thrift::metadata::ThriftPrimitiveType;
using ThriftType = ::apache::thrift::metadata::ThriftType;
using ThriftService = ::apache::thrift::metadata::ThriftService;
using ThriftServiceContext = ::apache::thrift::metadata::ThriftServiceContext;
using ThriftFunctionGenerator = void (*)(ThriftMetadata&, ThriftService&);

void EnumMetadata<::cpp2::MyEnum>::gen(ThriftMetadata& metadata) {
  auto res = metadata.enums.emplace("module.MyEnum", ::apache::thrift::metadata::ThriftEnum{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftEnum& enum_metadata = res.first->second;
  enum_metadata.name = "module.MyEnum";
  using EnumTraits = TEnumTraits<::cpp2::MyEnum>;
  for (std::size_t i = 0; i < EnumTraits::size; ++i) {
    enum_metadata.elements.emplace(static_cast<int32_t>(EnumTraits::values[i]), EnumTraits::names[i]);
  }
}

void StructMetadata<::cpp2::MyDataItem>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs.emplace("module.MyDataItem", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftStruct& module_MyDataItem = res.first->second;
  module_MyDataItem.name = "module.MyDataItem";
  module_MyDataItem.is_union = false;
}
void StructMetadata<::cpp2::MyStruct>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs.emplace("module.MyStruct", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftStruct& module_MyStruct = res.first->second;
  module_MyStruct.name = "module.MyStruct";
  module_MyStruct.is_union = false;
  static const std::tuple<int32_t, const char*, bool, std::unique_ptr<MetadataTypeInterface>>
  module_MyStruct_fields[] = {
    std::make_tuple(1, "MyIntField", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I64_TYPE)),
    std::make_tuple(2, "MyStringField", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE)),
    std::make_tuple(3, "MyDataField", false, std::make_unique<Typedef>("module.MyDataItem", std::make_unique<Struct< ::cpp2::MyDataItem>>("module.MyDataItem"))),
    std::make_tuple(4, "myEnum", false, std::make_unique<Enum< ::cpp2::MyEnum>>("module.MyEnum")),
  };
  for (const auto& f : module_MyStruct_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id = std::get<0>(f);
    field.name = std::get<1>(f);
    field.is_optional = std::get<2>(f);
    std::get<3>(f)->writeAndGenType(field.type, metadata);
    module_MyStruct.fields.push_back(std::move(field));
  }
}
void StructMetadata<::cpp2::MyUnion>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs.emplace("module.MyUnion", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftStruct& module_MyUnion = res.first->second;
  module_MyUnion.name = "module.MyUnion";
  module_MyUnion.is_union = true;
  static const std::tuple<int32_t, const char*, bool, std::unique_ptr<MetadataTypeInterface>>
  module_MyUnion_fields[] = {
    std::make_tuple(1, "myEnum", false, std::make_unique<Enum< ::cpp2::MyEnum>>("module.MyEnum")),
    std::make_tuple(2, "myStruct", false, std::make_unique<Struct< ::cpp2::MyStruct>>("module.MyStruct")),
    std::make_tuple(3, "myDataItem", false, std::make_unique<Struct< ::cpp2::MyDataItem>>("module.MyDataItem")),
  };
  for (const auto& f : module_MyUnion_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id = std::get<0>(f);
    field.name = std::get<1>(f);
    field.is_optional = std::get<2>(f);
    std::get<3>(f)->writeAndGenType(field.type, metadata);
    module_MyUnion.fields.push_back(std::move(field));
  }
}

void ServiceMetadata<::cpp2::MyServiceSvIf>::gen_ping(ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  (void)metadata;
  func.name = "ping";
  auto func_ret_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_VOID_TYPE);
  func_ret_type->writeAndGenType(func.returnType, metadata);
  service.functions.push_back(std::move(func));
}
void ServiceMetadata<::cpp2::MyServiceSvIf>::gen_getRandomData(ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  (void)metadata;
  func.name = "getRandomData";
  auto func_ret_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE);
  func_ret_type->writeAndGenType(func.returnType, metadata);
  service.functions.push_back(std::move(func));
}
void ServiceMetadata<::cpp2::MyServiceSvIf>::gen_hasDataById(ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  (void)metadata;
  func.name = "hasDataById";
  auto func_ret_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_BOOL_TYPE);
  func_ret_type->writeAndGenType(func.returnType, metadata);
  ::apache::thrift::metadata::ThriftField module_MyService_hasDataById_id_1;
  module_MyService_hasDataById_id_1.id = 1;
  module_MyService_hasDataById_id_1.name = "id";
  module_MyService_hasDataById_id_1.is_optional = false;
  auto module_MyService_hasDataById_id_1_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I64_TYPE);
  module_MyService_hasDataById_id_1_type->writeAndGenType(module_MyService_hasDataById_id_1.type, metadata);
  func.arguments.push_back(std::move(module_MyService_hasDataById_id_1));
  service.functions.push_back(std::move(func));
}
void ServiceMetadata<::cpp2::MyServiceSvIf>::gen_getDataById(ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  (void)metadata;
  func.name = "getDataById";
  auto func_ret_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE);
  func_ret_type->writeAndGenType(func.returnType, metadata);
  ::apache::thrift::metadata::ThriftField module_MyService_getDataById_id_1;
  module_MyService_getDataById_id_1.id = 1;
  module_MyService_getDataById_id_1.name = "id";
  module_MyService_getDataById_id_1.is_optional = false;
  auto module_MyService_getDataById_id_1_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I64_TYPE);
  module_MyService_getDataById_id_1_type->writeAndGenType(module_MyService_getDataById_id_1.type, metadata);
  func.arguments.push_back(std::move(module_MyService_getDataById_id_1));
  service.functions.push_back(std::move(func));
}
void ServiceMetadata<::cpp2::MyServiceSvIf>::gen_putDataById(ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  (void)metadata;
  func.name = "putDataById";
  auto func_ret_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_VOID_TYPE);
  func_ret_type->writeAndGenType(func.returnType, metadata);
  ::apache::thrift::metadata::ThriftField module_MyService_putDataById_id_1;
  module_MyService_putDataById_id_1.id = 1;
  module_MyService_putDataById_id_1.name = "id";
  module_MyService_putDataById_id_1.is_optional = false;
  auto module_MyService_putDataById_id_1_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I64_TYPE);
  module_MyService_putDataById_id_1_type->writeAndGenType(module_MyService_putDataById_id_1.type, metadata);
  func.arguments.push_back(std::move(module_MyService_putDataById_id_1));
  ::apache::thrift::metadata::ThriftField module_MyService_putDataById_data_2;
  module_MyService_putDataById_data_2.id = 2;
  module_MyService_putDataById_data_2.name = "data";
  module_MyService_putDataById_data_2.is_optional = false;
  auto module_MyService_putDataById_data_2_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE);
  module_MyService_putDataById_data_2_type->writeAndGenType(module_MyService_putDataById_data_2.type, metadata);
  func.arguments.push_back(std::move(module_MyService_putDataById_data_2));
  service.functions.push_back(std::move(func));
}
void ServiceMetadata<::cpp2::MyServiceSvIf>::gen_lobDataById(ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  (void)metadata;
  func.name = "lobDataById";
  auto func_ret_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_VOID_TYPE);
  func_ret_type->writeAndGenType(func.returnType, metadata);
  ::apache::thrift::metadata::ThriftField module_MyService_lobDataById_id_1;
  module_MyService_lobDataById_id_1.id = 1;
  module_MyService_lobDataById_id_1.name = "id";
  module_MyService_lobDataById_id_1.is_optional = false;
  auto module_MyService_lobDataById_id_1_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I64_TYPE);
  module_MyService_lobDataById_id_1_type->writeAndGenType(module_MyService_lobDataById_id_1.type, metadata);
  func.arguments.push_back(std::move(module_MyService_lobDataById_id_1));
  ::apache::thrift::metadata::ThriftField module_MyService_lobDataById_data_2;
  module_MyService_lobDataById_data_2.id = 2;
  module_MyService_lobDataById_data_2.name = "data";
  module_MyService_lobDataById_data_2.is_optional = false;
  auto module_MyService_lobDataById_data_2_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE);
  module_MyService_lobDataById_data_2_type->writeAndGenType(module_MyService_lobDataById_data_2.type, metadata);
  func.arguments.push_back(std::move(module_MyService_lobDataById_data_2));
  service.functions.push_back(std::move(func));
}

void ServiceMetadata<::cpp2::MyServiceSvIf>::gen(ThriftMetadata& metadata, ThriftServiceContext& context) {
  (void) metadata;
  ::apache::thrift::metadata::ThriftService module_MyService;
  module_MyService.name = "module.MyService";
  static const ThriftFunctionGenerator functions[] = {
    ServiceMetadata<::cpp2::MyServiceSvIf>::gen_ping,
    ServiceMetadata<::cpp2::MyServiceSvIf>::gen_getRandomData,
    ServiceMetadata<::cpp2::MyServiceSvIf>::gen_hasDataById,
    ServiceMetadata<::cpp2::MyServiceSvIf>::gen_getDataById,
    ServiceMetadata<::cpp2::MyServiceSvIf>::gen_putDataById,
    ServiceMetadata<::cpp2::MyServiceSvIf>::gen_lobDataById,
  };
  for (auto& function_gen : functions) {
    function_gen(metadata, module_MyService);
  }
  context.set_service_info(std::move(module_MyService));
  ::apache::thrift::metadata::ThriftModuleContext module;
  module.set_name("module");
  context.set_module(std::move(module));
}
} // namespace md
} // namespace detail
} // namespace thrift
} // namespace apache
