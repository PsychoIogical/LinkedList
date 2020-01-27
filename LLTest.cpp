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
  LinkedList<int> test;
  std::cout<<"TEST 1: No items in list, isEmpty() returns true. --> ";
  printPassFail(test.isEmpty());
}
/* @brief Items in list, isEmpty() returns false. */
void LLTest::test2_isEmpty() {
  LinkedList<int> test;
  test.addFront(1);
  std::cout<<"TEST 2: Item(s) in list, isEmpty() returns false. --> ";
  printPassFail(!(test.isEmpty()));
}

/* @brief getLength() returns 0 when list is empty. */
void LLTest::test1_getLength() {
  LinkedList<int> test;
  std::cout<<"TEST 1: getLength() returns 0 when list is empty. --> ";
  printPassFail(test.getLength() == 0);
}
/* @brief getLength() returns 1 after one addition to the list. */
void LLTest::test2_getLength() {
  LinkedList<int> test;
  test.addFront(1);
  std::cout<<"TEST 2: getLength() returns 1 after one addition. --> ";
  printPassFail(test.getLength() == 1);
}
/* @brief getLength() returns correct value after multiple additions. */
void LLTest::test3_getLength() {
  LinkedList<int> test;
  for(int i = 1 ; i <= 4 ; i++) { test.addBack(i); } // 1->2->3->4
  std::cout<<"TEST 3: getLength() returns correct value after multiple additions. --> ";
  printPassFail(test.getLength() == 4);
}
/* @brief getLength() returns correct value after multiple additions and deletions. */
void LLTest::test4_getLength() {
  LinkedList<int> test;
  for(int i = 1 ; i <= 6 ; i++) { test.addBack(i); } //1->2->3->4->5->6
  for(int i = 1 ; i <= 3 ; i++) { test.removeBack(); } //1->2->3
  std::cout<<"TEST 4: getLength() returns correct value after multiple additions/deletions. --> ";
  printPassFail(test.getLength() == 3);
}

/* @brief Can insert() into empty list. */
void LLTest::test1_insert() {
  LinkedList<int> test;
  test.insert(1,1);
  std::cout<<"TEST 1: Can insert() into empty list. --> ";
  printPassFail((test.getLength() == 1) && (test.getEntry(1) == 1));
}
/* @brief Can insert() into non-empty list at the beginning. */
void LLTest::test2_insert() {
  LinkedList<int> test;
  for(int i = 1 ; i <= 4 ; i++) { test.insert(i, i); } //1->2->3->4
  test.insert(1,5); //5->1->2->3->4
  std::cout<<"TEST 2: Can insert() into non-empty list at the beginning. --> ";
  printPassFail((test.getLength() == 5) && (test.getEntry(1) == 5));
}
/* @brief Can insert() into non-empty list at the end. */
void LLTest::test3_insert() {
  LinkedList<int> test;
  for(int i = 1 ; i <= 4 ; i++) { test.insert(i, i); } //1->2->3->4
  test.insert(5,5); //1->2->3->4->5
  std::cout<<"TEST 3: Can insert() into non-empty list at the end. --> ";
  printPassFail((test.getLength() == 5) && (test.getEntry(5) == 5));
}
/* @brief Can insert() into non-empty list in the middle. */
void LLTest::test4_insert() {
  LinkedList<int> test;
  for(int i = 1 ; i <= 4 ; i++) { test.insert(i, i); } //1->2->3->4
  test.insert(2,5); //1->5->2->3->4
  std::cout<<"TEST 4: Can insert() into non-empty list in the middle. --> ";
  printPassFail((test.getLength() == 5) && (test.getEntry(2) == 5));
}
/* @brief insert() throws an error correctly if position is invalid. */
void LLTest::test5_insert() {
  LinkedList<int> test;
  bool passed = false;
  try {
    test.insert(3,1);
  } catch (const std::runtime_error& e) {
    passed = true;
  }
  std::cout<<"TEST 5: insert() throws an error correctly if position is invalid. --> ";
  printPassFail(passed);
}

/* @brief Can remove() at front of non-empty list. */
void LLTest::test1_remove() {
  LinkedList<int> test;
  for(int i = 1 ; i <= 4 ; i++) { test.insert(i, i); } //1->2->3->4
  test.remove(1); //2->3->4
  std::cout<<"TEST 1: Can remove() at front of non-empty list. --> ";
  printPassFail((test.getLength() == 3) && (test.getEntry(1) == 2));
}
/* @brief Can remove() at back of non-empty list. */
void LLTest::test2_remove() {
  LinkedList<int> test;
  for(int i = 1 ; i <= 4 ; i++) { test.insert(i, i); } //1->2->3->4
  test.remove(4); //1->2->3
  std::cout<<"TEST 2: Can remove() at back of non-empty list. --> ";
  printPassFail(test.getLength() == 3);
}
/* @brief Can remove() in the middle of the non-empty list. */
void LLTest::test3_remove() {
  LinkedList<int> test;
  for(int i = 1 ; i <= 7 ; i++) { test.insert(i, i); } //1->2->...->7
  test.remove(3); //1->2->4->...->7
  std::cout<<"TEST 3: Can remove() in the middle of the non-empty list. --> ";
  printPassFail((test.getLength() == 6) && (test.getEntry(3) == 4));
}
/* @brief remove() throws an error correctly if position is invalid. */
void LLTest::test4_remove() {
  LinkedList<int> test;
  bool passed = false;
  for(int i = 1 ; i <= 4 ; i++) { test.insert(i, i); } //1->2->3->4
  try {
    test.remove(6);
  } catch (const std::runtime_error& e) {
    passed = true;
  }
  std::cout<<"TEST 4: remove() throws an error correctly if position is invalid. --> ";
  printPassFail(passed);
}

/* @brief clear() clears the list completely. */
void LLTest::test1_clear() {
  LinkedList<int> test;
  for(int i = 1 ; i <= 4 ; i++) { test.insert(i, i); } //1->2->3->4
  test.clear();
  std::cout<<"TEST 1: clear() clears the list completely. --> ";
  printPassFail(test.getLength() == 0);
}

/* @brief getEntry() returns right value at front of list. */
void LLTest::test1_getEntry() {
  LinkedList<int> test;
  for(int i = 1 ; i <= 4 ; i++) { test.insert(i, i); } //1->2->3->4
  std::cout<<"TEST 1: getEntry() returns right value at front of list. --> ";
  printPassFail(test.getEntry(1) == 1);
}
/* @brief getEntry() returns right value at back of list. */
void LLTest::test2_getEntry() {
  LinkedList<int> test;
  for(int i = 1 ; i <= 4 ; i++) { test.insert(i, i); } //1->2->3->4
  std::cout<<"TEST 2: getEntry() returns right value at back of list. --> ";
  printPassFail(test.getEntry(4) == 4);
}
/* @brief getEntry() returns right value in the middle of the list. */
void LLTest::test3_getEntry() {
  LinkedList<int> test;
  for(int i = 1 ; i <= 4 ; i++) { test.insert(i, i); } //1->2->3->4
  std::cout<<"TEST 3: getEntry() returns right value in the middle of the list. --> ";
  printPassFail(test.getEntry(2) == 2);
}
/* @brief getEntry() throws an error correctly if position is invalid. */
void LLTest::test4_getEntry() {
  LinkedList<int> test;
  bool passed = false;
  int myTest = 0;
  for(int i = 1 ; i <= 4 ; i++) { test.insert(i, i); } //1->2->3->4
  try {
    myTest = test.getEntry(6);
  } catch (const std::runtime_error& e) {
    passed = true;
  }
  std::cout<<"TEST 4: getEntry() throws an error correctly if position is invalid. --> ";
  printPassFail(passed);
}

/* @brief replace() can replace the front. */
void LLTest::test1_replace() {
  LinkedList<int> test;
  for(int i = 1 ; i <= 4 ; i++) { test.insert(i, i); } //1->2->3->4
  test.replace(1,5); //5->2->3->4
  std::cout<<"TEST 1: replace() can replace the front. --> ";
  printPassFail((test.getLength() == 4) && (test.getEntry(1) == 5));
}
/* @brief replace() can replace the back. */
void LLTest::test2_replace() {
  LinkedList<int> test;
  for(int i = 1 ; i <= 4 ; i++) { test.insert(i, i); } //1->2->3->4
  test.replace(4,5); //1->2->3->5
  std::cout<<"TEST 2: replace() can replace the back. --> ";
  printPassFail((test.getLength() == 4) && (test.getEntry(4) == 5));
}
/* @brief replace() can replace a middle value. */
void LLTest::test3_replace() {
  LinkedList<int> test;
  for(int i = 1 ; i <= 4 ; i++) { test.insert(i, i); } //1->2->3->4
  test.replace(2,5); //1->5->3->4
  std::cout<<"TEST 3: replace() can replace a middle value. --> ";
  printPassFail((test.getLength() == 4) && (test.getEntry(2) == 5));
}
/* @brief replace() throws an error correctly if position is invalid. */
void LLTest::test4_replace() {
  LinkedList<int> test;
  bool passed = false;
  for(int i = 1 ; i <= 4 ; i++) { test.insert(i, i); } //1->2->3->4
  try {
    test.replace(6,5);
  } catch (const std::runtime_error& e) {
    passed = true;
  }
  std::cout<<"TEST 4: replace() throws an error correctly if position is invalid. --> ";
  printPassFail(passed);
}

/* @brief addFront() works correctly if list is empty. */
void LLTest::test1_addFront() {
  LinkedList<int> test;
  test.addFront(1);
  std::cout<<"TEST 1: addFront() works correctly if list is empty. --> ";
  printPassFail((test.getLength() == 1) && (test.getEntry(1) == 1));
}
/* @brief addFront() works correctly if list is non-empty. */
void LLTest::test2_addFront() {
  LinkedList<int> test;
  for(int i = 1 ; i <= 4 ; i++) { test.insert(i, i); } //1->2->3->4
  test.addFront(5);
  std::cout<<"TEST 2: addFront() works correctly if list is non-empty. --> ";
  printPassFail((test.getLength() == 5) && (test.getEntry(1) == 5));
}

/* @brief removeFront() works correctly. */
void LLTest::test1_removeFront() {
  LinkedList<int> test;
  for(int i = 1 ; i <= 4 ; i++) { test.insert(i, i); } //1->2->3->4
  test.removeFront();
  std::cout<<"TEST 1: removeFront() works correctly. --> ";
  printPassFail(test.getLength() == 3);
}
/* @brief removeFront() throws an error correctly if list is empty. */
void LLTest::test2_removeFront() {
  LinkedList<int> test;
  bool passed = false;
  try {
    test.removeFront();
  } catch (const std::runtime_error& e) {
    passed = true;
  }
  std::cout<<"TEST 2: removeFront() throws an error correctly if list is empty. --> ";
  printPassFail(passed);
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
