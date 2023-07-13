# RPN Calculator

This is a simple calculator implementation in C that uses Reverse Polish Notation (RPN). It allows performing arithmetic calculations using a stack-based approach, where values are pushed onto a stack and operators act on those values.

This is another exercise from @Bernd-Ulmann

RPN notation offers several advantages over traditional infix notation, such as eliminating the need for parentheses and precedence rules. It provides a straightforward way to represent mathematical expressions.

## How It Works

The calculator reads input from the user through standard input (stdin) and evaluates the RPN expression. The input expression is expected to be space-separated tokens representing numbers and operators.

For example, to calculate the expression "2 + 3 * 4" in RPN, you would enter "2 3 4 * +" as the input. The calculator will process the tokens from left to right, performing the necessary operations.

## Implementation Details

The calculator is implemented in C programming language. Here's an overview of the important components of the code:

- The `push` function is used to push values onto the stack, and the `pop` function retrieves values from the stack.
- The `isOperator` function checks if a character is one of the supported operators (+, -, *, /).
- The `performOperation` function performs the specified operation on the given operands.
- The `evaluateRPN` function takes the RPN expression as input and evaluates it. It iterates over each token in the expression and performs the necessary operations based on whether the token is a number or an operator.
- The program utilizes error handling to detect invalid expressions, such as division by zero or unrecognized characters.

## Getting Started

To use the RPN calculator, follow these steps:

1. Clone the repository or download the source code files.
2. Compile the code using a C compiler. For example: `gcc rpn_calculator.c -o rpn_calculator`.
3. Run the executable: `./rpn_calculator`.
4. Enter an RPN expression when prompted. Ensure that the expression follows the correct RPN format with space-separated tokens.
5. The calculator will evaluate the expression and display the result.

## Example Usage

Here's an example of how to use the RPN calculator:

```
Enter an RPN expression: 2 3 4 * +
Result: 14.000000
```

In this example, the RPN expression "2 3 4 * +" is evaluated, resulting in the value 14.000000.

## Limitations

- The calculator assumes that the RPN expression is properly formatted and does not include error checking for all possible edge cases.
- The stack size is fixed and set to 100. If the expression exceeds this limit, a stack overflow error will occur.

## Contributing

Contributions to this RPN calculator project are welcome! If you have any suggestions, bug reports, or feature requests, please open an issue or submit a pull request.

## License

This project is licensed under the [MIT License](LICENSE).

Feel free to customize this README.md file according to your specific project requirements. Remember to update the sections with accurate information about the RPN calculator and the implementation details of your code.
