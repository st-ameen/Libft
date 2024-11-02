# Libft

Welcome to **Libft**, my implementation of the standard C library functions and some additional utilities. This project is a foundational assignment at [42 School](https://www.42.fr/), aiming to deepen understanding of C programming by rebuilding standard functions from scratch.

## Table of Contents

- [About the Project](#about-the-project)
- [Getting Started](#getting-started)
- [Usage](#usage)
- [Testing](#testing)
- [Contributing](#contributing)
- [License](#license)
- [Acknowledgements](#acknowledgements)

## About the Project

The **Libft** project involves recreating numerous functions from the standard C library, as well as additional functions to assist with future projects. The library includes functions for:

- **String Manipulation**: `ft_strlen`, `ft_strcpy`, `ft_strcmp`, etc.
- **Memory Management**: `ft_memset`, `ft_bzero`, `ft_memcpy`, etc.
- **Character Checks and Conversions**: `ft_isalpha`, `ft_toupper`, etc.
- **Linked Lists**: Functions to manipulate linked list data structures.
- **Additional Utilities**: Custom functions for extended functionality.

Each `.c` file contains the implementation of a function, often accompanied by comments with test cases to illustrate usage and assist with debugging.

## Getting Started

### Prerequisites

- **C Compiler**: GCC or any standard C compiler.
- **Make**: Ensure you have `make` installed to utilize the Makefile.

### Installation

1. **Clone the Repository**

   ```bash
   git clone https://github.com/st-ameen/libft
   ```

2. **Navigate to the Project Directory**

   ```bash
   cd libft
   ```

3. **Compile the Library**

   Run the `make` command to compile all the `.c` files and create the `libft.a` static library.

   ```bash
   make
   ```

   This will generate an executable library that you can link against in your projects.

## Usage

To use the library functions in your own projects:

1. **Include the Header File**

   At the top of your C files, include the `libft.h` header:

   ```c
   #include "libft.h"
   ```

2. **Compile Your Project with Libft**

   When compiling your project, link the `libft.a` library. Here's an example using `gcc`:

   ```bash
   gcc -Wall -Wextra -Werror your_program.c -L. -lft -o your_program
   ```

   - `-L.` tells the compiler to look in the current directory for libraries.
   - `-lft` links against `libft.a`.
   - Ensure `libft.a` is in the same directory or adjust the `-L` option accordingly.

## Testing

While many `.c` files contain comments with test cases, you can use an automated tester for comprehensive testing.

### Francinette Tester

[Francinette](https://github.com/xicodomingues/francinette) is an automated tester designed for 42 projects, including Libft. It provides a suite of tests to validate the correctness of your implementations.

#### How to Use Francinette

1. **Clone the Francinette Repository**

   ```bash
   git clone https://github.com/xicodomingues/francinette.git
   ```

2. **Navigate to the Francinette Directory**

   ```bash
   cd francinette
   ```

3. **Run the Tester**

   Execute the tester for Libft:

   ```bash
   ./francinette.sh ../libft
   ```

   Replace `../libft` with the path to your Libft directory if it's located elsewhere.

4. **Review the Results**

   The tester will output the results of each test case, indicating passed and failed tests. Use this feedback to debug and improve your functions.

## Contributing

Contributions are welcome! If you have suggestions or improvements, please open an issue or submit a pull request.

1. **Fork the Repository**
2. **Create a Feature Branch**

   ```bash
   git checkout -b feature/YourFeature
   ```

3. **Commit Your Changes**

   ```bash
   git commit -m 'Add Your Feature'
   ```

4. **Push to the Branch**

   ```bash
   git push origin feature/YourFeature
   ```

5. **Open a Pull Request**

## License

This project is licensed under the **MIT License** - see the [LICENSE](LICENSE) file for details.

## Acknowledgements

- **42 School** for providing the project framework and learning environment.
- **[Francinette Tester](https://github.com/xicodomingues/francinette)** by [XicoDomingues](https://github.com/xicodomingues) for the automated testing tool.
- **Open-Source Community** for continuous support and resources.

---

Feel free to explore, modify, and utilize this library in your projects. Happy coding!