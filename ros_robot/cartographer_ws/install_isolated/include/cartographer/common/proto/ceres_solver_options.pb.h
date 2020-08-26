// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cartographer/common/proto/ceres_solver_options.proto

#ifndef PROTOBUF_cartographer_2fcommon_2fproto_2fceres_5fsolver_5foptions_2eproto__INCLUDED
#define PROTOBUF_cartographer_2fcommon_2fproto_2fceres_5fsolver_5foptions_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3005001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace protobuf_cartographer_2fcommon_2fproto_2fceres_5fsolver_5foptions_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
void InitDefaultsCeresSolverOptionsImpl();
void InitDefaultsCeresSolverOptions();
inline void InitDefaults() {
  InitDefaultsCeresSolverOptions();
}
}  // namespace protobuf_cartographer_2fcommon_2fproto_2fceres_5fsolver_5foptions_2eproto
namespace cartographer {
namespace common {
namespace proto {
class CeresSolverOptions;
class CeresSolverOptionsDefaultTypeInternal;
extern CeresSolverOptionsDefaultTypeInternal _CeresSolverOptions_default_instance_;
}  // namespace proto
}  // namespace common
}  // namespace cartographer
namespace cartographer {
namespace common {
namespace proto {

// ===================================================================

class CeresSolverOptions : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:cartographer.common.proto.CeresSolverOptions) */ {
 public:
  CeresSolverOptions();
  virtual ~CeresSolverOptions();

  CeresSolverOptions(const CeresSolverOptions& from);

  inline CeresSolverOptions& operator=(const CeresSolverOptions& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  CeresSolverOptions(CeresSolverOptions&& from) noexcept
    : CeresSolverOptions() {
    *this = ::std::move(from);
  }

  inline CeresSolverOptions& operator=(CeresSolverOptions&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const CeresSolverOptions& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const CeresSolverOptions* internal_default_instance() {
    return reinterpret_cast<const CeresSolverOptions*>(
               &_CeresSolverOptions_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(CeresSolverOptions* other);
  friend void swap(CeresSolverOptions& a, CeresSolverOptions& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline CeresSolverOptions* New() const PROTOBUF_FINAL { return New(NULL); }

  CeresSolverOptions* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const CeresSolverOptions& from);
  void MergeFrom(const CeresSolverOptions& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(CeresSolverOptions* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // bool use_nonmonotonic_steps = 1;
  void clear_use_nonmonotonic_steps();
  static const int kUseNonmonotonicStepsFieldNumber = 1;
  bool use_nonmonotonic_steps() const;
  void set_use_nonmonotonic_steps(bool value);

  // int32 max_num_iterations = 2;
  void clear_max_num_iterations();
  static const int kMaxNumIterationsFieldNumber = 2;
  ::google::protobuf::int32 max_num_iterations() const;
  void set_max_num_iterations(::google::protobuf::int32 value);

  // int32 num_threads = 3;
  void clear_num_threads();
  static const int kNumThreadsFieldNumber = 3;
  ::google::protobuf::int32 num_threads() const;
  void set_num_threads(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:cartographer.common.proto.CeresSolverOptions)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool use_nonmonotonic_steps_;
  ::google::protobuf::int32 max_num_iterations_;
  ::google::protobuf::int32 num_threads_;
  mutable int _cached_size_;
  friend struct ::protobuf_cartographer_2fcommon_2fproto_2fceres_5fsolver_5foptions_2eproto::TableStruct;
  friend void ::protobuf_cartographer_2fcommon_2fproto_2fceres_5fsolver_5foptions_2eproto::InitDefaultsCeresSolverOptionsImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// CeresSolverOptions

// bool use_nonmonotonic_steps = 1;
inline void CeresSolverOptions::clear_use_nonmonotonic_steps() {
  use_nonmonotonic_steps_ = false;
}
inline bool CeresSolverOptions::use_nonmonotonic_steps() const {
  // @@protoc_insertion_point(field_get:cartographer.common.proto.CeresSolverOptions.use_nonmonotonic_steps)
  return use_nonmonotonic_steps_;
}
inline void CeresSolverOptions::set_use_nonmonotonic_steps(bool value) {
  
  use_nonmonotonic_steps_ = value;
  // @@protoc_insertion_point(field_set:cartographer.common.proto.CeresSolverOptions.use_nonmonotonic_steps)
}

// int32 max_num_iterations = 2;
inline void CeresSolverOptions::clear_max_num_iterations() {
  max_num_iterations_ = 0;
}
inline ::google::protobuf::int32 CeresSolverOptions::max_num_iterations() const {
  // @@protoc_insertion_point(field_get:cartographer.common.proto.CeresSolverOptions.max_num_iterations)
  return max_num_iterations_;
}
inline void CeresSolverOptions::set_max_num_iterations(::google::protobuf::int32 value) {
  
  max_num_iterations_ = value;
  // @@protoc_insertion_point(field_set:cartographer.common.proto.CeresSolverOptions.max_num_iterations)
}

// int32 num_threads = 3;
inline void CeresSolverOptions::clear_num_threads() {
  num_threads_ = 0;
}
inline ::google::protobuf::int32 CeresSolverOptions::num_threads() const {
  // @@protoc_insertion_point(field_get:cartographer.common.proto.CeresSolverOptions.num_threads)
  return num_threads_;
}
inline void CeresSolverOptions::set_num_threads(::google::protobuf::int32 value) {
  
  num_threads_ = value;
  // @@protoc_insertion_point(field_set:cartographer.common.proto.CeresSolverOptions.num_threads)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace common
}  // namespace cartographer

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_cartographer_2fcommon_2fproto_2fceres_5fsolver_5foptions_2eproto__INCLUDED
