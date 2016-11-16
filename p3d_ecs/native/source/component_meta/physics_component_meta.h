#pragma once

// AUTOGENERATED. DO NOT EDIT!
// Instead modify the component meta file.

#ifndef P3D_ECS_PHYSICSCOMPONENT_METACLS_H
#define P3D_ECS_PHYSICSCOMPONENT_METACLS_H

#include "config_module.h"
#include "component.h"
#include "leak_detector.h"
#include "memory_pool.h"
#include "luse.h"
#include "uuid.h"
#include <string>

class Entity;
class EntityManager;
class PhysicsComponent;

class PhysicsComponentMeta : public Component {
protected:
  using superclass = PhysicsComponentMeta;

public:
  DEFINE_COMPONENT_BASE();

  // AUTOGEN:: accessors
  inline float get_mass() const { return _mass; }
  inline void set_mass(float val) { _mass = val; }

  inline bool get_is_static() const { return _is_static; }
  inline void set_is_static(bool val) { _is_static = val; }

  // AUTOGEN:: serialization

#ifndef INTERROGATE
  virtual void serialize(p3d_ecs::proto::Components* dest) const override;
  void deserialize(const p3d_ecs::proto::PhysicsComponent& message);
  virtual bool data_equals(const Component& other) const override;
  virtual void fillin_ptrs() override;
#endif

protected:
  // AUTOGEN:: constructor
  inline PhysicsComponentMeta(Entity* entity) : Component(entity)
    , _mass(10.0)
    , _is_static(false)
    { ECS_ON_CREATE("PhysicsComponentMeta"); };

  ~PhysicsComponentMeta() { ECS_ON_DELETE("PhysicsComponentMeta"); };
  // AUTOGEN:: internal members
  float _mass;

  bool _is_static;

};
#endif
