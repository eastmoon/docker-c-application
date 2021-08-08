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

## 參考

+ [Debian Docker](https://hub.docker.com/_/debian)
+ [CMake](https://cmake.org/)
