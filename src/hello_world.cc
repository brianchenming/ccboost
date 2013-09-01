/*
 *      Author: Ming Chen, v.mingchen@gmail.com
 * Description: ccboost Hello World.
 */

#include <gflags/gflags.h>
#include <iostream>

DEFINE_string(name, "World", "Name of the person of the greeting.");

int main(int argc, char *argv[])
{
  std::string usage("This program print a greeting message.\nUsage: ");
  usage += argv[0];
  usage += " <name>";
  gflags::SetUsageMessage(usage);
  gflags::ParseCommandLineFlags(&argc, &argv, true);
  std::cout << "Hello, " << FLAGS_name << std::endl;
  return 0;
}
