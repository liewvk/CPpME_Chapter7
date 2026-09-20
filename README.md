# C++ Programming Made Easy — Chapter 7

This repository contains the Chapter 7 example project from **C++ Programming Made Easy**. It is a Visual Studio C++ console application configured for C++20.

## Overview

The main project currently contains a minimal console program that demonstrates the standard C++ application entry point and writes a greeting to standard output:

```text
Hello World!
```

The repository also includes a Visual Studio solution configuration intended to group the main project with additional Chapter 7 example projects.

## Repository contents

| File | Description |
| --- | --- |
| `CPpME_Chapter7.cpp` | Source file containing `main()` and the current console output example. |
| `CPpME_Chapter7.vcxproj` | Visual Studio C++ project configuration. |
| `CPpME_Chapter7.vcxproj.filters` | Visual Studio Solution Explorer filter configuration. |
| `CPpME_Chapter7.slnx` | Visual Studio solution configuration. |
| `.gitignore` | Standard ignore rules for Visual Studio-generated files and build output. |
| `.gitattributes` | Git settings for text normalization and merge behavior. |

## Requirements

- Windows
- Visual Studio with **Desktop development with C++** installed
- A Windows 10 SDK or compatible Windows SDK
- A compiler/toolset that supports the project configuration's C++20 standard

The project is configured for both **Win32** and **x64** platforms, with **Debug** and **Release** configurations.

## Build and run in Visual Studio

1. Clone or download this repository.
2. Open `CPpME_Chapter7.vcxproj` directly, or open `CPpME_Chapter7.slnx` when all referenced example projects are available.
3. Select a configuration such as `Debug` and a platform such as `x64`.
4. Build the project with **Build > Build Solution**.
5. Run without the debugger with **Debug > Start Without Debugging** or press `Ctrl+F5`.
6. Run with the debugger by pressing `F5`.

The program should display:

```text
Hello World!
```

## Build from the Developer Command Prompt

After opening a Visual Studio Developer Command Prompt, build the project with MSBuild. For example:

```bat
msbuild CPpME_Chapter7.vcxproj /p:Configuration=Debug /p:Platform=x64
```

The generated build output is placed in the usual Visual Studio output directories, which are excluded from version control by `.gitignore`.

## Solution references

`CPpME_Chapter7.slnx` references several related Chapter 7 projects using paths outside this repository:

- `CppME_Chapter7_Example7.13`
- `CppME_Chapter7_Example7.15`
- `CppME_Chapter7_Example7.18`
- `CppME_Chapter7_EXample7.8`
- `CppME_Chapter7_PassswordCheck`

To load the complete solution successfully, place those projects in the expected neighboring directories, or open `CPpME_Chapter7.vcxproj` independently when working only with the project in this repository.

## Development notes

- The source uses the standard `iostream` library.
- The project is configured with the C++20 language standard.
- Warnings are enabled at Visual Studio warning level 3.
- Visual Studio user settings, intermediate files, binaries, and other generated artifacts should not be committed.

## License

No license is currently specified for this repository. Contact the repository owner before redistributing or using the code outside its intended educational context.
