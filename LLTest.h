// -*- C++ -*-
/**
 * @author Dalton Yoder
 * @file LLTest.h
 * @desc Tests the new and improved LinkedList
 * @date 24 January 2020
 */
#ifndef LLTEST_
#define LLTEST_

#include "LinkedList.h"

class LLTest {
  private:
    int testCount;
    int passedCount;
  public:
/**
 * CONSTRUCTOR/DECONSTRUCTOR
 */
    LLTest();
    ~LLTest();
/**
 * MEMBER FUNCTIONS
 */
    void printPassFail(bool);
    void runTests();
/**
 * TESTS
 */
    /* @brief No items in list, isEmpty() returns true. */
    void test1_isEmpty();
    /* @brief Items in list, isEmpty() returns false. */
    void test2_isEmpty();

    /* @brief getLength() returns 0 when list is empty. */
    void test1_getLength();
    /* @brief getLength() returns 1 after one addition to the list. */
    void test2_getLength();
    /* @brief getLength() returns correct value after multiple additions. */
    void test3_getLength();
    /* @brief getLength() returns correct value after multiple additions and deletions. */
    void test4_getLength();

    /* @brief Can insert() into empty list. */
    void test1_insert();
    /* @brief Can insert() into non-empty list at the beginning. */
    void test2_insert();
    /* @brief Can insert() into non-empty list at the end. */
    void test3_insert();
    /* @brief Can insert() into non-empty list in the middle. */
    void test4_insert();
    /* @brief insert() throws an error correctly if position is invalid. */
    void test5_insert();

    /* @brief Can remove() at front of  non-empty list. */
    void test1_remove();
    /* @brief Can remove() at back of non-empty list. */
    void test2_remove();
    /* @brief Can remove() in the middle of the non-empty list. */
    void test3_remove();
    /* @brief remove() throws an error correctly if position is invalid. */
    void test4_remove();

    /* @brief clear() clears the list completely. */
    void test1_clear();

    /* @brief getEntry() returns right value at front of list. */
    void test1_getEntry();
    /* @brief getEntry() returns right value at back of list. */
    void test2_getEntry();
    /* @brief getEntry() returns right value in the middle of the list. */
    void test3_getEntry();
    /* @brief getEntry() throws an error correctly if position is invalid. */
    void test4_getEntry();

    /* @brief replace() can replace the front. */
    void test1_replace();
    /* @brief replace() can replace the back. */
    void test2_replace();
    /* @brief replace() can replace a middle value. */
    void test3_replace();
    /* @brief replace() throws an error correctly if position is invalid. */
    void test4_replace();

    /* @brief addFront() works correctly if list is empty. */
    void test1_addFront();
    /* @brief addFront() works correctly if list is non-empty. */
    void test2_addFront();

    /* @brief removeFront() works correctly. */
    void test1_removeFront();
    /* @brief removeFront() throws an error correctly if list is empty. */
    void test2_removeFront();

    /* @brief addBack() works correctly if list is non-empty. */
    void test1_addBack();
    /* @brief addBack() works correctly if list is empty. */
    void test2_addBack();

    /* @brief removeBack() works correctly. */
    void test1_removeBack();
    /* @brief removeBack() throws an error correctly if list is empty. */
    void test2_removeBack();
};
#endif
