#include <gtest/gtest.h>
#include <functional>
#include "use_c/foo.h"

class TestUseC : public testing::Test {
protected:
    void SetUp() override {
        // 在每个测试用例之前执行的设置代码
    }

    void TearDown() override {
        // 在每个测试用例之后执行的清理代码
    }
};


// 示例测试用例
TEST_F(TestUseC, normal) {
    [out = std::ref(std::cout << "Result from C code: " << add(1, 2))](){
        out.get() << ".\n";
    }();
    // ASSERT_EQ(result, 3);
}