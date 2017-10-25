
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_crypto_interfaces_DHPrivateKey__
#define __javax_crypto_interfaces_DHPrivateKey__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace math
    {
        class BigInteger;
    }
  }
  namespace javax
  {
    namespace crypto
    {
      namespace interfaces
      {
          class DHPrivateKey;
      }
      namespace spec
      {
          class DHParameterSpec;
      }
    }
  }
}

class javax::crypto::interfaces::DHPrivateKey : public ::java::lang::Object
{

public:
  virtual ::java::math::BigInteger * getX() = 0;
  virtual ::javax::crypto::spec::DHParameterSpec * getParams() = 0;
  virtual ::java::lang::String * getAlgorithm() = 0;
  virtual ::java::lang::String * getFormat() = 0;
  virtual JArray< jbyte > * getEncoded() = 0;
  static const jlong serialVersionUID = 2211791113380396553LL;
  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif // __javax_crypto_interfaces_DHPrivateKey__