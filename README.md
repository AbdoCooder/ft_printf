# ft_printf 📊

## Overview 📚
**ft_printf** is a custom implementation of the standard `printf` function in C. This project, part of the **42cursus**, involves creating a variadic function that formats and prints data. Through this project, I gained a deep understanding of variadic functions, formatted output, and string manipulation.

## Key Skills and Concepts Learned 🛠️

### C Programming 💻
- **Variadic Functions**: I learned how to use variadic functions to handle a variable number of arguments, using macros like `va_start`, `va_arg`, and `va_end`.
- **Formatted Output**: I implemented the logic to format and print different types of data, such as integers, characters, strings, and hexadecimal numbers.
- **Error Handling**: I ensured the function handles errors gracefully, providing meaningful output without crashing.

### String Manipulation 📝
- **Custom Format Specifiers**: I implemented custom format specifiers to handle various data types and formatting options, enhancing my skills in parsing and processing strings.
- **Buffer Management**: I managed the output buffer to efficiently handle and print large amounts of data.

### Makefile and Build Automation ⚙️
- **Makefile**: I created a comprehensive Makefile to automate the compilation process, including rules for building the library, cleaning up object files, and recompiling. This involved using flags such as `-Wall`, `-Wextra`, and `-Werror` to ensure code quality and compliance with project standards.

### Code Organization and Best Practices 📏
- **Modular Code**: I organized code into separate modules for better readability and maintainability. I used static functions to restrict the scope of helper functions.
- **Norm Compliance**: I adhered to the 42 school's Norm, a set of coding standards that enforce good coding practices, ensuring consistency and readability across the project.

## Project Highlights 🌟

### Custom printf Function 📜
- **Basic Format Specifiers**: Implemented basic format specifiers such as `%d`, `%i`, `%c`, `%s`, `%x`, `%X`, and `%%`.
- **Advanced Format Specifiers**: Added support for advanced format specifiers, including field width, precision, and flags like `-`, `0`, `#`, ` `, and `+`.

### Bonus Features 🎁
- **Additional Specifiers**: Implemented additional specifiers like `%p` for pointers and `%u` for unsigned integers.
- **Enhanced Performance**: Optimized the function to handle large inputs and complex formatting efficiently.

## Conclusion 🏁
Completing the **ft_printf** project was a significant milestone in my programming journey. It provided me with a solid foundation in variadic functions, formatted output, and string manipulation. The skills and knowledge gained through this project have prepared me to tackle more complex programming challenges and contribute effectively to any development team.

---

*This project is part of the 42cursus at [42 Network](https://www.42.fr/).*
