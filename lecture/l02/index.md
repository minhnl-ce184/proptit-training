# math.h library's function
- `celi(x)`: Returns the largest integer smaller than or equal to x
- `floor(x)`: Returns the smallest integer larger than or equal to x
- `fabs(x)`: Returns the absolute value of x. Return value in double. Take a double value, other type might causing undefined behavior!
- `sqrt(x)`: square root
- `cbrt(x)`: cube root
- `pow(x, y)`: x power y
- `log(x)`: natural log of x
- `log10(x)`: common log of x
- `cos(x)`, `sin(x)`, `tan(x)`
- `acos(x)`, `asin(x)`, `atan(x)`

# Logical Expression
- produce 1 of 2 value: true or false, `1` or `0`

### Relational Operators
| Symbol | Meaning                  |
| ------ | ------------------------ |
| `<`    | less than                |
| `>`    | greater than             |
| `<=`   | less than or equal to    |
| `>=`   | greater than or equal to |
- have lower precedence than arithmetic operators
- left-associative

### Equality Operators
| Symbol | Meaning      |
| ------ | ------------ |
| `==`   | equal to     |
| `!=`   | not equal to |
- `==` instead of `=` because the later one is assignment operator
- lower precedence than relational operators
- left-associative

### Logical Operators
| Symbol | Meaning  |
| ------ | -------- |
| `!`    | negation |
| `&&`   | and      |
| `∣∣`   | or       |
- `!` is unary while `&&` and `||` are binary
- `!a` produce 0 when `a` is 1, vice versa
    - have same precedence as unary `+` and `-`
    - right-associative
- `a && b` produce 1 when both `a` and `b` are 1. `a || b` produce 0 when both `a` and `b` are 0
    - have lower precedence than equality operators
    - left-associative

**NOTE:** C treat every non-zero value as `1` in term of logical expression!

**NOTE:** `&&` and `||` have short-circuit nature.
- Consider `a && b`. if `a` is checked and produce value of 0 then the expression return the value 0 without look into `b`. Same as `a || b` when `a` produce 1.
- Thanks to this, side-effect might not always occurs. Consider:
```c
i > 0 && ++j > 0
```
- If `i > 0` true. then `++j > 0` won't be process, causing `j` do not increse

# Selection Statements
Allow a program to select a particular execution path from a set of alternatives

### The `if` statement, the `else` clause
- General form:
```c
if (exprssion) {
    statement_1;
    stetement_2;
    ...
}
```

**NOTE:** if there is only 1 statement, `{ }` can be removed!

- General form of `if else`:
```c
if (expression) {
    ...
}
else {
    ...
}
```

**NOTE:** `else` automatically find and match with the nearest, "else-less" `if` statement

Combination `else if`
```c
if (expression ) {
    statements;
}
else if (expression) {
    statements;
}
else {
    statements;
}
```

##### Conditional operator aka. Ternary operator
```c
expr1 ? expr2 : expr3;
```
same as:
```c
if (expr1) {
    expr2;
}
else {
    expr3;
}
```

### `switch`, `case`
General form:
```c
switch (controlling-expression) {
    case const-expression: statements
    ...
    case const-expression: statements
    default: statements
}
```
- `controlling-expression` is tested with `const-expressions`. If matched, execute the coresponding `statements`
- `controlling-expression` must be integer (characters are treated as integer)
- `const-expression` also must be evaluate to an integer
- after each "case label" comes any number of `statements`, no braces required!
- order do not matter
- several case label may precede the same group of statements
```c
switch (grade) {
    case 1: case 2: case 3: case 4: case 5:
        printf("Primary school\n");
    ...
}
```
- `default` run when no `const-expressions` matched the controlling expression. `default` is not mandatory

**NOTE:** the last statements normally be `break`!

- when a const-expression is matched, the control "fall through" the first statements of the next case label, ignoring the case label itself
```c
switch (day) {
    case 1: printf("Sunday");
    case 2: printf("Monday");
    case 3: printf("Tuesday");
    case 4: printf("Wednesday");
    case 5: printf("Thursday");
    case 6: printf("Friday");
    case 7: printf("Saturday");
    default: printf("INVALID");
}
```
Output: (assume that `day = 4`)
```
WednesdayThursdayFridaySaturdayINVALID
```
