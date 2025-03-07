# Programs with Multiple Code Files

## Why Use Multiple Files?

1. Better Code Organization

 - separate logic into different files.

2. Easier Maintenance

 - modify one file without affecting others.

3. Faster Compilation

 - only changed files need recompilation.


## Common File Structure

1. Header File (.h)

 - Declarations (function prototypes, classes).

2. Source File (.cpp)

 - Function/Class definitions.

3. Main File (main.cpp)

 - Calls functions from other files.


## Best Practices and Tips

1. Use #include "filename.h" to include header files.

2. Use header guards (#ifndef, #define, #endif) to prevent multiple inclusions.

3. Keep function declarations in .h files and definitions in .cpp files