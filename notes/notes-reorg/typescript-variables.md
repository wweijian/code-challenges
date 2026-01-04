# TypeScript - Variables, Data Types & Type Casting

## Variables & Data Types

### Basic Variable Declaration

```typescript
// Explicit type annotation
let x: number = 5;
let y: number = 3.14;
let name: string = "John";
let isActive: boolean = true;

// Type inference
let z = 10;        // number (inferred)
let pi = 3.14;     // number (inferred)

// const for immutable
const MAX = 100;
```

### Common Data Types

| Type | TypeScript |
|------|------------|
| **Integer** | `number` |
| **Float** | `number` |
| **String** | `string` |
| **Boolean** | `boolean` |
| **Null/None** | `null`, `undefined` |

### Key Characteristics
- **Statically typed** superset of JavaScript
- **Transpiled** to JavaScript
- Type checking at compile/transpile time
- `any` type for dynamic behavior
- Strict null checking available

---

---

## Variable Modifiers & Scope

### Global variable
In browser/Node
```typescript
declare global {
    var globalVar: number;
}
```

### Module-level
```typescript
let moduleVar = 100;
const CONSTANT = 1000;
```

### Export for other modules
```typescript
export const API_KEY = "secret";
```

### Readonly
Similar to const for objects
```typescript
const obj = { x: 5 };           // Can modify properties
readonly readonlyObj: { x: number };  // Cannot modify
```

### Class context
```typescript
class MyClass {
    static classVar = 100;          // Static/class variable
    readonly readonlyProp: number;  // Cannot change after constructor
    
    private privateVar = 10;        // Private (TS only)
    protected protectedVar = 20;    // Protected (TS only)
    public publicVar = 30;          // Public (default)
    
    #privateField = 40;             // True private (JS private fields)
    
    constructor() {
        this.readonlyProp = 5;
    }
}
```

### Ambient declarations
For external code
```typescript
declare const JQuery: any;
```

### Let vs Var vs Const
```typescript
let x = 5;          // Block scope, reassignable
const y = 10;       // Block scope, not reassignable
var z = 15;         // Function scope (old style, avoid)
```

---

---

## Type Casting

### Type assertion
Doesn't change runtime value
```typescript
let value: any = "hello";
let strLength: number = (value as string).length;
let strLength2: number = (<string>value).length;  // Alternative syntax
```

### Type casting for primitives
JavaScript conversion
```typescript
let x: number = 5;
let y: string = x.toString();
let z: string = String(x);

let str: string = "123";
let num: number = Number(str);      // 123
let num2: number = parseInt(str);   // 123
let num3: number = parseFloat("3.14");  // 3.14
```

### Boolean conversion
```typescript
let bool1: boolean = Boolean(0);        // false
let bool2: boolean = Boolean("text");   // true
```

### Type guards
Runtime checking
```typescript
function process(value: string | number) {
    if (typeof value === "string") {
        return value.toUpperCase();    // TS knows it's string
    } else {
        return value * 2;              // TS knows it's number
    }
}
```

### instanceof
For classes
```typescript
class Dog {}
class Cat {}

function identify(animal: Dog | Cat) {
    if (animal instanceof Dog) {
        // animal is Dog here
    }
}
```

### User-defined type guards
```typescript
function isString(value: any): value is string {
    return typeof value === "string";
}
```

### Non-null assertion
```typescript
let maybeString: string | null = "hello";
let length: number = maybeString!.length;  // Asserts not null
```

### const assertions
Literal type
```typescript
let x = "hello" as const;       // Type is "hello", not string
let arr = [1, 2] as const;      // Readonly tuple [1, 2]
```

### satisfies operator
Type checking without widening
```typescript
const config = {
    url: "https://api.com",
    timeout: 5000
} satisfies Record<string, string | number>;
```

### Key Characteristics
- **Compile-time only** - no runtime effect
- **Type assertions** tell compiler, not runtime
- **JavaScript conversion** methods for actual casting
- **Type guards** for runtime checking

---

---