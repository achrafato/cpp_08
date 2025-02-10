## 📁 Exercises

### Ex00: Easyfind
Ex00 introduces the `easyfind` function, which allows you to search for an element in a container. The goal is to find an element in a container (like a vector or list) and return an iterator to it. This exercise introduces templates and iterators.

```
Files:
├── ex00/easyfind.hpp
├── ex00/Makefile
├── ex00/main.cpp
```

### Ex01: Span
In Ex01, we implement a `Span` class to find the shortest and longest spans in a set of numbers. This exercise focuses on handling a collection of integers and working with STL containers like `std::vector`. The `Span` class should allow you to add numbers, find the shortest span, and find the longest span.

```
Files:
├── ex01/Span.cpp
├── ex01/Span.hpp
├── ex01/Makefile
├── ex01/main.cpp
```

### Ex02: Mutant Stack
Ex02 introduces the `MutantStack` class, which is a container similar to `std::stack`, but with additional functionality, such as iterators. The goal is to extend the behavior of a stack by allowing access to its elements through iterators, which is a good exercise in working with STL containers and iterators.

```
Files:
├── ex02/MutantStack.hpp
├── ex02/Makefile
├── ex02/main.cpp
```

## 🤖 Class Features

### Easyfind
```cpp
template <typename T>
typename T::iterator easyfind(T &container, int value) {
    return std::find(container.begin(), container.end(), value);
}
```

### Span
```cpp
class Span {
private:
    std::vector<int> numbers;
    unsigned int maxSize;

public:
    Span(unsigned int N);
    void addNumber(int num);
    int shortestSpan() const;
    int longestSpan() const;
};
```

### MutantStack
```cpp
template <typename T>
class MutantStack : public std::stack<T> {
public:
    typedef typename std::stack<T>::container_type::iterator iterator;
    iterator begin();
    iterator end();
};
```

## 🎯 Learning Objectives

1. **Templates**
   - Implement template functions like `easyfind` to work with generic containers.
   - Understand how to use iterators and generic types in functions.

2. **Working with STL Containers**
   - Learn how to use `std::vector` and `std::stack` in custom implementations.
   - Use `std::find`, iterators, and other STL algorithms to manipulate collections.

3. **Exception Handling**
   - Handle exceptions such as trying to find an element that doesn't exist (`easyfind`).
   - Handle edge cases like adding more elements to `Span` than its maximum size.

4. **Iterators**
   - Extend container functionality to support iterators in custom data structures (`MutantStack`).

## 🛠️ Implementation Requirements

- **Orthodox Canonical Form**: Ensure all classes follow the Orthodox Canonical Form, especially for the `Span` class (copy constructor, assignment operator, and destructor).
- **Memory Management**: Handle dynamic memory carefully, particularly in containers like `std::vector` or `std::stack`.
- **Templates**: Use templates effectively, especially in `easyfind` and `MutantStack`.

## 🧪 Testing Guidelines

### Ex00: Easyfind
```cpp
std::vector<int> vec = {1, 2, 3, 4, 5};
auto it = easyfind(vec, 3);
if (it != vec.end()) {
    std::cout << "Found: " << *it << std::endl;
} else {
    std::cout << "Not found!" << std::endl;
}
```

### Ex01: Span
```cpp
Span sp = Span(5);
sp.addNumber(10);
sp.addNumber(5);
sp.addNumber(1);
sp.addNumber(7);
sp.addNumber(3);
std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
std::cout << "Longest span: " << sp.longestSpan() << std::endl;
```

### Ex02: Mutant Stack
```cpp
MutantStack<int> stack;
stack.push(10);
stack.push(20);
stack.push(30);

for (MutantStack<int>::iterator it = stack.begin(); it != stack.end(); ++it) {
    std::cout << *it << std::endl;
}
```

## ⚠️ Common Issues to Watch

1. **Memory Management**
   - Be cautious when working with dynamically allocated memory in STL containers (e.g., `std::vector`).
   - Ensure that memory is properly managed in your `Span` and `MutantStack` classes.

2. **Template Specialization**
   - If your template code isn’t working, ensure that you have correctly implemented the template functions and classes for all types you intend to use.

3. **Edge Cases**
   - Handle edge cases such as empty containers in `easyfind`, or trying to add too many numbers to `Span`.
   - Ensure your `MutantStack` supports all the required functionality, including iterators.

## 📝 Style Requirements

- Consistent and descriptive class names, especially for templates (`MutantStack`, `Span`, `easyfind`).
- Proper indentation and comments for readability.
- Well-structured header and source files.
- Clear and readable, self-documenting code.

## 🔍 Debugging Tips

1. **Debugging Template Code**
   - If you encounter issues with template code, use `static_assert` to verify the types used in your templates.
   - Print out the types in your template functions to make sure they’re correct.

2. **Memory Management**
   - Use Valgrind or similar tools to check for memory leaks when dealing with dynamic memory in STL containers.

3. **Iterators**
   - Ensure that iterators are properly defined in `MutantStack` and are correctly accessing the elements.

## 📜 License

This project is part of the 42 curriculum and is provided as-is.
