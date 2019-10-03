### base64 encode
This is the minimum code needed to encode a character sequence in base64. It can be used as a standalone tool or as a reference to include/integrate in custom tools.
- The C++ version is based on [boost](https://www.boost.org/). A header-only library is used so the code can be complied with any modern C++ compiler and requires no separately-compiled library binaries or special treatment when linking.
- The PowerShell version is based on .NET 1.0 and will work out of the box on any modern Windows.

Example:
```
C:\Users\johndoe\Desktop>base64-encode.exe
Software AG base64 encoder

Text to encode: manage

Result: bWFuYWdl

C:\Users\johndoe\Desktop>
```

Download [here](https://github.com/SoftwareAG/generic-tools/releases) for Windows.