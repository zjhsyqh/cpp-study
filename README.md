# cpp-study
C++学习仓库

> 个人学习记录 | 大一C++与STL练习代码

## 学习内容
- vector 动态数组
- string 字符串
- map / unordered_map
- set / unordered_set
- algorithm 常用算法：sort，find，for_each
- 迭代器、容器失效问题
- 运算符重载（+、<<、++、=、==、()）
- 友元函数

## 🧰 编译环境
编译器: g++ / MSVC
C++标准: C++11 及以上

## ▶ 运行示例
```bash
g++ demo.cpp -o demo
./demo
cpp-study/
├── README.md
├── .gitignore
└── stl/
    ├── vector/
    ├── string/
    ├── map/
    ├── unordered_map/
    ├── set/
    ├── unordered_set/
    ├── algorithm/
    └── overload/      # 运算符重载练习
        ├── overload1.cpp  // 加号运算符重载
        ├── overload2.cpp  // 左移运算符重载
        ├── overload3.cpp  // 递增运算符重载
        ├── overload4.cpp  // 赋值运算符重载
        ├── overload5.cpp  // 关系运算符重载
        └── overload6.cpp  // 函数调用运算符重载

