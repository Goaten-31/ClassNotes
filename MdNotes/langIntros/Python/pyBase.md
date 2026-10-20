# Basics:
## Variables and Data Types:

Python is a loosely typed language; you don't need to declare the variable's the data type,\
the language handles that on its own. To know the variable's type, we must use the `type()` built-in function;\
it returns the variable's type, which we can then print to the console with `print()`  

```python
# This is a comment
# We use comments to document our code

variable = 10 

print(type(variable)) # This will show that 'variable' is of the integer type 
```

Python has a plethora of data types split into two categories:
- _Immutable Datatypes:_ primitive types are immutable; once a copy of the original variable is made, whatever is done to one of the copies, it doesn't affect the other, these include:\
`int, str, float, bool`
- _Mutable Datatypes:_ composite types are mutable; once a copy is made of the original is made, whatever is done to one of the copies, it affects the other, these include:\
`list, set, dict`

## Lists, tuples and dictionaries:

Python lists are a composite data type; they're arrays, a collection of values accessible by an index, a tuple is essentially an immutable array.\
A dictionary is a collection of key value pairs.

```python

array = [1, 2, 3]
tuple = (4, 5, 6)
dict = {1: 'a', 2: 'b', 3: 'c'}

```

Using `list()` and `.copy()` we can make a unique copied list of an original list; making it immutable like primitive data types

## Loops:

- ### for loops:
  for loops iterate over an iterable, once the it iterates over it, the loop is automatically stopped:
  ```python
  for i in range(10):
      print(i)
  ```
- ### while loops:
  while loops run the same block of code over and over as long as the condition is true
  ```python
  while true:
      print("hi lol") # This loop is infinite
  ```
- ### `break` keyword:
  this keyword allows us to stop the loop, no matter what

  ```python
    while true:
        print("hi lol")
        break
  ```
- ### `continue` keyword:
  this keyword allows us to skip an iteration, incase we don't want a code execution during that step
  ```python
  for i in range(10):
      if i == 4:
          continue
      print(i) # No 4 in this input  
  ```
- ### List comprehension:
  list comprehensions allow for the creation of lists in a more dynamic manner
  ```python
  array = [x for x in range(5)]
  ```

## Functions:

functions are reusable blocks of code, they may take in parameters and return values, depending on what we need the function for

```python
def print_hi_thrice():
    for i in range(3)
        print("hi")

def print_something_thrice(thing):
    for i in range(3):
        print(thing)

def return_something():
    return 1 + 2

def return_sum(x, y):
    return x + y
```

# Useful Built-ins:
## zip:
The zip function takes a collection of iterables, and couples each element with the same index into a set

```python
stu_name = ['Steve', 'Alex']
stu_grade [12, 13]

print(list(zip(stu_name, stu_grade))) 

```

## enumerate:
`enumerate` is a built-in python function that returns both the index and value of each element in a list or list-like object (sets, tuples...).\
It is usually used in for loops when we want to get both the index and values from an iterable.

```python
names = ['Franklin', 'Michael', 'Trevor']

for i, e in enumerate(names):
    print(i, e)
```