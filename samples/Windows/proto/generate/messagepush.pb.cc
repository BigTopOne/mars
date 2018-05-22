// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: messagepush.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "messagepush.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace com {
namespace tencent {
namespace mars {
namespace sample {
namespace chat {
namespace proto {
class MessagePushDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<MessagePush> {
} _MessagePush_default_instance_;

namespace protobuf_messagepush_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[1];

}  // namespace

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTableField
    const TableStruct::entries[] = {
  {0, 0, 0, ::google::protobuf::internal::kInvalidMask, 0, 0},
};

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::AuxillaryParseTableField
    const TableStruct::aux[] = {
  ::google::protobuf::internal::AuxillaryParseTableField(),
};
PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTable const
    TableStruct::schema[] = {
  { NULL, NULL, 0, -1, -1, false },
};

const ::google::protobuf::uint32 TableStruct::offsets[] = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MessagePush, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MessagePush, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MessagePush, topic_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MessagePush, content_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MessagePush, from_),
  0,
  1,
  2,
};

static const ::google::protobuf::internal::MigrationSchema schemas[] = {
  { 0, 8, sizeof(MessagePush)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_MessagePush_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "messagepush.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

}  // namespace

void TableStruct::Shutdown() {
  _MessagePush_default_instance_.Shutdown();
  delete file_level_metadata[0].reflection;
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  _MessagePush_default_instance_.DefaultConstruct();
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] = {
      "\n\021messagepush.proto\022\"com.tencent.mars.sa"
      "mple.chat.proto\";\n\013MessagePush\022\r\n\005topic\030"
      "\001 \002(\t\022\017\n\007content\030\002 \002(\t\022\014\n\004from\030\003 \002(\t"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 116);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "messagepush.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&TableStruct::Shutdown);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;

}  // namespace protobuf_messagepush_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int MessagePush::kTopicFieldNumber;
const int MessagePush::kContentFieldNumber;
const int MessagePush::kFromFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

MessagePush::MessagePush()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_messagepush_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:com.tencent.mars.sample.chat.proto.MessagePush)
}
MessagePush::MessagePush(const MessagePush& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  topic_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_topic()) {
    topic_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.topic_);
  }
  content_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_content()) {
    content_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.content_);
  }
  from_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_from()) {
    from_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.from_);
  }
  // @@protoc_insertion_point(copy_constructor:com.tencent.mars.sample.chat.proto.MessagePush)
}

void MessagePush::SharedCtor() {
  _cached_size_ = 0;
  topic_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  content_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  from_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

MessagePush::~MessagePush() {
  // @@protoc_insertion_point(destructor:com.tencent.mars.sample.chat.proto.MessagePush)
  SharedDtor();
}

void MessagePush::SharedDtor() {
  topic_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  content_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  from_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void MessagePush::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* MessagePush::descriptor() {
  protobuf_messagepush_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_messagepush_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const MessagePush& MessagePush::default_instance() {
  protobuf_messagepush_2eproto::InitDefaults();
  return *internal_default_instance();
}

MessagePush* MessagePush::New(::google::protobuf::Arena* arena) const {
  MessagePush* n = new MessagePush;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void MessagePush::Clear() {
// @@protoc_insertion_point(message_clear_start:com.tencent.mars.sample.chat.proto.MessagePush)
  if (_has_bits_[0 / 32] & 7u) {
    if (has_topic()) {
      GOOGLE_DCHECK(!topic_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
      (*topic_.UnsafeRawStringPointer())->clear();
    }
    if (has_content()) {
      GOOGLE_DCHECK(!content_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
      (*content_.UnsafeRawStringPointer())->clear();
    }
    if (has_from()) {
      GOOGLE_DCHECK(!from_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
      (*from_.UnsafeRawStringPointer())->clear();
    }
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool MessagePush::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:com.tencent.mars.sample.chat.proto.MessagePush)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string topic = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_topic()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->topic().data(), this->topic().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "com.tencent.mars.sample.chat.proto.MessagePush.topic");
        } else {
          goto handle_unusual;
        }
        break;
      }

      // required string content = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_content()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->content().data(), this->content().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "com.tencent.mars.sample.chat.proto.MessagePush.content");
        } else {
          goto handle_unusual;
        }
        break;
      }

      // required string from = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_from()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->from().data(), this->from().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "com.tencent.mars.sample.chat.proto.MessagePush.from");
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:com.tencent.mars.sample.chat.proto.MessagePush)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:com.tencent.mars.sample.chat.proto.MessagePush)
  return false;
#undef DO_
}

void MessagePush::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:com.tencent.mars.sample.chat.proto.MessagePush)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required string topic = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->topic().data(), this->topic().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "com.tencent.mars.sample.chat.proto.MessagePush.topic");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->topic(), output);
  }

  // required string content = 2;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->content().data(), this->content().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "com.tencent.mars.sample.chat.proto.MessagePush.content");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->content(), output);
  }

  // required string from = 3;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->from().data(), this->from().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "com.tencent.mars.sample.chat.proto.MessagePush.from");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->from(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:com.tencent.mars.sample.chat.proto.MessagePush)
}

::google::protobuf::uint8* MessagePush::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:com.tencent.mars.sample.chat.proto.MessagePush)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required string topic = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->topic().data(), this->topic().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "com.tencent.mars.sample.chat.proto.MessagePush.topic");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->topic(), target);
  }

  // required string content = 2;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->content().data(), this->content().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "com.tencent.mars.sample.chat.proto.MessagePush.content");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->content(), target);
  }

  // required string from = 3;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->from().data(), this->from().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "com.tencent.mars.sample.chat.proto.MessagePush.from");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->from(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:com.tencent.mars.sample.chat.proto.MessagePush)
  return target;
}

size_t MessagePush::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:com.tencent.mars.sample.chat.proto.MessagePush)
  size_t total_size = 0;

  if (has_topic()) {
    // required string topic = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->topic());
  }

  if (has_content()) {
    // required string content = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->content());
  }

  if (has_from()) {
    // required string from = 3;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->from());
  }

  return total_size;
}
size_t MessagePush::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:com.tencent.mars.sample.chat.proto.MessagePush)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  if (((_has_bits_[0] & 0x00000007) ^ 0x00000007) == 0) {  // All required fields are present.
    // required string topic = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->topic());

    // required string content = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->content());

    // required string from = 3;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->from());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void MessagePush::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:com.tencent.mars.sample.chat.proto.MessagePush)
  GOOGLE_DCHECK_NE(&from, this);
  const MessagePush* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const MessagePush>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:com.tencent.mars.sample.chat.proto.MessagePush)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:com.tencent.mars.sample.chat.proto.MessagePush)
    MergeFrom(*source);
  }
}

void MessagePush::MergeFrom(const MessagePush& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:com.tencent.mars.sample.chat.proto.MessagePush)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 7u) {
    if (cached_has_bits & 0x00000001u) {
      set_has_topic();
      topic_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.topic_);
    }
    if (cached_has_bits & 0x00000002u) {
      set_has_content();
      content_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.content_);
    }
    if (cached_has_bits & 0x00000004u) {
      set_has_from();
      from_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.from_);
    }
  }
}

void MessagePush::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:com.tencent.mars.sample.chat.proto.MessagePush)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MessagePush::CopyFrom(const MessagePush& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:com.tencent.mars.sample.chat.proto.MessagePush)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MessagePush::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000007) != 0x00000007) return false;
  return true;
}

void MessagePush::Swap(MessagePush* other) {
  if (other == this) return;
  InternalSwap(other);
}
void MessagePush::InternalSwap(MessagePush* other) {
  topic_.Swap(&other->topic_);
  content_.Swap(&other->content_);
  from_.Swap(&other->from_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata MessagePush::GetMetadata() const {
  protobuf_messagepush_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_messagepush_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// MessagePush

// required string topic = 1;
bool MessagePush::has_topic() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void MessagePush::set_has_topic() {
  _has_bits_[0] |= 0x00000001u;
}
void MessagePush::clear_has_topic() {
  _has_bits_[0] &= ~0x00000001u;
}
void MessagePush::clear_topic() {
  topic_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_topic();
}
const ::std::string& MessagePush::topic() const {
  // @@protoc_insertion_point(field_get:com.tencent.mars.sample.chat.proto.MessagePush.topic)
  return topic_.GetNoArena();
}
void MessagePush::set_topic(const ::std::string& value) {
  set_has_topic();
  topic_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:com.tencent.mars.sample.chat.proto.MessagePush.topic)
}
#if LANG_CXX11
void MessagePush::set_topic(::std::string&& value) {
  set_has_topic();
  topic_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:com.tencent.mars.sample.chat.proto.MessagePush.topic)
}
#endif
void MessagePush::set_topic(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_topic();
  topic_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:com.tencent.mars.sample.chat.proto.MessagePush.topic)
}
void MessagePush::set_topic(const char* value, size_t size) {
  set_has_topic();
  topic_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:com.tencent.mars.sample.chat.proto.MessagePush.topic)
}
::std::string* MessagePush::mutable_topic() {
  set_has_topic();
  // @@protoc_insertion_point(field_mutable:com.tencent.mars.sample.chat.proto.MessagePush.topic)
  return topic_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* MessagePush::release_topic() {
  // @@protoc_insertion_point(field_release:com.tencent.mars.sample.chat.proto.MessagePush.topic)
  clear_has_topic();
  return topic_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void MessagePush::set_allocated_topic(::std::string* topic) {
  if (topic != NULL) {
    set_has_topic();
  } else {
    clear_has_topic();
  }
  topic_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), topic);
  // @@protoc_insertion_point(field_set_allocated:com.tencent.mars.sample.chat.proto.MessagePush.topic)
}

// required string content = 2;
bool MessagePush::has_content() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void MessagePush::set_has_content() {
  _has_bits_[0] |= 0x00000002u;
}
void MessagePush::clear_has_content() {
  _has_bits_[0] &= ~0x00000002u;
}
void MessagePush::clear_content() {
  content_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_content();
}
const ::std::string& MessagePush::content() const {
  // @@protoc_insertion_point(field_get:com.tencent.mars.sample.chat.proto.MessagePush.content)
  return content_.GetNoArena();
}
void MessagePush::set_content(const ::std::string& value) {
  set_has_content();
  content_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:com.tencent.mars.sample.chat.proto.MessagePush.content)
}
#if LANG_CXX11
void MessagePush::set_content(::std::string&& value) {
  set_has_content();
  content_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:com.tencent.mars.sample.chat.proto.MessagePush.content)
}
#endif
void MessagePush::set_content(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_content();
  content_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:com.tencent.mars.sample.chat.proto.MessagePush.content)
}
void MessagePush::set_content(const char* value, size_t size) {
  set_has_content();
  content_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:com.tencent.mars.sample.chat.proto.MessagePush.content)
}
::std::string* MessagePush::mutable_content() {
  set_has_content();
  // @@protoc_insertion_point(field_mutable:com.tencent.mars.sample.chat.proto.MessagePush.content)
  return content_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* MessagePush::release_content() {
  // @@protoc_insertion_point(field_release:com.tencent.mars.sample.chat.proto.MessagePush.content)
  clear_has_content();
  return content_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void MessagePush::set_allocated_content(::std::string* content) {
  if (content != NULL) {
    set_has_content();
  } else {
    clear_has_content();
  }
  content_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), content);
  // @@protoc_insertion_point(field_set_allocated:com.tencent.mars.sample.chat.proto.MessagePush.content)
}

// required string from = 3;
bool MessagePush::has_from() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void MessagePush::set_has_from() {
  _has_bits_[0] |= 0x00000004u;
}
void MessagePush::clear_has_from() {
  _has_bits_[0] &= ~0x00000004u;
}
void MessagePush::clear_from() {
  from_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_from();
}
const ::std::string& MessagePush::from() const {
  // @@protoc_insertion_point(field_get:com.tencent.mars.sample.chat.proto.MessagePush.from)
  return from_.GetNoArena();
}
void MessagePush::set_from(const ::std::string& value) {
  set_has_from();
  from_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:com.tencent.mars.sample.chat.proto.MessagePush.from)
}
#if LANG_CXX11
void MessagePush::set_from(::std::string&& value) {
  set_has_from();
  from_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:com.tencent.mars.sample.chat.proto.MessagePush.from)
}
#endif
void MessagePush::set_from(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_from();
  from_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:com.tencent.mars.sample.chat.proto.MessagePush.from)
}
void MessagePush::set_from(const char* value, size_t size) {
  set_has_from();
  from_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:com.tencent.mars.sample.chat.proto.MessagePush.from)
}
::std::string* MessagePush::mutable_from() {
  set_has_from();
  // @@protoc_insertion_point(field_mutable:com.tencent.mars.sample.chat.proto.MessagePush.from)
  return from_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* MessagePush::release_from() {
  // @@protoc_insertion_point(field_release:com.tencent.mars.sample.chat.proto.MessagePush.from)
  clear_has_from();
  return from_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void MessagePush::set_allocated_from(::std::string* from) {
  if (from != NULL) {
    set_has_from();
  } else {
    clear_has_from();
  }
  from_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from);
  // @@protoc_insertion_point(field_set_allocated:com.tencent.mars.sample.chat.proto.MessagePush.from)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace chat
}  // namespace sample
}  // namespace mars
}  // namespace tencent
}  // namespace com

// @@protoc_insertion_point(global_scope)