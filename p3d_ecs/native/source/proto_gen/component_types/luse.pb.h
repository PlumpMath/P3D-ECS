// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: component_types/luse.proto

#ifndef PROTOBUF_component_5ftypes_2fluse_2eproto__INCLUDED
#define PROTOBUF_component_5ftypes_2fluse_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3001000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3001000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace p3d_ecs {
  namespace proto {

    // Internal implementation detail -- do not call these.
    void protobuf_AddDesc_component_5ftypes_2fluse_2eproto();
    void protobuf_InitDefaults_component_5ftypes_2fluse_2eproto();
    void protobuf_AssignDesc_component_5ftypes_2fluse_2eproto();
    void protobuf_ShutdownFile_component_5ftypes_2fluse_2eproto();

    class LMatrix4f;
    class LVecBase3f;

    // ===================================================================

    class LVecBase3f
      : public ::google::protobuf::
          Message /* @@protoc_insertion_point(class_definition:p3d_ecs.proto.LVecBase3f) */ {
    public:
      LVecBase3f();
      virtual ~LVecBase3f();

      LVecBase3f(const LVecBase3f& from);

      inline LVecBase3f& operator=(const LVecBase3f& from) {
        CopyFrom(from);
        return *this;
      }

      static const ::google::protobuf::Descriptor* descriptor();
      static const LVecBase3f& default_instance();

      static const LVecBase3f* internal_default_instance();

      void Swap(LVecBase3f* other);

      // implements Message ----------------------------------------------

      inline LVecBase3f* New() const { return New(NULL); }

      LVecBase3f* New(::google::protobuf::Arena* arena) const;
      void CopyFrom(const ::google::protobuf::Message& from);
      void MergeFrom(const ::google::protobuf::Message& from);
      void CopyFrom(const LVecBase3f& from);
      void MergeFrom(const LVecBase3f& from);
      void Clear();
      bool IsInitialized() const;

      size_t ByteSizeLong() const;
      bool MergePartialFromCodedStream(::google::protobuf::io::CodedInputStream* input);
      void SerializeWithCachedSizes(::google::protobuf::io::CodedOutputStream* output) const;
      ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
        bool deterministic, ::google::protobuf::uint8* output) const;
      ::google::protobuf::uint8* SerializeWithCachedSizesToArray(
        ::google::protobuf::uint8* output) const {
        return InternalSerializeWithCachedSizesToArray(false, output);
      }
      int GetCachedSize() const { return _cached_size_; }

    private:
      void SharedCtor();
      void SharedDtor();
      void SetCachedSize(int size) const;
      void InternalSwap(LVecBase3f* other);
      void UnsafeMergeFrom(const LVecBase3f& from);

    private:
      inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
        return _internal_metadata_.arena();
      }
      inline void* MaybeArenaPtr() const { return _internal_metadata_.raw_arena_ptr(); }

    public:
      ::google::protobuf::Metadata GetMetadata() const;

      // nested types ----------------------------------------------------

      // accessors -------------------------------------------------------

      // optional float x = 1;
      void clear_x();
      static const int kXFieldNumber = 1;
      float x() const;
      void set_x(float value);

      // optional float y = 2;
      void clear_y();
      static const int kYFieldNumber = 2;
      float y() const;
      void set_y(float value);

      // optional float z = 3;
      void clear_z();
      static const int kZFieldNumber = 3;
      float z() const;
      void set_z(float value);

      // @@protoc_insertion_point(class_scope:p3d_ecs.proto.LVecBase3f)
    private:
      ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
      float x_;
      float y_;
      float z_;
      mutable int _cached_size_;
      friend void protobuf_InitDefaults_component_5ftypes_2fluse_2eproto_impl();
      friend void protobuf_AddDesc_component_5ftypes_2fluse_2eproto_impl();
      friend void protobuf_AssignDesc_component_5ftypes_2fluse_2eproto();
      friend void protobuf_ShutdownFile_component_5ftypes_2fluse_2eproto();

      void InitAsDefaultInstance();
    };
    extern ::google::protobuf::internal::ExplicitlyConstructed<LVecBase3f>
      LVecBase3f_default_instance_;

    // -------------------------------------------------------------------

    class LMatrix4f
      : public ::google::protobuf::
          Message /* @@protoc_insertion_point(class_definition:p3d_ecs.proto.LMatrix4f) */ {
    public:
      LMatrix4f();
      virtual ~LMatrix4f();

      LMatrix4f(const LMatrix4f& from);

      inline LMatrix4f& operator=(const LMatrix4f& from) {
        CopyFrom(from);
        return *this;
      }

      static const ::google::protobuf::Descriptor* descriptor();
      static const LMatrix4f& default_instance();

      static const LMatrix4f* internal_default_instance();

      void Swap(LMatrix4f* other);

      // implements Message ----------------------------------------------

      inline LMatrix4f* New() const { return New(NULL); }

      LMatrix4f* New(::google::protobuf::Arena* arena) const;
      void CopyFrom(const ::google::protobuf::Message& from);
      void MergeFrom(const ::google::protobuf::Message& from);
      void CopyFrom(const LMatrix4f& from);
      void MergeFrom(const LMatrix4f& from);
      void Clear();
      bool IsInitialized() const;

      size_t ByteSizeLong() const;
      bool MergePartialFromCodedStream(::google::protobuf::io::CodedInputStream* input);
      void SerializeWithCachedSizes(::google::protobuf::io::CodedOutputStream* output) const;
      ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
        bool deterministic, ::google::protobuf::uint8* output) const;
      ::google::protobuf::uint8* SerializeWithCachedSizesToArray(
        ::google::protobuf::uint8* output) const {
        return InternalSerializeWithCachedSizesToArray(false, output);
      }
      int GetCachedSize() const { return _cached_size_; }

    private:
      void SharedCtor();
      void SharedDtor();
      void SetCachedSize(int size) const;
      void InternalSwap(LMatrix4f* other);
      void UnsafeMergeFrom(const LMatrix4f& from);

    private:
      inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
        return _internal_metadata_.arena();
      }
      inline void* MaybeArenaPtr() const { return _internal_metadata_.raw_arena_ptr(); }

    public:
      ::google::protobuf::Metadata GetMetadata() const;

      // nested types ----------------------------------------------------

      // accessors -------------------------------------------------------

      // optional float m_0_0 = 1;
      void clear_m_0_0();
      static const int kM00FieldNumber = 1;
      float m_0_0() const;
      void set_m_0_0(float value);

      // optional float m_0_1 = 2;
      void clear_m_0_1();
      static const int kM01FieldNumber = 2;
      float m_0_1() const;
      void set_m_0_1(float value);

      // optional float m_0_2 = 3;
      void clear_m_0_2();
      static const int kM02FieldNumber = 3;
      float m_0_2() const;
      void set_m_0_2(float value);

      // optional float m_0_3 = 4;
      void clear_m_0_3();
      static const int kM03FieldNumber = 4;
      float m_0_3() const;
      void set_m_0_3(float value);

      // optional float m_1_0 = 5;
      void clear_m_1_0();
      static const int kM10FieldNumber = 5;
      float m_1_0() const;
      void set_m_1_0(float value);

      // optional float m_1_1 = 6;
      void clear_m_1_1();
      static const int kM11FieldNumber = 6;
      float m_1_1() const;
      void set_m_1_1(float value);

      // optional float m_1_2 = 7;
      void clear_m_1_2();
      static const int kM12FieldNumber = 7;
      float m_1_2() const;
      void set_m_1_2(float value);

      // optional float m_1_3 = 8;
      void clear_m_1_3();
      static const int kM13FieldNumber = 8;
      float m_1_3() const;
      void set_m_1_3(float value);

      // optional float m_2_0 = 9;
      void clear_m_2_0();
      static const int kM20FieldNumber = 9;
      float m_2_0() const;
      void set_m_2_0(float value);

      // optional float m_2_1 = 10;
      void clear_m_2_1();
      static const int kM21FieldNumber = 10;
      float m_2_1() const;
      void set_m_2_1(float value);

      // optional float m_2_2 = 11;
      void clear_m_2_2();
      static const int kM22FieldNumber = 11;
      float m_2_2() const;
      void set_m_2_2(float value);

      // optional float m_2_3 = 12;
      void clear_m_2_3();
      static const int kM23FieldNumber = 12;
      float m_2_3() const;
      void set_m_2_3(float value);

      // optional float m_3_0 = 13;
      void clear_m_3_0();
      static const int kM30FieldNumber = 13;
      float m_3_0() const;
      void set_m_3_0(float value);

      // optional float m_3_1 = 14;
      void clear_m_3_1();
      static const int kM31FieldNumber = 14;
      float m_3_1() const;
      void set_m_3_1(float value);

      // optional float m_3_2 = 15;
      void clear_m_3_2();
      static const int kM32FieldNumber = 15;
      float m_3_2() const;
      void set_m_3_2(float value);

      // optional float m_3_3 = 16;
      void clear_m_3_3();
      static const int kM33FieldNumber = 16;
      float m_3_3() const;
      void set_m_3_3(float value);

      // @@protoc_insertion_point(class_scope:p3d_ecs.proto.LMatrix4f)
    private:
      ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
      float m_0_0_;
      float m_0_1_;
      float m_0_2_;
      float m_0_3_;
      float m_1_0_;
      float m_1_1_;
      float m_1_2_;
      float m_1_3_;
      float m_2_0_;
      float m_2_1_;
      float m_2_2_;
      float m_2_3_;
      float m_3_0_;
      float m_3_1_;
      float m_3_2_;
      float m_3_3_;
      mutable int _cached_size_;
      friend void protobuf_InitDefaults_component_5ftypes_2fluse_2eproto_impl();
      friend void protobuf_AddDesc_component_5ftypes_2fluse_2eproto_impl();
      friend void protobuf_AssignDesc_component_5ftypes_2fluse_2eproto();
      friend void protobuf_ShutdownFile_component_5ftypes_2fluse_2eproto();

      void InitAsDefaultInstance();
    };
    extern ::google::protobuf::internal::ExplicitlyConstructed<LMatrix4f>
      LMatrix4f_default_instance_;

// ===================================================================

// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
    // LVecBase3f

    // optional float x = 1;
    inline void LVecBase3f::clear_x() { x_ = 0; }
    inline float LVecBase3f::x() const {
      // @@protoc_insertion_point(field_get:p3d_ecs.proto.LVecBase3f.x)
      return x_;
    }
    inline void LVecBase3f::set_x(float value) {

      x_ = value;
      // @@protoc_insertion_point(field_set:p3d_ecs.proto.LVecBase3f.x)
    }

    // optional float y = 2;
    inline void LVecBase3f::clear_y() { y_ = 0; }
    inline float LVecBase3f::y() const {
      // @@protoc_insertion_point(field_get:p3d_ecs.proto.LVecBase3f.y)
      return y_;
    }
    inline void LVecBase3f::set_y(float value) {

      y_ = value;
      // @@protoc_insertion_point(field_set:p3d_ecs.proto.LVecBase3f.y)
    }

    // optional float z = 3;
    inline void LVecBase3f::clear_z() { z_ = 0; }
    inline float LVecBase3f::z() const {
      // @@protoc_insertion_point(field_get:p3d_ecs.proto.LVecBase3f.z)
      return z_;
    }
    inline void LVecBase3f::set_z(float value) {

      z_ = value;
      // @@protoc_insertion_point(field_set:p3d_ecs.proto.LVecBase3f.z)
    }

    inline const LVecBase3f* LVecBase3f::internal_default_instance() {
      return &LVecBase3f_default_instance_.get();
    }
    // -------------------------------------------------------------------

    // LMatrix4f

    // optional float m_0_0 = 1;
    inline void LMatrix4f::clear_m_0_0() { m_0_0_ = 0; }
    inline float LMatrix4f::m_0_0() const {
      // @@protoc_insertion_point(field_get:p3d_ecs.proto.LMatrix4f.m_0_0)
      return m_0_0_;
    }
    inline void LMatrix4f::set_m_0_0(float value) {

      m_0_0_ = value;
      // @@protoc_insertion_point(field_set:p3d_ecs.proto.LMatrix4f.m_0_0)
    }

    // optional float m_0_1 = 2;
    inline void LMatrix4f::clear_m_0_1() { m_0_1_ = 0; }
    inline float LMatrix4f::m_0_1() const {
      // @@protoc_insertion_point(field_get:p3d_ecs.proto.LMatrix4f.m_0_1)
      return m_0_1_;
    }
    inline void LMatrix4f::set_m_0_1(float value) {

      m_0_1_ = value;
      // @@protoc_insertion_point(field_set:p3d_ecs.proto.LMatrix4f.m_0_1)
    }

    // optional float m_0_2 = 3;
    inline void LMatrix4f::clear_m_0_2() { m_0_2_ = 0; }
    inline float LMatrix4f::m_0_2() const {
      // @@protoc_insertion_point(field_get:p3d_ecs.proto.LMatrix4f.m_0_2)
      return m_0_2_;
    }
    inline void LMatrix4f::set_m_0_2(float value) {

      m_0_2_ = value;
      // @@protoc_insertion_point(field_set:p3d_ecs.proto.LMatrix4f.m_0_2)
    }

    // optional float m_0_3 = 4;
    inline void LMatrix4f::clear_m_0_3() { m_0_3_ = 0; }
    inline float LMatrix4f::m_0_3() const {
      // @@protoc_insertion_point(field_get:p3d_ecs.proto.LMatrix4f.m_0_3)
      return m_0_3_;
    }
    inline void LMatrix4f::set_m_0_3(float value) {

      m_0_3_ = value;
      // @@protoc_insertion_point(field_set:p3d_ecs.proto.LMatrix4f.m_0_3)
    }

    // optional float m_1_0 = 5;
    inline void LMatrix4f::clear_m_1_0() { m_1_0_ = 0; }
    inline float LMatrix4f::m_1_0() const {
      // @@protoc_insertion_point(field_get:p3d_ecs.proto.LMatrix4f.m_1_0)
      return m_1_0_;
    }
    inline void LMatrix4f::set_m_1_0(float value) {

      m_1_0_ = value;
      // @@protoc_insertion_point(field_set:p3d_ecs.proto.LMatrix4f.m_1_0)
    }

    // optional float m_1_1 = 6;
    inline void LMatrix4f::clear_m_1_1() { m_1_1_ = 0; }
    inline float LMatrix4f::m_1_1() const {
      // @@protoc_insertion_point(field_get:p3d_ecs.proto.LMatrix4f.m_1_1)
      return m_1_1_;
    }
    inline void LMatrix4f::set_m_1_1(float value) {

      m_1_1_ = value;
      // @@protoc_insertion_point(field_set:p3d_ecs.proto.LMatrix4f.m_1_1)
    }

    // optional float m_1_2 = 7;
    inline void LMatrix4f::clear_m_1_2() { m_1_2_ = 0; }
    inline float LMatrix4f::m_1_2() const {
      // @@protoc_insertion_point(field_get:p3d_ecs.proto.LMatrix4f.m_1_2)
      return m_1_2_;
    }
    inline void LMatrix4f::set_m_1_2(float value) {

      m_1_2_ = value;
      // @@protoc_insertion_point(field_set:p3d_ecs.proto.LMatrix4f.m_1_2)
    }

    // optional float m_1_3 = 8;
    inline void LMatrix4f::clear_m_1_3() { m_1_3_ = 0; }
    inline float LMatrix4f::m_1_3() const {
      // @@protoc_insertion_point(field_get:p3d_ecs.proto.LMatrix4f.m_1_3)
      return m_1_3_;
    }
    inline void LMatrix4f::set_m_1_3(float value) {

      m_1_3_ = value;
      // @@protoc_insertion_point(field_set:p3d_ecs.proto.LMatrix4f.m_1_3)
    }

    // optional float m_2_0 = 9;
    inline void LMatrix4f::clear_m_2_0() { m_2_0_ = 0; }
    inline float LMatrix4f::m_2_0() const {
      // @@protoc_insertion_point(field_get:p3d_ecs.proto.LMatrix4f.m_2_0)
      return m_2_0_;
    }
    inline void LMatrix4f::set_m_2_0(float value) {

      m_2_0_ = value;
      // @@protoc_insertion_point(field_set:p3d_ecs.proto.LMatrix4f.m_2_0)
    }

    // optional float m_2_1 = 10;
    inline void LMatrix4f::clear_m_2_1() { m_2_1_ = 0; }
    inline float LMatrix4f::m_2_1() const {
      // @@protoc_insertion_point(field_get:p3d_ecs.proto.LMatrix4f.m_2_1)
      return m_2_1_;
    }
    inline void LMatrix4f::set_m_2_1(float value) {

      m_2_1_ = value;
      // @@protoc_insertion_point(field_set:p3d_ecs.proto.LMatrix4f.m_2_1)
    }

    // optional float m_2_2 = 11;
    inline void LMatrix4f::clear_m_2_2() { m_2_2_ = 0; }
    inline float LMatrix4f::m_2_2() const {
      // @@protoc_insertion_point(field_get:p3d_ecs.proto.LMatrix4f.m_2_2)
      return m_2_2_;
    }
    inline void LMatrix4f::set_m_2_2(float value) {

      m_2_2_ = value;
      // @@protoc_insertion_point(field_set:p3d_ecs.proto.LMatrix4f.m_2_2)
    }

    // optional float m_2_3 = 12;
    inline void LMatrix4f::clear_m_2_3() { m_2_3_ = 0; }
    inline float LMatrix4f::m_2_3() const {
      // @@protoc_insertion_point(field_get:p3d_ecs.proto.LMatrix4f.m_2_3)
      return m_2_3_;
    }
    inline void LMatrix4f::set_m_2_3(float value) {

      m_2_3_ = value;
      // @@protoc_insertion_point(field_set:p3d_ecs.proto.LMatrix4f.m_2_3)
    }

    // optional float m_3_0 = 13;
    inline void LMatrix4f::clear_m_3_0() { m_3_0_ = 0; }
    inline float LMatrix4f::m_3_0() const {
      // @@protoc_insertion_point(field_get:p3d_ecs.proto.LMatrix4f.m_3_0)
      return m_3_0_;
    }
    inline void LMatrix4f::set_m_3_0(float value) {

      m_3_0_ = value;
      // @@protoc_insertion_point(field_set:p3d_ecs.proto.LMatrix4f.m_3_0)
    }

    // optional float m_3_1 = 14;
    inline void LMatrix4f::clear_m_3_1() { m_3_1_ = 0; }
    inline float LMatrix4f::m_3_1() const {
      // @@protoc_insertion_point(field_get:p3d_ecs.proto.LMatrix4f.m_3_1)
      return m_3_1_;
    }
    inline void LMatrix4f::set_m_3_1(float value) {

      m_3_1_ = value;
      // @@protoc_insertion_point(field_set:p3d_ecs.proto.LMatrix4f.m_3_1)
    }

    // optional float m_3_2 = 15;
    inline void LMatrix4f::clear_m_3_2() { m_3_2_ = 0; }
    inline float LMatrix4f::m_3_2() const {
      // @@protoc_insertion_point(field_get:p3d_ecs.proto.LMatrix4f.m_3_2)
      return m_3_2_;
    }
    inline void LMatrix4f::set_m_3_2(float value) {

      m_3_2_ = value;
      // @@protoc_insertion_point(field_set:p3d_ecs.proto.LMatrix4f.m_3_2)
    }

    // optional float m_3_3 = 16;
    inline void LMatrix4f::clear_m_3_3() { m_3_3_ = 0; }
    inline float LMatrix4f::m_3_3() const {
      // @@protoc_insertion_point(field_get:p3d_ecs.proto.LMatrix4f.m_3_3)
      return m_3_3_;
    }
    inline void LMatrix4f::set_m_3_3(float value) {

      m_3_3_ = value;
      // @@protoc_insertion_point(field_set:p3d_ecs.proto.LMatrix4f.m_3_3)
    }

    inline const LMatrix4f* LMatrix4f::internal_default_instance() {
      return &LMatrix4f_default_instance_.get();
    }
#endif // !PROTOBUF_INLINE_NOT_IN_HEADERS
    // -------------------------------------------------------------------

    // @@protoc_insertion_point(namespace_scope)

  } // namespace proto
} // namespace p3d_ecs

// @@protoc_insertion_point(global_scope)

#endif // PROTOBUF_component_5ftypes_2fluse_2eproto__INCLUDED
