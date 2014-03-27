#ifndef KEYUPEVENTTOKEY_HPP
#define KEYUPEVENTTOKEY_HPP

#include "KeyToKey.hpp"

namespace org_pqrs_KeyRemap4MacBook {
  namespace RemapFunc {
    class KeyUpEventToKey {
    public:
      bool remap(RemapParams& remapParams);

      // ----------------------------------------
      // [0] => fromEvent_
      // [1] => toKeys_[0]
      // [2] => toKeys_[1]
      // [3] => ...
      void add(unsigned int datatype, unsigned int newval);

    private:
      KeyToKey keytokey_;
    };
  }
}

#endif