#include <gtest/gtest.h>

// 示例测试用例
TEST(TestCaseName, TestName) {
    // 测试断言
    ASSERT_EQ(2 + 2, 4);
}

int main(int argc, char** argv) {
    // 初始化 Google Test
    ::testing::InitGoogleTest(&argc, argv);

    // 运行所有测试用例
    return RUN_ALL_TESTS();
}
