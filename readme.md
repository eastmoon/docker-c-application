# docker-c-application

此專案為 C / C++ 應用程式專案，其專案架構如下：

+ Operating System : Debian
+ Language : C / C++
+ Compiler tool : CMake

對應專案目錄設計如下：

```
<project name>
    └ app
    └ conf
        └ cmake
        └ docker
    └ lib
    └ test
```

## 指令

+ 操作專案的開發、編譯、封裝指令

```
dockerw.bat [dev | build | run | test]
```

+ 開發環境

依據 Docker 啟動開發環境，測試開發環境指令，結束請使用 "Ctrl + Z" 或 "exit" 脫離容器

```
dockerw dev
```

+ 編譯專案

依據 Docker 啟動虛擬環境，運用 CMake 編譯專案，其編譯內容會放在 ```cache/publish``` 中

```
dockerw build
```

+ 執行專案

依據 Docker 啟動虛擬環境，編譯後執行 ```cache/publish/bin``` 的輸出檔案

```
dockerw run
```

+ 測試專案

```
dockerw test [--all | --warn | --error]
```

## 議題

1. 將第三方保留安裝檔案，make-lib
	+ 編譯第三方專案
      - ```make && make install```
  + 重裝於執行容器
	+ 測試檔 ( 原始碼、執行檔 )
  + 專案自身產生 installer 是否可列入 run 的腳本
2. cli
	+ dev
	+ build
	  - build libs
    - build app
    - build test
	+ run
3. 參考 nginx 開放資源專案架構
	+ https://github.com/nginx/nginx

![C++ Build Process](http://faculty.cs.niu.edu/~mcmahon/CS241/Notes/Images/build.png)
> from [The C++ Build Process](http://faculty.cs.niu.edu/~mcmahon/CS241/Notes/build.html)

![C++ Build Process](https://vdemir.github.io/images/gcc/GCC-CompilationProcess.png)
> from [Compile/Link a Simple C Program](https://vdemir.github.io/linux/C-Compling-and-Linking/)

![CMake flow](https://logins.github.io/assets/img/posts/2020-05-17-CMakeInVisualStudio/CMakeGeneral_Diagram.jpg)
> from [Why Using CMake](https://logins.github.io/programming/2020/05/17/CMakeInVisualStudio.html)

![CMake Stages](https://logins.github.io/assets/img/posts/2020-05-17-CMakeInVisualStudio/CMakeStages_Diagram.jpg)
> from [Why Using CMake](https://logins.github.io/programming/2020/05/17/CMakeInVisualStudio.html)

## 參考

+ [Debian Docker](https://hub.docker.com/_/debian)
    - Compiler libraray
    - [configure、 make、 make install 背后的原理(翻译)](https://zhuanlan.zhihu.com/p/77813702)
        + configure：原始碼編譯設定
        + make：依循 configure 執行編譯，並產生二進制檔案
        + make install：依循 configure 將編譯輸出內容複製至設定的檔案目錄
        + 參考
            - [linux下如何使用configure/make/make install命令編譯安裝解除安裝程式](https://www.itread01.com/content/1545059522.html)
+ [CMake](https://cmake.org/)
    + [CMake Tutorial](https://cmake.org/cmake/help/latest/guide/tutorial/index.html)
    + [Quick CMake tutorial](https://www.jetbrains.com/help/clion/quick-cmake-tutorial.html)
    + [Why Using CMake](https://logins.github.io/programming/2020/05/17/CMakeInVisualStudio.html)
    + [CGold: The Hitchhiker’s Guide to the CMake](https://cgold.readthedocs.io/en/latest/index.html)
        - [CMake初识](https://zhangyuyu.github.io/cmake-hello/)
    + [CMake 入門/建置執行檔](https://zh.m.wikibooks.org/zh-tw/CMake_%E5%85%A5%E9%96%80/%E5%BB%BA%E7%BD%AE%E5%9F%B7%E8%A1%8C%E6%AA%94)
    - [CMake 入門/建置與連結程式庫](https://zh.m.wikibooks.org/zh-tw/CMake_%E5%85%A5%E9%96%80/%E5%BB%BA%E7%BD%AE%E8%88%87%E9%80%A3%E7%B5%90%E7%A8%8B%E5%BC%8F%E5%BA%AB)
    + [CMake學習筆記（一）基本概念介紹、入門教程及CLion安裝配置](https://codertw.com/%E7%A8%8B%E5%BC%8F%E8%AA%9E%E8%A8%80/712067/)
    + [CMake 常用指令](https://www.cntofu.com/book/46/cmake/cmake_chang_yong_zhi_ling.md)
+ C++ 編譯結構
    - Cross Compile
        + 議題
            - [Why do you need to recompile C/C++ for each OS?](https://stackoverflow.com/questions/61644911)
            - [Why do we need to compile for different platforms](https://stackoverflow.com/questions/48235579)
            - [為什麼說c,c++不能跨平臺，編譯器是在計算機作業系統上的嗎，難道說編譯器不在c,c++程式裡嗎？](https://www.juduo.cc/club/1278541.html)
            - [交叉編譯器（英語：Cross compiler）](https://zh.wikipedia.org/wiki/%E4%BA%A4%E5%8F%89%E7%B7%A8%E8%AD%AF%E5%99%A8)
        + [Cross Compiling With CMake](https://cmake.org/cmake/help/book/mastering-cmake/chapter/Cross%20Compiling%20With%20CMake.html)
        + [How to Build a GCC Cross-Compiler](https://jasonblog.github.io/note/raspberry_pi/how_to_build_a_gcc_cross-compiler.html)
    - 動態連結函式庫
        + [Header Files in C/C++](https://data-flair.training/blogs/header-files-in-c-cpp/)
        + [使用 gcc 自製 C/C++ 靜態、共享與動態載入函式庫教學](https://blog.gtwang.org/programming/howto-create-library-using-gcc/)
        + [Compiling, linking, Makefile, header files](https://gribblelab.org/teaching/CBootCamp/12_Compiling_linking_Makefile_header_files.html)
        + [Libraries in C++](https://www.oracle.com/technical-resources/articles/it-infrastructure/dev-linkinglibraries5.html)
        + [C and C++ library naming conventions](https://developer.arm.com/documentation/100073/0616/The-Arm-C-and-C---Libraries/C-and-C---library-naming-conventions)
    - 編譯架構
        + [The Programming Process](http://www2.hawaii.edu/~takebaya/ics111/process_of_programming/process_of_programming.html)
        + [The C++ Build Process](http://faculty.cs.niu.edu/~mcmahon/CS241/Notes/build.html)
        + [Separate Compilation and Linking of CUDA C++ Device Code](https://developer.nvidia.com/blog/separate-compilation-linking-cuda-device-code/)
        + [C and Cpp - Application qualification specifics](https://doc.castsoftware.com/display/TECHNOS/C+and+Cpp+-+Application+qualification+specifics)
        + [Compile/Link a Simple C Program](https://vdemir.github.io/linux/C-Compling-and-Linking/)
            - [編譯器(Compiler)與連結器(Linker)的運作原理](https://rexpighj123.pixnet.net/blog/post/207609288)
