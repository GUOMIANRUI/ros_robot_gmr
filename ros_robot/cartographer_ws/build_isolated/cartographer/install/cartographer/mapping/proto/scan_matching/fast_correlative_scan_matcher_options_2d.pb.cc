// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cartographer/mapping/proto/scan_matching/fast_correlative_scan_matcher_options_2d.proto

#include "cartographer/mapping/proto/scan_matching/fast_correlative_scan_matcher_options_2d.pb.h"

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
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)
namespace cartographer {
namespace mapping {
namespace scan_matching {
namespace proto {
class FastCorrelativeScanMatcherOptions2DDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<FastCorrelativeScanMatcherOptions2D>
      _instance;
} _FastCorrelativeScanMatcherOptions2D_default_instance_;
}  // namespace proto
}  // namespace scan_matching
}  // namespace mapping
}  // namespace cartographer
namespace protobuf_cartographer_2fmapping_2fproto_2fscan_5fmatching_2ffast_5fcorrelative_5fscan_5fmatcher_5foptions_5f2d_2eproto {
void InitDefaultsFastCorrelativeScanMatcherOptions2DImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::cartographer::mapping::scan_matching::proto::_FastCorrelativeScanMatcherOptions2D_default_instance_;
    new (ptr) ::cartographer::mapping::scan_matching::proto::FastCorrelativeScanMatcherOptions2D();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::cartographer::mapping::scan_matching::proto::FastCorrelativeScanMatcherOptions2D::InitAsDefaultInstance();
}

void InitDefaultsFastCorrelativeScanMatcherOptions2D() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsFastCorrelativeScanMatcherOptions2DImpl);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::cartographer::mapping::scan_matching::proto::FastCorrelativeScanMatcherOptions2D, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::cartographer::mapping::scan_matching::proto::FastCorrelativeScanMatcherOptions2D, linear_search_window_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::cartographer::mapping::scan_matching::proto::FastCorrelativeScanMatcherOptions2D, angular_search_window_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::cartographer::mapping::scan_matching::proto::FastCorrelativeScanMatcherOptions2D, branch_and_bound_depth_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::cartographer::mapping::scan_matching::proto::FastCorrelativeScanMatcherOptions2D)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::cartographer::mapping::scan_matching::proto::_FastCorrelativeScanMatcherOptions2D_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "cartographer/mapping/proto/scan_matching/fast_correlative_scan_matcher_options_2d.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\nWcartographer/mapping/proto/scan_matchi"
      "ng/fast_correlative_scan_matcher_options"
      "_2d.proto\022(cartographer.mapping.scan_mat"
      "ching.proto\"\202\001\n#FastCorrelativeScanMatch"
      "erOptions2D\022\034\n\024linear_search_window\030\003 \001("
      "\001\022\035\n\025angular_search_window\030\004 \001(\001\022\036\n\026bran"
      "ch_and_bound_depth\030\002 \001(\005b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 272);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "cartographer/mapping/proto/scan_matching/fast_correlative_scan_matcher_options_2d.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_cartographer_2fmapping_2fproto_2fscan_5fmatching_2ffast_5fcorrelative_5fscan_5fmatcher_5foptions_5f2d_2eproto
namespace cartographer {
namespace mapping {
namespace scan_matching {
namespace proto {

// ===================================================================

void FastCorrelativeScanMatcherOptions2D::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int FastCorrelativeScanMatcherOptions2D::kLinearSearchWindowFieldNumber;
const int FastCorrelativeScanMatcherOptions2D::kAngularSearchWindowFieldNumber;
const int FastCorrelativeScanMatcherOptions2D::kBranchAndBoundDepthFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

FastCorrelativeScanMatcherOptions2D::FastCorrelativeScanMatcherOptions2D()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_cartographer_2fmapping_2fproto_2fscan_5fmatching_2ffast_5fcorrelative_5fscan_5fmatcher_5foptions_5f2d_2eproto::InitDefaultsFastCorrelativeScanMatcherOptions2D();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:cartographer.mapping.scan_matching.proto.FastCorrelativeScanMatcherOptions2D)
}
FastCorrelativeScanMatcherOptions2D::FastCorrelativeScanMatcherOptions2D(const FastCorrelativeScanMatcherOptions2D& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&linear_search_window_, &from.linear_search_window_,
    static_cast<size_t>(reinterpret_cast<char*>(&branch_and_bound_depth_) -
    reinterpret_cast<char*>(&linear_search_window_)) + sizeof(branch_and_bound_depth_));
  // @@protoc_insertion_point(copy_constructor:cartographer.mapping.scan_matching.proto.FastCorrelativeScanMatcherOptions2D)
}

void FastCorrelativeScanMatcherOptions2D::SharedCtor() {
  ::memset(&linear_search_window_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&branch_and_bound_depth_) -
      reinterpret_cast<char*>(&linear_search_window_)) + sizeof(branch_and_bound_depth_));
  _cached_size_ = 0;
}

FastCorrelativeScanMatcherOptions2D::~FastCorrelativeScanMatcherOptions2D() {
  // @@protoc_insertion_point(destructor:cartographer.mapping.scan_matching.proto.FastCorrelativeScanMatcherOptions2D)
  SharedDtor();
}

void FastCorrelativeScanMatcherOptions2D::SharedDtor() {
}

void FastCorrelativeScanMatcherOptions2D::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* FastCorrelativeScanMatcherOptions2D::descriptor() {
  ::protobuf_cartographer_2fmapping_2fproto_2fscan_5fmatching_2ffast_5fcorrelative_5fscan_5fmatcher_5foptions_5f2d_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_cartographer_2fmapping_2fproto_2fscan_5fmatching_2ffast_5fcorrelative_5fscan_5fmatcher_5foptions_5f2d_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const FastCorrelativeScanMatcherOptions2D& FastCorrelativeScanMatcherOptions2D::default_instance() {
  ::protobuf_cartographer_2fmapping_2fproto_2fscan_5fmatching_2ffast_5fcorrelative_5fscan_5fmatcher_5foptions_5f2d_2eproto::InitDefaultsFastCorrelativeScanMatcherOptions2D();
  return *internal_default_instance();
}

FastCorrelativeScanMatcherOptions2D* FastCorrelativeScanMatcherOptions2D::New(::google::protobuf::Arena* arena) const {
  FastCorrelativeScanMatcherOptions2D* n = new FastCorrelativeScanMatcherOptions2D;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void FastCorrelativeScanMatcherOptions2D::Clear() {
// @@protoc_insertion_point(message_clear_start:cartographer.mapping.scan_matching.proto.FastCorrelativeScanMatcherOptions2D)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&linear_search_window_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&branch_and_bound_depth_) -
      reinterpret_cast<char*>(&linear_search_window_)) + sizeof(branch_and_bound_depth_));
  _internal_metadata_.Clear();
}

bool FastCorrelativeScanMatcherOptions2D::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:cartographer.mapping.scan_matching.proto.FastCorrelativeScanMatcherOptions2D)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // int32 branch_and_bound_depth = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &branch_and_bound_depth_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double linear_search_window = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(25u /* 25 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &linear_search_window_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double angular_search_window = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(33u /* 33 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &angular_search_window_)));
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
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:cartographer.mapping.scan_matching.proto.FastCorrelativeScanMatcherOptions2D)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:cartographer.mapping.scan_matching.proto.FastCorrelativeScanMatcherOptions2D)
  return false;
#undef DO_
}

void FastCorrelativeScanMatcherOptions2D::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:cartographer.mapping.scan_matching.proto.FastCorrelativeScanMatcherOptions2D)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 branch_and_bound_depth = 2;
  if (this->branch_and_bound_depth() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->branch_and_bound_depth(), output);
  }

  // double linear_search_window = 3;
  if (this->linear_search_window() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(3, this->linear_search_window(), output);
  }

  // double angular_search_window = 4;
  if (this->angular_search_window() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(4, this->angular_search_window(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:cartographer.mapping.scan_matching.proto.FastCorrelativeScanMatcherOptions2D)
}

::google::protobuf::uint8* FastCorrelativeScanMatcherOptions2D::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:cartographer.mapping.scan_matching.proto.FastCorrelativeScanMatcherOptions2D)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 branch_and_bound_depth = 2;
  if (this->branch_and_bound_depth() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->branch_and_bound_depth(), target);
  }

  // double linear_search_window = 3;
  if (this->linear_search_window() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(3, this->linear_search_window(), target);
  }

  // double angular_search_window = 4;
  if (this->angular_search_window() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(4, this->angular_search_window(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:cartographer.mapping.scan_matching.proto.FastCorrelativeScanMatcherOptions2D)
  return target;
}

size_t FastCorrelativeScanMatcherOptions2D::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:cartographer.mapping.scan_matching.proto.FastCorrelativeScanMatcherOptions2D)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // double linear_search_window = 3;
  if (this->linear_search_window() != 0) {
    total_size += 1 + 8;
  }

  // double angular_search_window = 4;
  if (this->angular_search_window() != 0) {
    total_size += 1 + 8;
  }

  // int32 branch_and_bound_depth = 2;
  if (this->branch_and_bound_depth() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->branch_and_bound_depth());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void FastCorrelativeScanMatcherOptions2D::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:cartographer.mapping.scan_matching.proto.FastCorrelativeScanMatcherOptions2D)
  GOOGLE_DCHECK_NE(&from, this);
  const FastCorrelativeScanMatcherOptions2D* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const FastCorrelativeScanMatcherOptions2D>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:cartographer.mapping.scan_matching.proto.FastCorrelativeScanMatcherOptions2D)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:cartographer.mapping.scan_matching.proto.FastCorrelativeScanMatcherOptions2D)
    MergeFrom(*source);
  }
}

void FastCorrelativeScanMatcherOptions2D::MergeFrom(const FastCorrelativeScanMatcherOptions2D& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:cartographer.mapping.scan_matching.proto.FastCorrelativeScanMatcherOptions2D)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.linear_search_window() != 0) {
    set_linear_search_window(from.linear_search_window());
  }
  if (from.angular_search_window() != 0) {
    set_angular_search_window(from.angular_search_window());
  }
  if (from.branch_and_bound_depth() != 0) {
    set_branch_and_bound_depth(from.branch_and_bound_depth());
  }
}

void FastCorrelativeScanMatcherOptions2D::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:cartographer.mapping.scan_matching.proto.FastCorrelativeScanMatcherOptions2D)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void FastCorrelativeScanMatcherOptions2D::CopyFrom(const FastCorrelativeScanMatcherOptions2D& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:cartographer.mapping.scan_matching.proto.FastCorrelativeScanMatcherOptions2D)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool FastCorrelativeScanMatcherOptions2D::IsInitialized() const {
  return true;
}

void FastCorrelativeScanMatcherOptions2D::Swap(FastCorrelativeScanMatcherOptions2D* other) {
  if (other == this) return;
  InternalSwap(other);
}
void FastCorrelativeScanMatcherOptions2D::InternalSwap(FastCorrelativeScanMatcherOptions2D* other) {
  using std::swap;
  swap(linear_search_window_, other->linear_search_window_);
  swap(angular_search_window_, other->angular_search_window_);
  swap(branch_and_bound_depth_, other->branch_and_bound_depth_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata FastCorrelativeScanMatcherOptions2D::GetMetadata() const {
  protobuf_cartographer_2fmapping_2fproto_2fscan_5fmatching_2ffast_5fcorrelative_5fscan_5fmatcher_5foptions_5f2d_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_cartographer_2fmapping_2fproto_2fscan_5fmatching_2ffast_5fcorrelative_5fscan_5fmatcher_5foptions_5f2d_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace proto
}  // namespace scan_matching
}  // namespace mapping
}  // namespace cartographer

// @@protoc_insertion_point(global_scope)
