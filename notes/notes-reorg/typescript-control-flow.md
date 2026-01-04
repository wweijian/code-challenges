# TypeScript - Control Flow

## If/Else Statements

Similar to C++ with required braces and parentheses. JavaScript-style truthiness.

### Basic if-else

```typescript
let x: number = 10;
if (x > 5) {
    console.log("Greater than 5");
} else if (x > 0) {
    console.log("Positive");
} else {
    console.log("Non-positive");
}
```

### Ternary operator

```typescript
let result: string = x > 0 ? "Positive" : "Non-positive";
```

### Nested ternary

```typescript
let result2: string = x < 0 ? "Negative" : x === 0 ? "Zero" : "Positive";
```

### Logical operators

```typescript
if (x > 0 && x < 100) {
    console.log("Between 0 and 100");
}

if (x < 0 || x > 100) {
    console.log("Outside range");
}

if (!(x === 0)) {
    console.log("Not zero");
}
```

### Nullish coalescing (??)

```typescript
let value = x ?? 0;
```

### Optional chaining (?.)

```typescript
let length = obj?.property?.length;
```

### Truthiness (JavaScript style)

```typescript
if (x) {
    console.log("Truthy");
}
```

### Strict equality

```typescript
if (x === 10) {
    console.log("Exactly 10");
}
```

### Type guards

```typescript
if (typeof x === "number") {
    console.log("x is a number");
}
```

### in operator

```typescript
if ("property" in obj) {
    console.log("Object has property");
}
```

### Array includes

```typescript
if ([1, 2, 3, 4, 5].includes(x)) {
    console.log("In array");
}
```

---

---

## For Loops

Traditional C-style and modern for-of/for-in loops available.

### Traditional for loop

```typescript
for (let i = 0; i < 10; i++) {
    console.log(i);
}
```

### Multiple variables

```typescript
for (let i = 0, j = 10; i < j; i++, j--) {
    console.log(i, j);
}
```

### for-of loop (iterates values)

```typescript
let numbers: number[] = [1, 2, 3, 4, 5];
for (let num of numbers) {
    console.log(num);
}
```

### for-in loop (iterates indices/keys)

```typescript
for (let index in numbers) {
    console.log(index, numbers[index]);
}
```

### Iterate over string

```typescript
for (let char of "hello") {
    console.log(char);
}
```

### forEach method

```typescript
numbers.forEach((num, index) => {
    console.log(`Index ${index}: ${num}`);
});
```

### forEach with arrow function

```typescript
numbers.forEach(num => console.log(num));
```

### for-of with entries (index and value)

```typescript
for (let [index, num] of numbers.entries()) {
    console.log(`Index ${index}: ${num}`);
}
```

### Iterate over object

```typescript
let person = { name: "John", age: 30 };
for (let key in person) {
    console.log(`${key}: ${person[key]}`);
}
```

### Object.entries for key-value pairs

```typescript
for (let [key, value] of Object.entries(person)) {
    console.log(`${key}: ${value}`);
}
```

### Reverse iteration

```typescript
for (let i = 9; i >= 0; i--) {
    console.log(i);
}
```

### Reverse with reverse() method

```typescript
for (let num of numbers.reverse()) {
    console.log(num);
}
```

### Nested loops

```typescript
for (let i = 0; i < 3; i++) {
    for (let j = 0; j < 3; j++) {
        console.log(`(${i},${j})`);
    }
}
```

### Map method (functional alternative)

```typescript
let squares = numbers.map(x => x ** 2);
let evenSquares = numbers.filter(x => x % 2 === 0).map(x => x ** 2);
```

### Modern iteration with for await (async)

```typescript
for await (let item of asyncIterable) {
    console.log(item);
}
```

---

---

## While Loops

Traditional while and do-while loops available.

### Basic while loop

```typescript
let i: number = 0;
while (i < 10) {
    console.log(i);
    i++;
}
```

### While with complex condition

```typescript
while (i < 10 && flag) {
    i++;
}
```

### Do-while (executes at least once)

```typescript
let j: number = 0;
do {
    console.log(j);
    j++;
} while (j < 10);
```

### Infinite loop with break

```typescript
while (true) {
    if (condition) break;
}
```

### While with continue

```typescript
let k: number = 0;
while (k < 10) {
    k++;
    if (k % 2 === 0) continue;
    console.log(k);
}
```

### While with assignment

```typescript
let input: string;
while ((input = getInput()) !== "") {
    process(input);
}
```

### While with optional chaining

```typescript
while (obj?.hasNext?.()) {
    let item = obj.next();
}
```

---

---

## Switch Statements

Traditional switch statement with fall-through. No pattern matching (yet).

### Basic switch

```typescript
let day: number = 3;
switch (day) {
    case 1:
        console.log("Monday");
        break;
    case 2:
        console.log("Tuesday");
        break;
    case 3:
        console.log("Wednesday");
        break;
    default:
        console.log("Other day");
}
```

### Fall-through (intentional)

```typescript
switch (day) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        console.log("Weekday");
        break;
    case 6:
    case 7:
        console.log("Weekend");
        break;
}
```

### Switch with string

```typescript
let grade: string = "B";
switch (grade) {
    case "A":
        console.log("Excellent");
        break;
    case "B":
        console.log("Good");
        break;
    case "C":
        console.log("Average");
        break;
    default:
        console.log("Below average");
}
```

### Switch with enum

```typescript
enum Color { Red, Green, Blue }
let color: Color = Color.Green;
switch (color) {
    case Color.Red:
        console.log("Red");
        break;
    case Color.Green:
        console.log("Green");
        break;
    case Color.Blue:
        console.log("Blue");
        break;
}
```

### Switch with type checking (using typeof)

```typescript
let value: any = "hello";
switch (typeof value) {
    case "string":
        console.log("String");
        break;
    case "number":
        console.log("Number");
        break;
    case "boolean":
        console.log("Boolean");
        break;
    default:
        console.log("Other type");
}
```

### Switch with return (no break needed)

```typescript
function getDayName(day: number): string {
    switch (day) {
        case 1: return "Monday";
        case 2: return "Tuesday";
        case 3: return "Wednesday";
        default: return "Unknown";
    }
}
```

### Object literal pattern (alternative to switch)

```typescript
const dayNames: { [key: number]: string } = {
    1: "Monday",
    2: "Tuesday",
    3: "Wednesday",
};
console.log(dayNames[day] ?? "Unknown");
```

### Dictionary dispatch with functions

```typescript
const handlers: { [key: number]: () => void } = {
    1: () => console.log("Monday"),
    2: () => console.log("Tuesday"),
    3: () => console.log("Wednesday"),
};
(handlers[day] ?? (() => console.log("Unknown")))();
```

### Nested switch

```typescript
switch (category) {
    case "fruit":
        switch (type) {
            case "apple":
                console.log("Apple");
                break;
            case "banana":
                console.log("Banana");
                break;
        }
        break;
    case "vegetable":
        console.log("Vegetable");
        break;
}
```

---

---

## Break and Continue

Break and continue work in all loop types. No else clause on loops.

### Break - exits loop immediately

```typescript
for (let i = 0; i < 10; i++) {
    if (i === 5) break;
    console.log(i);
}
```

### Continue - skips to next iteration

```typescript
for (let i = 0; i < 10; i++) {
    if (i % 2 === 0) continue;
    console.log(i);
}
```

### Break in while loop

```typescript
let i: number = 0;
while (true) {
    if (i === 5) break;
    console.log(i);
    i++;
}
```

### Continue in while loop

```typescript
i = 0;
while (i < 10) {
    i++;
    if (i % 2 === 0) continue;
    console.log(i);
}
```

### Break in for-of loop

```typescript
let numbers: number[] = [1, 2, 3, 4, 5];
for (let num of numbers) {
    if (num === 3) break;
    console.log(num);
}
```

### Continue in for-of loop

```typescript
for (let num of numbers) {
    if (num % 2 === 0) continue;
    console.log(num);
}
```

### Break in nested loops (only breaks inner loop)

```typescript
for (let i = 0; i < 3; i++) {
    for (let j = 0; j < 3; j++) {
        if (j === 2) break;
        console.log(`(${i},${j})`);
    }
}
```

### Labeled break (breaks outer loop)

```typescript
outer: for (let i = 0; i < 3; i++) {
    for (let j = 0; j < 3; j++) {
        if (i === 1 && j === 1) break outer;
        console.log(`(${i},${j})`);
    }
}
```

### Labeled continue (continues outer loop)

```typescript
outer: for (let i = 0; i < 3; i++) {
    for (let j = 0; j < 3; j++) {
        if (j === 1) continue outer;
        console.log(`(${i},${j})`);
    }
}
```

### Break in switch

```typescript
switch (value) {
    case 1:
        console.log("One");
        break;
    case 2:
        console.log("Two");
        break;
}
```

### forEach with break/continue alternatives

```typescript
numbers.forEach(num => {
    if (num % 2 === 0) return;
    console.log(num);
});
```

### Use for-of instead for break/continue

```typescript
for (let num of numbers) {
    if (num === 3) break;
    if (num % 2 === 0) continue;
    console.log(num);
}
```

### some() returns true and stops on first match (like break)

```typescript
let found = numbers.some(num => {
    console.log(num);
    return num === 3;
});
```

### every() returns false and stops on first false (like break)

```typescript
let allPositive = numbers.every(num => {
    console.log(num);
    return num > 0;
});
```

---

---

## Advanced Iteration

### Iterating Through Arrays/Lists

#### for-of loop (values)

```typescript
let numbers: number[] = [1, 2, 3, 4, 5];
for (let num of numbers) {
    console.log(num);
}
```

#### for-in loop (indices as strings)

```typescript
let numbers: number[] = [1, 2, 3, 4, 5];
for (let i in numbers) {
    console.log(`Index ${i}: ${numbers[i]}`);
}
```

#### for-in with number conversion

```typescript
let numbers: number[] = [1, 2, 3, 4, 5];
for (let i in numbers) {
    let index = Number(i);
    console.log(`Index ${index}: ${numbers[index]}`);
}
```

#### entries() - index and value

```typescript
let numbers: number[] = [1, 2, 3, 4, 5];
for (let [i, num] of numbers.entries()) {
    console.log(`Index ${i}: ${num}`);
}
```

#### entries() with destructuring

```typescript
let numbers: number[] = [1, 2, 3, 4, 5];
for (let [index, value] of numbers.entries()) {
    console.log(`${index} -> ${value}`);
}
```

#### forEach() basic

```typescript
let numbers: number[] = [1, 2, 3, 4, 5];
numbers.forEach(num => {
    console.log(num);
});
```

#### forEach() with index and array

```typescript
let numbers: number[] = [1, 2, 3, 4, 5];
numbers.forEach((num, i, arr) => {
    console.log(`Index ${i}: ${num} of ${arr.length}`);
});
```

#### Traditional for loop

```typescript
let numbers: number[] = [1, 2, 3, 4, 5];
for (let i = 0; i < numbers.length; i++) {
    console.log(numbers[i]);
}
```

#### Reverse traditional for loop

```typescript
let numbers: number[] = [1, 2, 3, 4, 5];
for (let i = numbers.length - 1; i >= 0; i--) {
    console.log(numbers[i]);
}
```

#### Traditional for loop with step

```typescript
let numbers: number[] = [1, 2, 3, 4, 5];
for (let i = 0; i < numbers.length; i += 2) {
    console.log(numbers[i]);
}
```

#### Modify with traditional for loop

```typescript
let numbers: number[] = [1, 2, 3, 4, 5];
for (let i = 0; i < numbers.length; i++) {
    numbers[i] *= 2;
}
```

#### Manual iterator with Symbol.iterator

```typescript
let numbers: number[] = [1, 2, 3, 4, 5];
let iterator = numbers[Symbol.iterator]();
let result = iterator.next();
while (!result.done) {
    console.log(result.value);
    result = iterator.next();
}
```

#### Iterate with values()

```typescript
let numbers: number[] = [1, 2, 3, 4, 5];
for (let num of numbers.values()) {
    console.log(num);
}
```

### Iterating Through Strings

#### for-of over characters

```typescript
let word: string = "hello";
for (let char of word) {
    console.log(char);
}
```

#### Build uppercase string

```typescript
let word: string = "hello";
let upper = '';
for (let char of word) {
    upper += char.toUpperCase();
}
```

#### for-in over indices

```typescript
let word: string = "hello";
for (let i in word) {
    console.log(`Index ${i}: ${word[i]}`);
}
```

#### for-in with number conversion

```typescript
let word: string = "hello";
for (let i in word) {
    let index = Number(i);
    console.log(`${index}: ${word[index]}`);
}
```

#### Traditional for loop

```typescript
let word: string = "hello";
for (let i = 0; i < word.length; i++) {
    console.log(word[i]);
}
```

#### Reverse traditional for loop

```typescript
let word: string = "hello";
for (let i = word.length - 1; i >= 0; i--) {
    console.log(word[i]);
}
```

#### charAt() method

```typescript
let word: string = "hello";
for (let i = 0; i < word.length; i++) {
    console.log(word.charAt(i));
}
```

#### Spread to array with forEach()

```typescript
let word: string = "hello";
[...word].forEach(char => {
    console.log(char);
});
```

#### Spread with index

```typescript
let word: string = "hello";
[...word].forEach((char, i) => {
    console.log(`${i}: ${char}`);
});
```

#### split() to array

```typescript
let word: string = "hello";
word.split('').forEach(char => {
    console.log(char);
});
```

### Iterating Through Objects/Maps/Dictionaries

#### for-in over object keys

```typescript
let ages: { [key: string]: number } = {
    "Alice": 25,
    "Bob": 30,
    "Charlie": 35
};

for (let key in ages) {
    console.log(`${key}: ${ages[key]}`);
}
```

#### for-in with hasOwnProperty

```typescript
let ages: { [key: string]: number } = {
    "Alice": 25,
    "Bob": 30,
    "Charlie": 35
};

for (let key in ages) {
    if (ages.hasOwnProperty(key)) {
        console.log(`${key}: ${ages[key]}`);
    }
}
```

#### Object.keys()

```typescript
let ages = { "Alice": 25, "Bob": 30, "Charlie": 35 };
for (let key of Object.keys(ages)) {
    console.log(`${key}: ${ages[key]}`);
}
```

#### Object.values()

```typescript
let ages = { "Alice": 25, "Bob": 30, "Charlie": 35 };
for (let value of Object.values(ages)) {
    console.log(value);
}
```

#### Object.entries()

```typescript
let ages = { "Alice": 25, "Bob": 30, "Charlie": 35 };
for (let [key, value] of Object.entries(ages)) {
    console.log(`${key}: ${value}`);
}
```

#### Map iteration (default)

```typescript
let ages = new Map<string, number>([
    ["Alice", 25],
    ["Bob", 30],
    ["Charlie", 35]
]);

for (let [key, value] of ages) {
    console.log(`${key}: ${value}`);
}
```

#### Map entries()

```typescript
let ages = new Map<string, number>([
    ["Alice", 25],
    ["Bob", 30]
]);

for (let [key, value] of ages.entries()) {
    console.log(`${key}: ${value}`);
}
```

#### Map keys()

```typescript
let ages = new Map<string, number>([
    ["Alice", 25],
    ["Bob", 30]
]);

for (let key of ages.keys()) {
    console.log(key);
}
```

#### Map values()

```typescript
let ages = new Map<string, number>([
    ["Alice", 25],
    ["Bob", 30]
]);

for (let value of ages.values()) {
    console.log(value);
}
```

#### Map forEach()

```typescript
let ages = new Map<string, number>([
    ["Alice", 25],
    ["Bob", 30]
]);

ages.forEach((value, key) => {
    console.log(`${key}: ${value}`);
});
```

### Nested Iteration

#### Nested for-of loops

```typescript
let matrix: number[][] = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]
];

for (let row of matrix) {
    for (let element of row) {
        console.log(element);
    }
}
```

#### Nested with entries()

```typescript
let matrix: number[][] = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]
];

for (let [i, row] of matrix.entries()) {
    for (let [j, element] of row.entries()) {
        console.log(`[${i}][${j}] = ${element}`);
    }
}
```

#### Traditional nested for

```typescript
let matrix: number[][] = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]
];

for (let i = 0; i < matrix.length; i++) {
    for (let j = 0; j < matrix[i].length; j++) {
        console.log(matrix[i][j]);
    }
}
```

#### Nested forEach()

```typescript
let matrix: number[][] = [[1, 2, 3], [4, 5, 6], [7, 8, 9]];

matrix.forEach((row, i) => {
    row.forEach((element, j) => {
        console.log(`[${i}][${j}] = ${element}`);
    });
});
```

#### Flatten with flatMap()

```typescript
let matrix: number[][] = [[1, 2, 3], [4, 5, 6], [7, 8, 9]];
let flat = matrix.flatMap(row => row);
```

### Parallel/Concurrent Iteration

#### Promise.all for parallel async

```typescript
async function processItem(item: number): Promise<number> {
    return item * 2;
}

let numbers = [1, 2, 3, 4, 5];

let promises = numbers.map(num => processItem(num));
let results = await Promise.all(promises);
```

#### Sequential async with for-of

```typescript
async function processItem(item: number): Promise<number> {
    return item * 2;
}

let numbers = [1, 2, 3, 4, 5];

for (let num of numbers) {
    let result = await processItem(num);
    console.log(result);
}
```

#### Worker threads

```typescript
import { Worker } from 'worker_threads';

function runWorker(data: number): Promise<number> {
    return new Promise((resolve, reject) => {
        const worker = new Worker('./worker.js', { workerData: data });
        worker.on('message', resolve);
        worker.on('error', reject);
    });
}

let numbers = [1, 2, 3, 4, 5];
let promises = numbers.map(num => runWorker(num));
let results = await Promise.all(promises);
```

---