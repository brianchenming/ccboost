/*
 *      Author: Ming Chen, v.mingchen@gmail.com
 * Description: test Foo.
 */

#include <gtest/gtest.h>
#include "foo.h"

TEST(Foo, fooTest) {
  Foo foo;
  EXPECT_EQ(4, foo.foo("Ming"));
}
