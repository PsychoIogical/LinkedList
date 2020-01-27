// -*- C++ -*-
/**
 * @author Dalton Yoder
 * @file LLTest.cpp
 * @desc Implements LLTest.h
 * @date 24 January 2020
 */
#include "LLTest.h"

/**
 * CONSTRUCTOR/DECONSTRUCTOR
 */
LLTest::LLTest() {
  testCount = 0;
  passedCount = 0;
}

LLTest::~LLTest() {}
/**
 * MEMBER FUNCTIONS
 */
void LLTest::printPassFail(bool passed) {
  if(passed) {
    std::cout<<"PASSED\n";
    passedCount++;
  } else {
    std::cout<<"FAILED\n";
  }
  testCount++;
}
void LLTest::runTests() {
  int tempPass = 0;
  int tempTest = 0;
  std::cout<<"================================================================\n"
           <<"                  TEST SUITE FOR LINKEDLIST                     \n"
           <<"================================================================\n"
           <<"    isEmpty() Tests\n"
           <<"----------------------------------------------------------------\n";
  test1_isEmpty();
  test2_isEmpty();
  std::cout<<"----------------------------------------------------------------\n"
           <<"TESTS COMPLETED = 2\n"
           <<"TESTS PASSED = " << passedCount << "\n";
  tempPass = passedCount;
  tempTest = testCount;

  test1_getLength();
  test2_getLength();
  test3_getLength();
  test4_getLength();

  test1_insert();
  test2_insert();
  test3_insert();
  test4_insert();
  test5_insert();

  test1_remove();
  test2_remove();
  test3_remove();
  test4_remove();

  test1_clear();

  test1_getEntry();
  test2_getEntry();
  test3_getEntry();
  test4_getEntry();

  test1_replace();
  test2_replace();
  test3_replace();
  test4_replace();

  test1_addFront();
  test2_addFront();

  test1_removeFront();
  test2_removeFront();

  test1_addBack();
  test2_addBack();

  test1_removeBack();
  test2_removeBack();
}
/**
 * TESTS
 */
/* @brief No items in list, isEmpty() returns true. */
void LLTest::test1_isEmpty() {
  LinkedList<int>* test = new LinkedList<int>();
  std::cout<<"TEST 1: No items in list, isEmpty() returns true. --> ";
  printPassFail(test->isEmpty());
}
/* @brief Items in list, isEmpty() returns false. */
void LLTest::test2_isEmpty() {
  LinkedList<int>* test = new LinkedList<int>();
  test->addFront(1);
  std::cout<<"TEST 2: Item(s) in list, isEmpty() returns false. --> ";
  printPassFail(!(test->isEmpty()));
}

/* @brief getLength() returns 0 when list is empty. */
void LLTest::test1_getLength() {

}
/* @brief getLength() returns 1 after one addition to the list. */
void LLTest::test2_getLength() {

}
/* @brief getLength() returns correct value after multiple additions. */
void LLTest::test3_getLength() {

}
/* @brief getLength() returns correct value after multiple additions and deletions. */
void LLTest::test4_getLength() {

}

/* @brief Can insert() into empty list. */
void LLTest::test1_insert() {

}
/* @brief Can insert() into non-empty list at the beginning. */
void LLTest::test2_insert() {

}
/* @brief Can insert() into non-empty list at the end. */
void LLTest::test3_insert() {

}
/* @brief Can insert() into non-empty list in the middle. */
void LLTest::test4_insert() {

}
/* @brief insert() throws an error correctly if position is invalid. */
void LLTest::test5_insert() {

}

/* @brief Can remove() at front of  non-empty list. */
void LLTest::test1_remove() {

}
/* @brief Can remove() at back of non-empty list. */
void LLTest::test2_remove() {

}
/* @brief Can remove() in the middle of the non-empty list. */
void LLTest::test3_remove() {

}
/* @brief remove() throws an error correctly if position is invalid. */
void LLTest::test4_remove() {

}

/* @brief clear() clears the list completely. */
void LLTest::test1_clear() {

}

/* @brief getEntry() returns right value at front of list. */
void LLTest::test1_getEntry() {

}
/* @brief getEntry() returns right value at back of list. */
void LLTest::test2_getEntry() {

}
/* @brief getEntry() returns right value in the middle of the list. */
void LLTest::test3_getEntry() {

}
/* @brief getEntry() throws an error correctly if position is invalid. */
void LLTest::test4_getEntry() {

}

/* @brief replace() can replace the front. */
void LLTest::test1_replace() {

}
/* @brief replace() can replace the back. */
void LLTest::test2_replace() {

}
/* @brief replace() can replace a middle value. */
void LLTest::test3_replace() {

}
/* @brief replace() throws an error correctly if position is invalid. */
void LLTest::test4_replace() {

}

/* @brief addFront() works correctly if list is empty. */
void LLTest::test1_addFront() {

}
/* @brief addFront() works correctly if list is non-empty. */
void LLTest::test2_addFront() {

}

/* @brief removeFront() works correctly. */
void LLTest::test1_removeFront() {

}
/* @brief removeFront() throws an error correctly if list is empty. */
void LLTest::test2_removeFront() {

}

/* @brief addBack() works correctly if list is non-empty. */
void LLTest::test1_addBack() {

}
/* @brief addBack() works correctly if list is empty. */
void LLTest::test2_addBack() {

}

/* @brief removeBack() works correctly. */
void LLTest::test1_removeBack() {

}
/* @brief removeBack() throws an error correctly if list is empty. */
void LLTest::test2_removeBack() {

}
