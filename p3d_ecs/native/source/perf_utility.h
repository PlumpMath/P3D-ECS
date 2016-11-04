#pragma once

#ifndef P3D_ECS_PERFUTILTIY_H
#define P3D_ECS_PERFUTILTIY_H

#include <vector>
#include <algorithm>


template < typename T >
typename std::vector<T>::const_iterator vector_find(const std::vector<T>& vec, const T& elem) {
  return std::find(vec.cbegin(), vec.cend(), elem);
}

template < typename T >
typename std::vector<T>::iterator vector_find(std::vector<T>& vec, const T& elem) {
  return std::find(vec.begin(), vec.end(), elem);
}

template < typename T >
bool vector_contains(const std::vector<T>& vec, const T& elem) {
  return std::find(vec.cbegin(), vec.cend(), elem) != vec.cend();
}


template <typename T>
void vector_erase_fast_if_present(std::vector<T> &vec, T elem) {
  // Fast removal by swapping with the last element and resizing by -1
  if (vec.empty())
    return;
  auto it = vector_find(vec, elem);
  if (it != vec.end())
    vector_erase_fast(vec, it);
}

template <typename T> void vector_erase_fast(std::vector<T> &vec, T elem) {
  // Fast removal by swapping with the last element and resizing by -1
  // Requires: vec contains elem
  assert(!vec.empty());
  auto it = vector_find(vec, elem);
  assert(it != vec.end());
  vector_erase_fast(vec, it);
}

template <typename T>
void vector_erase_fast(std::vector<T> &vec,
                       typename std::vector<T>::iterator it) {
  assert(!vec.empty());
  auto last_element_iter = std::prev(vec.end());
  if (it == last_element_iter) {
    // We are removing the last element, just reduce size by 1
    vec.pop_back();
  } else {
    // We are removing any arbitrary element, swap with last element and pop
    // last
    std::swap(*it, *last_element_iter);
    vec.pop_back();
  }
}


#endif