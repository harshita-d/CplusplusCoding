# C++ Concepts

- The `substr` function is specifically designed for `std::string` objects, not for raw character `arrays (char[])` or containers like `std::vector<char>`.

- A `character` array is essentially a contiguous block of memory storing individual characters. You can manipulate it using `pointers` or `indices` but cannot call substr or other string-related methods on it.

- to iterate through char:

  ```
  for (int i = 0; i < length; ++i) {
  result[i] = s[start + i];
  }
  ```

- to iterate through vectors

  ```
  std::vector<char> result(s.begin() + start, s.begin() + start + length);
  ```

- `s.length()` works only for `std::string`. If s is a character array (char[]) or a `std::vector<char>`, you'll need `sizeof(s)` (for static arrays) or `s.size()` (for vectors).

- In C++, the type of quotation marks used determines whether you're dealing with a character or a string.
  "" (Double Quotes): Represents a string (e.g., std::string or const char\*).

  - "" (Double Quotes): Represents a string (e.g., std::string or const char\*).

  - ' ' (Single Quotes): Represents a character (e.g., char).

- The operation s[j+1:p] suggests creating a new temporary array for the slice, which requires additional space. Concatenating these slices into a new array (s = ...) violates the in-place requirement, as it creates a new data structure.
