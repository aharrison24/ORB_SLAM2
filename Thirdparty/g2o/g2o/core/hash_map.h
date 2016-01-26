#ifndef HASH_MAP_H_
#define HASH_MAP_H_

// Necessary to include a standard header in order to define _LIBCPP_VERSION.
#include <new>

#if __cplusplus >= 201103L || defined(__GXX_EXPERIMENTAL_CXX0X__) || defined(_LIBCPP_VERSION)
  #include <unordered_map>
  #define G2O_HASH_NAMESPACE  std
#elif defined(_MSC_VER) && _MSC_VER >= 1500
  #if _MSC_VER >= 1600  // Visual Studio 2010+
    #include <unordered_map>
    #define G2O_HASH_NAMESPACE  std
  #else // Visual Studio before 2010
    #include <tr1/unordered_map>
    #define G2O_HASH_NAMESPACE  std::tr1
  #endif
#elif defined(__GNUC__)
  #include <tr1/unordered_map>
  #define G2O_HASH_NAMESPACE  std::tr1
#else
  #error "Unable to set G2O_HASH_NAMESPACE"
#endif

#endif // HASH_MAP_H_

