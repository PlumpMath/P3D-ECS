
// AUTOGENERATED. DO NOT EDIT!
// Instead modify the component meta file.

#include "transform_component_meta.h"

#include "plain_text_serializer.h"

IMPLEMENT_COMPONENT_BASE(TransformComponent, TransformComponentMeta, 2u);

// AUTOGEN: member names for plain text serialization
const char* TransformComponentMeta::children_CSTR = "children";
const char* TransformComponentMeta::hpr_CSTR = "hpr";
const char* TransformComponentMeta::is_dirty_CSTR = "is_dirty";
const char* TransformComponentMeta::mat_CSTR = "mat";
const char* TransformComponentMeta::parent_CSTR = "parent";
const char* TransformComponentMeta::pos_CSTR = "pos";
const char* TransformComponentMeta::scale_CSTR = "scale";

void
TransformComponentMeta::serialize(PlainTextSerializer* serializer) const {
  if (!_children.empty()) {
    serializer->serialize_prop_vec(children_CSTR, _children);
  }
  if (!(_hpr.almost_equal(LVecBase3f()))) {
    serializer->serialize_prop(hpr_CSTR, _hpr);
  }
  if (!(_is_dirty == bool(false))) {
    serializer->serialize_prop(is_dirty_CSTR, _is_dirty);
  }
  if (!(_mat == LMatrix4f(LMatrix4f::ident_mat()))) {
    serializer->serialize_prop(mat_CSTR, _mat);
  }
  if (!(_parent == nullptr)) {
    serializer->serialize_prop(parent_CSTR, _parent);
  }
  if (!(_pos.almost_equal(LVecBase3f()))) {
    serializer->serialize_prop(pos_CSTR, _pos);
  }
  if (!(_scale.almost_equal(LVecBase3f(1, 1, 1)))) {
    serializer->serialize_prop(scale_CSTR, _scale);
  }
}

bool
TransformComponentMeta::data_equals(const Component& other) const {
  if (&other == this)
    return true; // same instance

  const TransformComponentMeta* downcasted_ptr =
    static_cast<const TransformComponentMeta*>(&other); // There must be a better way than this
  assert(downcasted_ptr != nullptr); // Should never happen! Since our component table would be corrupted then.
  const TransformComponentMeta& other_ref = *downcasted_ptr;

  if (!(vector_set_intersection(_children, other_ref._children)))
    return false;
  if (!(_hpr.almost_equal(other_ref._hpr)))
    return false;
  if (!(_is_dirty == other_ref._is_dirty))
    return false;
  if (!(_mat == other_ref._mat))
    return false;
  if (!(_parent == other_ref._parent))
    return false;
  if (!(_pos.almost_equal(other_ref._pos)))
    return false;
  if (!(_scale.almost_equal(other_ref._scale)))
    return false;
  return true;
}
