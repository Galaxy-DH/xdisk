// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: xmsg_head.proto

#include "xmsg_head.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
namespace xmsg {
class XMsgHeadDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<XMsgHead> _instance;
} _XMsgHead_default_instance_;
}  // namespace xmsg
static void InitDefaultsscc_info_XMsgHead_xmsg_5fhead_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::xmsg::_XMsgHead_default_instance_;
    new (ptr) ::xmsg::XMsgHead();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::xmsg::XMsgHead::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_XMsgHead_xmsg_5fhead_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_XMsgHead_xmsg_5fhead_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_xmsg_5fhead_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_xmsg_5fhead_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_xmsg_5fhead_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_xmsg_5fhead_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::xmsg::XMsgHead, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::xmsg::XMsgHead, msg_size_),
  PROTOBUF_FIELD_OFFSET(::xmsg::XMsgHead, msg_str_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::xmsg::XMsgHead)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::xmsg::_XMsgHead_default_instance_),
};

const char descriptor_table_protodef_xmsg_5fhead_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\017xmsg_head.proto\022\004xmsg\"-\n\010XMsgHead\022\020\n\010m"
  "sg_size\030\001 \001(\005\022\017\n\007msg_str\030\002 \001(\tb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_xmsg_5fhead_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_xmsg_5fhead_2eproto_sccs[1] = {
  &scc_info_XMsgHead_xmsg_5fhead_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_xmsg_5fhead_2eproto_once;
static bool descriptor_table_xmsg_5fhead_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_xmsg_5fhead_2eproto = {
  &descriptor_table_xmsg_5fhead_2eproto_initialized, descriptor_table_protodef_xmsg_5fhead_2eproto, "xmsg_head.proto", 78,
  &descriptor_table_xmsg_5fhead_2eproto_once, descriptor_table_xmsg_5fhead_2eproto_sccs, descriptor_table_xmsg_5fhead_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_xmsg_5fhead_2eproto::offsets,
  file_level_metadata_xmsg_5fhead_2eproto, 1, file_level_enum_descriptors_xmsg_5fhead_2eproto, file_level_service_descriptors_xmsg_5fhead_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_xmsg_5fhead_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_xmsg_5fhead_2eproto), true);
namespace xmsg {

// ===================================================================

void XMsgHead::InitAsDefaultInstance() {
}
class XMsgHead::_Internal {
 public:
};

XMsgHead::XMsgHead()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:xmsg.XMsgHead)
}
XMsgHead::XMsgHead(const XMsgHead& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  msg_str_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_msg_str().empty()) {
    msg_str_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.msg_str_);
  }
  msg_size_ = from.msg_size_;
  // @@protoc_insertion_point(copy_constructor:xmsg.XMsgHead)
}

void XMsgHead::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_XMsgHead_xmsg_5fhead_2eproto.base);
  msg_str_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  msg_size_ = 0;
}

XMsgHead::~XMsgHead() {
  // @@protoc_insertion_point(destructor:xmsg.XMsgHead)
  SharedDtor();
}

void XMsgHead::SharedDtor() {
  msg_str_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void XMsgHead::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const XMsgHead& XMsgHead::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_XMsgHead_xmsg_5fhead_2eproto.base);
  return *internal_default_instance();
}


void XMsgHead::Clear() {
// @@protoc_insertion_point(message_clear_start:xmsg.XMsgHead)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  msg_str_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  msg_size_ = 0;
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* XMsgHead::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // int32 msg_size = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          msg_size_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string msg_str = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParserUTF8(_internal_mutable_msg_str(), ptr, ctx, "xmsg.XMsgHead.msg_str");
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool XMsgHead::MergePartialFromCodedStream(
    ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::PROTOBUF_NAMESPACE_ID::uint32 tag;
  // @@protoc_insertion_point(parse_start:xmsg.XMsgHead)
  for (;;) {
    ::std::pair<::PROTOBUF_NAMESPACE_ID::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // int32 msg_size = 1;
      case 1: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (8 & 0xFF)) {

          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   ::PROTOBUF_NAMESPACE_ID::int32, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_INT32>(
                 input, &msg_size_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string msg_str = 2;
      case 2: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (18 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadString(
                input, this->_internal_mutable_msg_str()));
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
            this->_internal_msg_str().data(), static_cast<int>(this->_internal_msg_str().length()),
            ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::PARSE,
            "xmsg.XMsgHead.msg_str"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:xmsg.XMsgHead)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:xmsg.XMsgHead)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

::PROTOBUF_NAMESPACE_ID::uint8* XMsgHead::InternalSerializeWithCachedSizesToArray(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:xmsg.XMsgHead)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 msg_size = 1;
  if (this->msg_size() != 0) {
    stream->EnsureSpace(&target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->msg_size(), target);
  }

  // string msg_str = 2;
  if (this->msg_str().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_msg_str().data(), static_cast<int>(this->_internal_msg_str().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "xmsg.XMsgHead.msg_str");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_msg_str(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:xmsg.XMsgHead)
  return target;
}

size_t XMsgHead::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:xmsg.XMsgHead)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string msg_str = 2;
  if (this->msg_str().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_msg_str());
  }

  // int32 msg_size = 1;
  if (this->msg_size() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->msg_size());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void XMsgHead::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:xmsg.XMsgHead)
  GOOGLE_DCHECK_NE(&from, this);
  const XMsgHead* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<XMsgHead>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:xmsg.XMsgHead)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:xmsg.XMsgHead)
    MergeFrom(*source);
  }
}

void XMsgHead::MergeFrom(const XMsgHead& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:xmsg.XMsgHead)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.msg_str().size() > 0) {

    msg_str_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.msg_str_);
  }
  if (from.msg_size() != 0) {
    set_msg_size(from.msg_size());
  }
}

void XMsgHead::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:xmsg.XMsgHead)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void XMsgHead::CopyFrom(const XMsgHead& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:xmsg.XMsgHead)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool XMsgHead::IsInitialized() const {
  return true;
}

void XMsgHead::InternalSwap(XMsgHead* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  msg_str_.Swap(&other->msg_str_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(msg_size_, other->msg_size_);
}

::PROTOBUF_NAMESPACE_ID::Metadata XMsgHead::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace xmsg
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::xmsg::XMsgHead* Arena::CreateMaybeMessage< ::xmsg::XMsgHead >(Arena* arena) {
  return Arena::CreateInternal< ::xmsg::XMsgHead >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
