// 定義測試模組名稱
// #define BOOST_TEST_MODULE Example_2
#include "../app/classes/test_class.h"

// 测试套件宣告
BOOST_AUTO_TEST_SUITE( E2_S1 )

// 測試案例 1
BOOST_AUTO_TEST_CASE( E2_S1_Case_1 )
{
    BOOST_TEST( true );
}

// 測試案例 2
BOOST_AUTO_TEST_CASE( E2_S1_Case_2 )
{
    demo::test_class t;
    int a = 1;
    BOOST_CHECK_EQUAL(a, 1);
    BOOST_CHECK_EQUAL(t.do_something(a), 1);
    int b = 2;
    BOOST_WARN_EQUAL(b, 2);
    BOOST_WARN_EQUAL(b, 3);
    BOOST_CHECK_EQUAL(t.do_something(b), 2);
    BOOST_CHECK_EQUAL(t.do_something(b), 4);
}

// 測試套件結束
BOOST_AUTO_TEST_SUITE_END()
