/*
 *      Author: Ming Chen, v.mingchen@gmail.com
 * Description: ccboost template.
 */

#ifndef _FOO_H
#define _FOO_H

#include <string>

class Foo {
 public:
  virtual ~Foo() {}
  int foo(const std::string& str) const { return str.length(); }
};

#endif
