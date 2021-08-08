/*
Test tree
Ref : https://www.boost.org/doc/libs/1_75_0/libs/test/doc/html/boost_test/tests_organization/test_tree.html

Boost.test，其 Unit Test Framework，會經由 Test tree 結構，逐步執行開發者設計的測試內容，其順序依序如下

MAIN / MODULE
  └ SUITE
    └ CASE
*/

// 定義測試模組名稱
// 在此可選用 BOOST_TEST_MAIN、BOOST_TEST_MODULE
#define BOOST_TEST_MODULE Example
// 引入 UTF header，注意執行環境差異需選用不同的 header
#include <boost/test/included/unit_test.hpp>

// 测试套件宣告
BOOST_AUTO_TEST_SUITE( Demo_Test )

// 測試案例 1
BOOST_AUTO_TEST_CASE( Test_Assertion )
{
    /* test assertion */
    BOOST_TEST( true );
}

// 測試案例 2
BOOST_AUTO_TEST_CASE( Test_Number )
{
    int a = 1;
    BOOST_CHECK_EQUAL(a, 1);
}

// 測試套件結束
BOOST_AUTO_TEST_SUITE_END()
