#!/bin/bash

# 编译并运行Google Test测试用例

# 创建build目录
mkdir -p build
cd build

# 使用CMake构建
cmake ..
make

# 运行测试用例
./MyTests

# 返回到原始目录
cd ..