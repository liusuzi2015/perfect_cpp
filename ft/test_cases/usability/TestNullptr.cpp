#include <gtest/gtest.h>
#include <iostream>
#include <type_traits>

void foo(char *);
void foo(int);


class TestNullptr : public testing::Test {
protected:
    void SetUp() override {
        // 在每个测试用例之前执行的设置代码
    }

    void TearDown() override {
        // 在每个测试用例之后执行的清理代码
    }
};


// 示例测试用例
TEST_F(TestNullptr, normal) {
    if (std::is_same<decltype(NULL), decltype(0)>::value)
        std::cout << "NULL == 0" << std::endl;
    if (std::is_same<decltype(NULL), decltype((void*)0)>::value)
        std::cout << "NULL == (void *)0" << std::endl;
    if (std::is_same<decltype(NULL), std::nullptr_t>::value)
        std::cout << "NULL == nullptr" << std::endl;

    foo(0);          // will call foo(int)
    // foo(NULL);    // doesn't compile
    foo(nullptr);    // will call foo(char*)
    
    // ASSERT_EQ(result, 3);
}

void foo(char *) {
    std::cout << "foo(char*) is called" << std::endl;
}
void foo(int i) {
    std::cout << "foo(int) is called" << std::endl;
}