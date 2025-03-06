# Introduction to iostream, cout, cin and endl

## Key Components

1. #include <iostream>

 - required for input/output operations.

2. std::cout (Console Output)

 - prints data to the screen.

3. std::cin (Console Input)

 - takes user input.

4. std::endl vs. \n

 - std::endl → Moves to a new line and flushes output buffer (slower).

  - \n → Just moves to a new line (faster).


## Best Practices and Tips

1. use std::endl only when flushing is needed; prefer \n for performance.

2. always prompt the user before using std::cin for clarity.

3. use std::cout for debugging by printing variable values.