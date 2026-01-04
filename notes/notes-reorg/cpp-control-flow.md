# C++ - Control Flow

## If/Else Statements

Requires parentheses around conditions and braces for code blocks (braces optional for single statements).

### Basic if-else

```cpp
int x = 10;
if (x > 5) {
    cout << "Greater than 5" << endl;
} else if (x > 0) {
    cout << "Positive" << endl;
} else {
    cout << "Non-positive" << endl;
}
```

### Single line (no braces)

```cpp
if (x > 0) cout << "Positive" << endl;
```

### Ternary operator

```cpp
string result = (x > 0) ? "Positive" : "Non-positive";
```

### Switch statement as alternative

```cpp
switch (x) {
    case 1:
        cout << "One" << endl;
        break;
    case 2:
        cout << "Two" << endl;
        break;
    default:
        cout << "Other" << endl;
}
```

### C++17: if with initializer

```cpp
if (int y = getValue(); y > 0) {
    cout << y << " is positive" << endl;
}
```

### Logical operators

```cpp
if (x > 0 && x < 100) {
    cout << "Between 0 and 100" << endl;
}

if (x < 0 || x > 100) {
    cout << "Outside range" << endl;
}

if (!(x == 0)) {
    cout << "Not zero" << endl;
}
```

---

---

## For Loops

Traditional C-style loop with initialization, condition, and increment. Range-based for loop available since C++11.

### Traditional for loop

```cpp
for (int i = 0; i < 10; i++) {
    cout << i << " ";
}
```

### Multiple variables

```cpp
for (int i = 0, j = 10; i < j; i++, j--) {
    cout << i << " " << j << endl;
}
```

### Range-based for loop (C++11+)

```cpp
vector<int> numbers = {1, 2, 3, 4, 5};
for (int num : numbers) {
    cout << num << " ";
}
```

### Range-based with reference (modify elements)

```cpp
for (int& num : numbers) {
    num *= 2;
}
```

### Range-based with const reference (read-only, efficient)

```cpp
for (const auto& num : numbers) {
    cout << num << " ";
}
```

### Auto keyword for type inference

```cpp
for (auto num : numbers) {
    cout << num << " ";
}
```

### Iterate with index (traditional way)

```cpp
for (size_t i = 0; i < numbers.size(); i++) {
    cout << numbers[i] << " ";
}
```

### Reverse iteration

```cpp
for (int i = 9; i >= 0; i--) {
    cout << i << " ";
}
```

### Nested loops

```cpp
for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
        cout << "(" << i << "," << j << ") ";
    }
    cout << endl;
}
```

### Infinite loop

```cpp
for (;;) {
    if (condition) break;
}
```

---

---

## While Loops

Traditional while and do-while loops available.

### Basic while loop

```cpp
int i = 0;
while (i < 10) {
    cout << i << " ";
    i++;
}
```

### While with complex condition

```cpp
while (i < 10 && flag) {
    i++;
}
```

### Do-while (executes at least once)

```cpp
int j = 0;
do {
    cout << j << " ";
    j++;
} while (j < 10);
```

### Infinite loop with break

```cpp
while (true) {
    if (condition) break;
}
```

### While with continue

```cpp
int k = 0;
while (k < 10) {
    k++;
    if (k % 2 == 0) continue;
    cout << k << " ";
}
```

### Reading until condition

```cpp
string input;
while (cin >> input && input != "quit") {
    cout << "You entered: " << input << endl;
}
```

### While with assignment

```cpp
while ((input = getInput()) != "") {
    process(input);
}
```

---

---

## Switch Statements

Traditional switch statement with fall-through behavior. Limited to integral and enum types.

### Basic switch

```cpp
int day = 3;
switch (day) {
    case 1:
        cout << "Monday" << endl;
        break;
    case 2:
        cout << "Tuesday" << endl;
        break;
    case 3:
        cout << "Wednesday" << endl;
        break;
    default:
        cout << "Other day" << endl;
}
```

### Fall-through (intentional, no break)

```cpp
switch (day) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        cout << "Weekday" << endl;
        break;
    case 6:
    case 7:
        cout << "Weekend" << endl;
        break;
}
```

### With initialization (C++17)

```cpp
switch (int value = getValue(); value) {
    case 0:
        cout << "Zero" << endl;
        break;
    case 1:
        cout << "One" << endl;
        break;
}
```

### Switch with enum

```cpp
enum Color { RED, GREEN, BLUE };
Color c = GREEN;
switch (c) {
    case RED:
        cout << "Red" << endl;
        break;
    case GREEN:
        cout << "Green" << endl;
        break;
    case BLUE:
        cout << "Blue" << endl;
        break;
}
```

### Switch with character

```cpp
char grade = 'B';
switch (grade) {
    case 'A':
        cout << "Excellent" << endl;
        break;
    case 'B':
        cout << "Good" << endl;
        break;
    case 'C':
        cout << "Average" << endl;
        break;
    default:
        cout << "Below average" << endl;
}
```

### Nested switch

```cpp
switch (category) {
    case FRUIT:
        switch (type) {
            case APPLE:
                cout << "Apple" << endl;
                break;
            case BANANA:
                cout << "Banana" << endl;
                break;
        }
        break;
    case VEGETABLE:
        cout << "Vegetable" << endl;
        break;
}
```

---

---

## Break and Continue

Both break and continue work in all loop types. Break also exits switch statements.

### Break - exits loop immediately

```cpp
for (int i = 0; i < 10; i++) {
    if (i == 5) break;
    cout << i << " ";
}
```

### Continue - skips to next iteration

```cpp
for (int i = 0; i < 10; i++) {
    if (i % 2 == 0) continue;
    cout << i << " ";
}
```

### Break in while loop

```cpp
int i = 0;
while (true) {
    if (i == 5) break;
    cout << i << " ";
    i++;
}
```

### Continue in while loop

```cpp
i = 0;
while (i < 10) {
    i++;
    if (i % 2 == 0) continue;
    cout << i << " ";
}
```

### Break in nested loops (only breaks inner loop)

```cpp
for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
        if (j == 2) break;
        cout << "(" << i << "," << j << ") ";
    }
    cout << endl;
}
```

### Using goto to break outer loop

```cpp
for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
        if (i == 1 && j == 1) goto outer;
        cout << "(" << i << "," << j << ") ";
    }
}
outer:
cout << "Exited" << endl;
```

### Break in switch

```cpp
switch (value) {
    case 1:
        cout << "One" << endl;
        break;
    case 2:
        cout << "Two" << endl;
        break;
}
```

---

---

## Advanced Iteration

### Iterating Through Arrays/Lists

#### By value (copy)

```cpp
std::vector<int> numbers = {1, 2, 3, 4, 5};
for (auto num : numbers) {
    std::cout << num << " ";
}
```

#### By reference (can modify)

```cpp
std::vector<int> numbers = {1, 2, 3, 4, 5};
for (auto& num : numbers) {
    num *= 2;
}
```

#### By const reference (read-only, efficient)

```cpp
std::vector<int> numbers = {1, 2, 3, 4, 5};
for (const auto& num : numbers) {
    std::cout << num << " ";
}
```

#### With explicit type

```cpp
std::vector<int> numbers = {1, 2, 3, 4, 5};
for (int num : numbers) {
    std::cout << num << " ";
}
```

#### Forward iteration with iterators

```cpp
std::vector<int> numbers = {1, 2, 3, 4, 5};
for (auto it = numbers.begin(); it != numbers.end(); ++it) {
    std::cout << *it << " ";
}
```

#### Const iterator

```cpp
std::vector<int> numbers = {1, 2, 3, 4, 5};
for (auto it = numbers.cbegin(); it != numbers.cend(); ++it) {
    std::cout << *it << " ";
}
```

#### Reverse iteration with iterators

```cpp
std::vector<int> numbers = {1, 2, 3, 4, 5};
for (auto it = numbers.rbegin(); it != numbers.rend(); ++it) {
    std::cout << *it << " ";
}
```

#### Const reverse iterator

```cpp
std::vector<int> numbers = {1, 2, 3, 4, 5};
for (auto it = numbers.crbegin(); it != numbers.crend(); ++it) {
    std::cout << *it << " ";
}
```

#### Index-based loop

```cpp
std::vector<int> numbers = {1, 2, 3, 4, 5};
for (size_t i = 0; i < numbers.size(); ++i) {
    std::cout << numbers[i] << " ";
}
```

#### Reverse index-based loop

```cpp
std::vector<int> numbers = {1, 2, 3, 4, 5};
for (int i = numbers.size() - 1; i >= 0; --i) {
    std::cout << numbers[i] << " ";
}
```

#### Index-based with step

```cpp
std::vector<int> numbers = {1, 2, 3, 4, 5};
for (size_t i = 0; i < numbers.size(); i += 2) {
    std::cout << numbers[i] << " ";
}
```

#### std::for_each

```cpp
#include <algorithm>

std::vector<int> numbers = {1, 2, 3, 4, 5};
std::for_each(numbers.begin(), numbers.end(), [](int num) {
    std::cout << num << " ";
});
```

#### std::for_each with index tracking

```cpp
std::vector<int> numbers = {1, 2, 3, 4, 5};
int index = 0;
std::for_each(numbers.begin(), numbers.end(), [&index](int num) {
    std::cout << "Index " << index++ << ": " << num << std::endl;
});
```

#### std::for_each modifying elements

```cpp
std::vector<int> numbers = {1, 2, 3, 4, 5};
std::for_each(numbers.begin(), numbers.end(), [](int& num) {
    num *= 2;
});
```

### Iterating Through Strings

#### Range-based for over characters

```cpp
std::string word = "hello";
for (char c : word) {
    std::cout << c << " ";
}
```

#### Range-based for with reference

```cpp
std::string word = "hello";
for (char& c : word) {
    c = toupper(c);
}
```

#### Range-based for with const reference

```cpp
std::string word = "hello";
for (const char& c : word) {
    std::cout << c << " ";
}
```

#### Range-based for with auto

```cpp
std::string word = "hello";
for (auto letter : word) {
    std::cout << letter << " ";
}
```

#### Forward iteration with iterators

```cpp
std::string word = "hello";
for (auto it = word.begin(); it != word.end(); ++it) {
    std::cout << *it << " ";
}
```

#### Reverse iteration with iterators

```cpp
std::string word = "hello";
for (auto it = word.rbegin(); it != word.rend(); ++it) {
    std::cout << *it << " ";
}
```

#### Modify with iterator

```cpp
std::string word = "hello";
for (auto it = word.begin(); it != word.end(); ++it) {
    *it = toupper(*it);
}
```

#### Index-based iteration

```cpp
std::string word = "hello";
for (size_t i = 0; i < word.length(); ++i) {
    std::cout << word[i] << " ";
}
```

#### Reverse index-based

```cpp
std::string word = "hello";
for (int i = word.length() - 1; i >= 0; --i) {
    std::cout << word[i] << " ";
}
```

#### Index-based with at()

```cpp
std::string word = "hello";
for (size_t i = 0; i < word.size(); ++i) {
    std::cout << word.at(i) << " ";
}
```

### Iterating Through Objects/Maps/Dictionaries

#### Range-based for with pairs

```cpp
#include <map>

std::map<std::string, int> ages = {
    {"Alice", 25},
    {"Bob", 30},
    {"Charlie", 35}
};

for (const auto& pair : ages) {
    std::cout << pair.first << ": " << pair.second << std::endl;
}
```

#### Structured binding (C++17)

```cpp
std::map<std::string, int> ages = {
    {"Alice", 25},
    {"Bob", 30},
    {"Charlie", 35}
};

for (const auto& [key, value] : ages) {
    std::cout << key << ": " << value << std::endl;
}
```

#### Structured binding with reference (modify values)

```cpp
std::map<std::string, int> ages = {
    {"Alice", 25},
    {"Bob", 30}
};

for (auto& [key, value] : ages) {
    value += 1;
}
```

#### Forward iteration with iterators

```cpp
std::map<std::string, int> ages = {{"Alice", 25}, {"Bob", 30}};
for (auto it = ages.begin(); it != ages.end(); ++it) {
    std::cout << it->first << ": " << it->second << std::endl;
}
```

#### Reverse iteration with iterators

```cpp
std::map<std::string, int> ages = {{"Alice", 25}, {"Bob", 30}};
for (auto it = ages.rbegin(); it != ages.rend(); ++it) {
    std::cout << it->first << ": " << it->second << std::endl;
}
```

#### unordered_map iteration

```cpp
#include <unordered_map>

std::unordered_map<std::string, int> ages = {{"Alice", 25}, {"Bob", 30}};
for (const auto& [key, value] : ages) {
    std::cout << key << ": " << value << std::endl;
}
```

### Nested Iteration

#### Nested range-based for

```cpp
std::vector<std::vector<int>> matrix = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
};

for (const auto& row : matrix) {
    for (const auto& element : row) {
        std::cout << element << " ";
    }
    std::cout << std::endl;
}
```

#### Nested with indices

```cpp
std::vector<std::vector<int>> matrix = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
};

for (size_t i = 0; i < matrix.size(); ++i) {
    for (size_t j = 0; j < matrix[i].size(); ++j) {
        std::cout << matrix[i][j] << " ";
    }
    std::cout << std::endl;
}
```

#### Structured binding with nested loop

```cpp
std::vector<std::pair<std::string, std::vector<int>>> data = {
    {"Group A", {1, 2, 3}},
    {"Group B", {4, 5, 6}}
};

for (const auto& [name, values] : data) {
    std::cout << name << ": ";
    for (const auto& value : values) {
        std::cout << value << " ";
    }
    std::cout << std::endl;
}
```

### Parallel/Concurrent Iteration

#### Sequential execution policy

```cpp
#include <execution>
#include <algorithm>

std::vector<int> numbers(1000000);
std::for_each(std::execution::seq, 
    numbers.begin(), numbers.end(),
    [](int& n) { n *= 2; });
```

#### Parallel execution policy

```cpp
#include <execution>
#include <algorithm>

std::vector<int> numbers(1000000);
std::for_each(std::execution::par,
    numbers.begin(), numbers.end(),
    [](int& n) { n *= 2; });
```

#### Parallel unsequenced execution

```cpp
#include <execution>
#include <algorithm>

std::vector<int> numbers(1000000);
std::for_each(std::execution::par_unseq,
    numbers.begin(), numbers.end(),
    [](int& n) { n *= 2; });
```

#### OpenMP parallel for

```cpp
#include <omp.h>

std::vector<int> numbers(1000);

#pragma omp parallel for
for (size_t i = 0; i < numbers.size(); ++i) {
    numbers[i] *= 2;
}
```

#### OpenMP with reduction

```cpp
#include <omp.h>

std::vector<int> numbers(1000);
int sum = 0;

#pragma omp parallel for reduction(+:sum)
for (size_t i = 0; i < numbers.size(); ++i) {
    sum += numbers[i];
}
```

---