// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Curves_proto.proto

#include "Curves_proto.pb.h"

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
namespace Curves_proto {
class MatrixDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Matrix>
      _instance;
} _Matrix_default_instance_;
class Piecewise_polynomial_curveDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Piecewise_polynomial_curve>
      _instance;
} _Piecewise_polynomial_curve_default_instance_;
}  // namespace Curves_proto
namespace protobuf_Curves_5fproto_2eproto {
void InitDefaultsMatrixImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::Curves_proto::_Matrix_default_instance_;
    new (ptr) ::Curves_proto::Matrix();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::Curves_proto::Matrix::InitAsDefaultInstance();
}

void InitDefaultsMatrix() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsMatrixImpl);
}

void InitDefaultsPiecewise_polynomial_curveImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  protobuf_Curves_5fproto_2eproto::InitDefaultsMatrix();
  {
    void* ptr = &::Curves_proto::_Piecewise_polynomial_curve_default_instance_;
    new (ptr) ::Curves_proto::Piecewise_polynomial_curve();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::Curves_proto::Piecewise_polynomial_curve::InitAsDefaultInstance();
}

void InitDefaultsPiecewise_polynomial_curve() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsPiecewise_polynomial_curveImpl);
}

::google::protobuf::Metadata file_level_metadata[2];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::Curves_proto::Matrix, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::Curves_proto::Matrix, rows_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::Curves_proto::Matrix, cols_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::Curves_proto::Matrix, data_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::Curves_proto::Piecewise_polynomial_curve, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::Curves_proto::Piecewise_polynomial_curve, number_of_curves_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::Curves_proto::Piecewise_polynomial_curve, dimension_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::Curves_proto::Piecewise_polynomial_curve, time_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::Curves_proto::Piecewise_polynomial_curve, curves_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::Curves_proto::Matrix)},
  { 8, -1, sizeof(::Curves_proto::Piecewise_polynomial_curve)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::Curves_proto::_Matrix_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::Curves_proto::_Piecewise_polynomial_curve_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "Curves_proto.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 2);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\022Curves_proto.proto\022\014Curves_proto\"6\n\006Ma"
      "trix\022\014\n\004rows\030\001 \001(\r\022\014\n\004cols\030\002 \001(\r\022\020\n\004data"
      "\030\003 \003(\001B\002\020\001\"\201\001\n\032Piecewise_polynomial_curv"
      "e\022\030\n\020number_of_curves\030\001 \001(\r\022\021\n\tdimension"
      "\030\002 \001(\r\022\020\n\004time\030\003 \003(\001B\002\020\001\022$\n\006curves\030\004 \003(\013"
      "2\024.Curves_proto.Matrixb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 230);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "Curves_proto.proto", &protobuf_RegisterTypes);
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
}  // namespace protobuf_Curves_5fproto_2eproto
namespace Curves_proto {

// ===================================================================

void Matrix::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Matrix::kRowsFieldNumber;
const int Matrix::kColsFieldNumber;
const int Matrix::kDataFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Matrix::Matrix()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_Curves_5fproto_2eproto::InitDefaultsMatrix();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:Curves_proto.Matrix)
}
Matrix::Matrix(const Matrix& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      data_(from.data_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&rows_, &from.rows_,
    static_cast<size_t>(reinterpret_cast<char*>(&cols_) -
    reinterpret_cast<char*>(&rows_)) + sizeof(cols_));
  // @@protoc_insertion_point(copy_constructor:Curves_proto.Matrix)
}

void Matrix::SharedCtor() {
  ::memset(&rows_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&cols_) -
      reinterpret_cast<char*>(&rows_)) + sizeof(cols_));
  _cached_size_ = 0;
}

Matrix::~Matrix() {
  // @@protoc_insertion_point(destructor:Curves_proto.Matrix)
  SharedDtor();
}

void Matrix::SharedDtor() {
}

void Matrix::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Matrix::descriptor() {
  ::protobuf_Curves_5fproto_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_Curves_5fproto_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Matrix& Matrix::default_instance() {
  ::protobuf_Curves_5fproto_2eproto::InitDefaultsMatrix();
  return *internal_default_instance();
}

Matrix* Matrix::New(::google::protobuf::Arena* arena) const {
  Matrix* n = new Matrix;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Matrix::Clear() {
// @@protoc_insertion_point(message_clear_start:Curves_proto.Matrix)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  data_.Clear();
  ::memset(&rows_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&cols_) -
      reinterpret_cast<char*>(&rows_)) + sizeof(cols_));
  _internal_metadata_.Clear();
}

bool Matrix::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:Curves_proto.Matrix)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 rows = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &rows_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 cols = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &cols_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated double data = 3 [packed = true];
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, this->mutable_data())));
        } else if (
            static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(25u /* 25 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 1, 26u, input, this->mutable_data())));
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
  // @@protoc_insertion_point(parse_success:Curves_proto.Matrix)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:Curves_proto.Matrix)
  return false;
#undef DO_
}

void Matrix::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:Curves_proto.Matrix)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 rows = 1;
  if (this->rows() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->rows(), output);
  }

  // uint32 cols = 2;
  if (this->cols() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->cols(), output);
  }

  // repeated double data = 3 [packed = true];
  if (this->data_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(3, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(static_cast< ::google::protobuf::uint32>(
        _data_cached_byte_size_));
    ::google::protobuf::internal::WireFormatLite::WriteDoubleArray(
      this->data().data(), this->data_size(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:Curves_proto.Matrix)
}

::google::protobuf::uint8* Matrix::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:Curves_proto.Matrix)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 rows = 1;
  if (this->rows() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->rows(), target);
  }

  // uint32 cols = 2;
  if (this->cols() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->cols(), target);
  }

  // repeated double data = 3 [packed = true];
  if (this->data_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      3,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
        static_cast< ::google::protobuf::int32>(
            _data_cached_byte_size_), target);
    target = ::google::protobuf::internal::WireFormatLite::
      WriteDoubleNoTagToArray(this->data_, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Curves_proto.Matrix)
  return target;
}

size_t Matrix::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Curves_proto.Matrix)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated double data = 3 [packed = true];
  {
    unsigned int count = static_cast<unsigned int>(this->data_size());
    size_t data_size = 8UL * count;
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
            static_cast< ::google::protobuf::int32>(data_size));
    }
    int cached_size = ::google::protobuf::internal::ToCachedSize(data_size);
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _data_cached_byte_size_ = cached_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  // uint32 rows = 1;
  if (this->rows() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->rows());
  }

  // uint32 cols = 2;
  if (this->cols() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->cols());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Matrix::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:Curves_proto.Matrix)
  GOOGLE_DCHECK_NE(&from, this);
  const Matrix* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Matrix>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:Curves_proto.Matrix)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:Curves_proto.Matrix)
    MergeFrom(*source);
  }
}

void Matrix::MergeFrom(const Matrix& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Curves_proto.Matrix)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  data_.MergeFrom(from.data_);
  if (from.rows() != 0) {
    set_rows(from.rows());
  }
  if (from.cols() != 0) {
    set_cols(from.cols());
  }
}

void Matrix::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:Curves_proto.Matrix)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Matrix::CopyFrom(const Matrix& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Curves_proto.Matrix)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Matrix::IsInitialized() const {
  return true;
}

void Matrix::Swap(Matrix* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Matrix::InternalSwap(Matrix* other) {
  using std::swap;
  data_.InternalSwap(&other->data_);
  swap(rows_, other->rows_);
  swap(cols_, other->cols_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Matrix::GetMetadata() const {
  protobuf_Curves_5fproto_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_Curves_5fproto_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

void Piecewise_polynomial_curve::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Piecewise_polynomial_curve::kNumberOfCurvesFieldNumber;
const int Piecewise_polynomial_curve::kDimensionFieldNumber;
const int Piecewise_polynomial_curve::kTimeFieldNumber;
const int Piecewise_polynomial_curve::kCurvesFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Piecewise_polynomial_curve::Piecewise_polynomial_curve()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_Curves_5fproto_2eproto::InitDefaultsPiecewise_polynomial_curve();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:Curves_proto.Piecewise_polynomial_curve)
}
Piecewise_polynomial_curve::Piecewise_polynomial_curve(const Piecewise_polynomial_curve& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      time_(from.time_),
      curves_(from.curves_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&number_of_curves_, &from.number_of_curves_,
    static_cast<size_t>(reinterpret_cast<char*>(&dimension_) -
    reinterpret_cast<char*>(&number_of_curves_)) + sizeof(dimension_));
  // @@protoc_insertion_point(copy_constructor:Curves_proto.Piecewise_polynomial_curve)
}

void Piecewise_polynomial_curve::SharedCtor() {
  ::memset(&number_of_curves_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&dimension_) -
      reinterpret_cast<char*>(&number_of_curves_)) + sizeof(dimension_));
  _cached_size_ = 0;
}

Piecewise_polynomial_curve::~Piecewise_polynomial_curve() {
  // @@protoc_insertion_point(destructor:Curves_proto.Piecewise_polynomial_curve)
  SharedDtor();
}

void Piecewise_polynomial_curve::SharedDtor() {
}

void Piecewise_polynomial_curve::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Piecewise_polynomial_curve::descriptor() {
  ::protobuf_Curves_5fproto_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_Curves_5fproto_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Piecewise_polynomial_curve& Piecewise_polynomial_curve::default_instance() {
  ::protobuf_Curves_5fproto_2eproto::InitDefaultsPiecewise_polynomial_curve();
  return *internal_default_instance();
}

Piecewise_polynomial_curve* Piecewise_polynomial_curve::New(::google::protobuf::Arena* arena) const {
  Piecewise_polynomial_curve* n = new Piecewise_polynomial_curve;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Piecewise_polynomial_curve::Clear() {
// @@protoc_insertion_point(message_clear_start:Curves_proto.Piecewise_polynomial_curve)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  time_.Clear();
  curves_.Clear();
  ::memset(&number_of_curves_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&dimension_) -
      reinterpret_cast<char*>(&number_of_curves_)) + sizeof(dimension_));
  _internal_metadata_.Clear();
}

bool Piecewise_polynomial_curve::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:Curves_proto.Piecewise_polynomial_curve)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 number_of_curves = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &number_of_curves_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 dimension = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &dimension_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated double time = 3 [packed = true];
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, this->mutable_time())));
        } else if (
            static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(25u /* 25 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 1, 26u, input, this->mutable_time())));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .Curves_proto.Matrix curves = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(input, add_curves()));
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
  // @@protoc_insertion_point(parse_success:Curves_proto.Piecewise_polynomial_curve)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:Curves_proto.Piecewise_polynomial_curve)
  return false;
#undef DO_
}

void Piecewise_polynomial_curve::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:Curves_proto.Piecewise_polynomial_curve)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 number_of_curves = 1;
  if (this->number_of_curves() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->number_of_curves(), output);
  }

  // uint32 dimension = 2;
  if (this->dimension() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->dimension(), output);
  }

  // repeated double time = 3 [packed = true];
  if (this->time_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(3, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(static_cast< ::google::protobuf::uint32>(
        _time_cached_byte_size_));
    ::google::protobuf::internal::WireFormatLite::WriteDoubleArray(
      this->time().data(), this->time_size(), output);
  }

  // repeated .Curves_proto.Matrix curves = 4;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->curves_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, this->curves(static_cast<int>(i)), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:Curves_proto.Piecewise_polynomial_curve)
}

::google::protobuf::uint8* Piecewise_polynomial_curve::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:Curves_proto.Piecewise_polynomial_curve)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 number_of_curves = 1;
  if (this->number_of_curves() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->number_of_curves(), target);
  }

  // uint32 dimension = 2;
  if (this->dimension() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->dimension(), target);
  }

  // repeated double time = 3 [packed = true];
  if (this->time_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      3,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
        static_cast< ::google::protobuf::int32>(
            _time_cached_byte_size_), target);
    target = ::google::protobuf::internal::WireFormatLite::
      WriteDoubleNoTagToArray(this->time_, target);
  }

  // repeated .Curves_proto.Matrix curves = 4;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->curves_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        4, this->curves(static_cast<int>(i)), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Curves_proto.Piecewise_polynomial_curve)
  return target;
}

size_t Piecewise_polynomial_curve::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Curves_proto.Piecewise_polynomial_curve)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated double time = 3 [packed = true];
  {
    unsigned int count = static_cast<unsigned int>(this->time_size());
    size_t data_size = 8UL * count;
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
            static_cast< ::google::protobuf::int32>(data_size));
    }
    int cached_size = ::google::protobuf::internal::ToCachedSize(data_size);
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _time_cached_byte_size_ = cached_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  // repeated .Curves_proto.Matrix curves = 4;
  {
    unsigned int count = static_cast<unsigned int>(this->curves_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->curves(static_cast<int>(i)));
    }
  }

  // uint32 number_of_curves = 1;
  if (this->number_of_curves() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->number_of_curves());
  }

  // uint32 dimension = 2;
  if (this->dimension() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->dimension());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Piecewise_polynomial_curve::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:Curves_proto.Piecewise_polynomial_curve)
  GOOGLE_DCHECK_NE(&from, this);
  const Piecewise_polynomial_curve* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Piecewise_polynomial_curve>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:Curves_proto.Piecewise_polynomial_curve)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:Curves_proto.Piecewise_polynomial_curve)
    MergeFrom(*source);
  }
}

void Piecewise_polynomial_curve::MergeFrom(const Piecewise_polynomial_curve& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Curves_proto.Piecewise_polynomial_curve)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  time_.MergeFrom(from.time_);
  curves_.MergeFrom(from.curves_);
  if (from.number_of_curves() != 0) {
    set_number_of_curves(from.number_of_curves());
  }
  if (from.dimension() != 0) {
    set_dimension(from.dimension());
  }
}

void Piecewise_polynomial_curve::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:Curves_proto.Piecewise_polynomial_curve)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Piecewise_polynomial_curve::CopyFrom(const Piecewise_polynomial_curve& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Curves_proto.Piecewise_polynomial_curve)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Piecewise_polynomial_curve::IsInitialized() const {
  return true;
}

void Piecewise_polynomial_curve::Swap(Piecewise_polynomial_curve* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Piecewise_polynomial_curve::InternalSwap(Piecewise_polynomial_curve* other) {
  using std::swap;
  time_.InternalSwap(&other->time_);
  curves_.InternalSwap(&other->curves_);
  swap(number_of_curves_, other->number_of_curves_);
  swap(dimension_, other->dimension_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Piecewise_polynomial_curve::GetMetadata() const {
  protobuf_Curves_5fproto_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_Curves_5fproto_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace Curves_proto

// @@protoc_insertion_point(global_scope)
