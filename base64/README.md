### Encoding to Base64 Format

This base64 encoding tool can be used to encode any character string. The string is taken from the standard input, which allows the use of any printable character regardless of the underlying command interpreter. You can use this tool with any UNIX shell or Windows Command Prompt. For example, you can encode a password that contains special characters, such as ampersand (&), which is hard to escape in Windows Command Prompt. You can pass the encoded passwords to the Command Central bootstrapper.

This is the minimum code required for encoding a character sequence to base64 format, where: 
- `base64-encode.cpp` is a C++ version based on [boost](https://www.boost.org/). It uses a header-only library, so the code can be complied with any recent C++ compiler without using separately-compiled library binaries or additional actions when linking.
- `base64-encode.ps1` is a PowerShell version based on .NET 1.0 and it works out-of-the-box on any modern Windows.

You can integrate this code in custom tools, or you can use the `base64-encode.exe` as a standalone tool.

To use `base64-encode.exe` as a standalone tool on Windows:

1. Download `base64-encode.exe` [here](https://github.com/SoftwareAG/generic-tools/releases).
2. Run `base64-encode.exe`.
3. Enter the string to encode and press Enter.
4. Copy the encoded string where required.

Example:
```
C:\Users\johndoe\Desktop>base64-encode.exe
Software AG base64 encoder
Text to encode: manage
@@ -14,5 +23,3 @@ Result: bWFuYWdl
C:\Users\johndoe\Desktop>
```

