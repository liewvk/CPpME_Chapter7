# C++ Programming Made Easy — Chapter 7

This repository contains the Chapter 7 examples from **C++ Programming Made Easy**. The projects are Visual Studio console applications written in C++20 and are intended for learning and experimentation.

## What is included?

The main project currently contains a simple C++ console program that demonstrates the standard `main()` entry point and writes a greeting to the console:

```text
Hello World!
```

The repository also includes a Visual Studio solution configuration for organizing the Chapter 7 example projects.

## Requirements

- Windows
- Visual Studio with the **Desktop development with C++** workload installed
- A compatible Windows SDK
- A compiler that supports C++20

The project supports the following Visual Studio configurations:

- **Debug** and **Release**
- **Win32** and **x64**

## Build and run

1. Clone or download this repository.
2. Open `CPpME_Chapter7.vcxproj` in Visual Studio.
   - Use `CPpME_Chapter7.slnx` if all referenced Chapter 7 projects are available.
3. Select a configuration and platform, such as `Debug` and `x64`.
4. Select **Build > Build Solution**.
5. Run the program with **Debug > Start Without Debugging** or press `Ctrl+F5`.

The program should print:

```text
Hello World!
```

## Build from the Developer Command Prompt

Open a Visual Studio Developer Command Prompt and run:

```bat
msbuild CPpME_Chapter7.vcxproj /p:Configuration=Debug /p:Platform=x64
```

Build artifacts are generated in the standard Visual Studio output directories and are excluded from version control.

## Repository structure

| File | Purpose |
| --- | --- |
| `CPpME_Chapter7.cpp` | Main C++ source file and console entry point. |
| `CPpME_Chapter7.vcxproj` | Visual Studio C++ project configuration. |
| `CPpME_Chapter7.vcxproj.filters` | Visual Studio Solution Explorer filters. |
| `CPpME_Chapter7.slnx` | Solution configuration for the Chapter 7 projects. |
| `.gitignore` | Rules for excluding generated files and build output. |
| `.gitattributes` | Git text and merge settings. |

## Related example projects

The solution references additional Chapter 7 projects that are expected to be located in neighboring directories:

- `CppME_Chapter7_Example7.13`
- `CppME_Chapter7_Example7.15`
- `CppME_Chapter7_Example7.18`
- `CppME_Chapter7_EXample7.8`
- `CppME_Chapter7_PassswordCheck`

If these projects are not available locally, open `CPpME_Chapter7.vcxproj` directly instead of the solution file.

## Development notes

- The project uses the standard C++ `iostream` library.
- The language standard is set to C++20.
- Visual Studio warning level 3 is enabled.
- Do not commit Visual Studio user settings, intermediate files, binaries, or other generated artifacts.

## License

No license is currently specified. Contact the repository owner before redistributing or using this code outside its intended educational context.
