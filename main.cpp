// -*- C++ -*-
/**
 * @author Dalton Yoder
 * @file main.cpp
 * @desc yes
 * @date 24 January 2020
 */
#include "LLTest.h"

int main() {
  LLTest* testSuite = new LLTest();
  testSuite->runTests();
  delete testSuite;
  return 0;
}
