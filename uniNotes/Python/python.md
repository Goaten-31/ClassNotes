## General Definitions and Examples

### Automatic Refrence Counting
Automatic Reference Counting implements automatic memory management, freeing the programmer from the need to explicitly insert retains and releases. It does not provide a cycle collector; users must explicitly manage the lifetime of their objects, breaking cycles manually or with weak or unsafe references

### Garbage Collector
A Garbage Collector removes the need for explicitly managing the lifetime of objects, breaking cycles manually or with weak or unsafe references, by handling these tasks on its own

### Primitive types in python are immutable, refrence types are mutable:

Primitive types include: `int, bool, str...`\
Refrence types include: `list, dict, set...`

_**Example:**_

```python
a = [6, 7]
b = a
b.append(40)
print(a) 
print(b) # Both will be [6, 7, 40]
```

### How variables work under the hood:
Imagine a code snippet like the following:
```python
age = 30
other = age
other = 31
```
This how Python handles it:
![Check this image](imgs&graphs/PythonVars.webp)

### List comprehensions:

A list comprehension is a way to create a list using a loop, it differs from the traditional way of creating lists in the sense that it is more dynamic and easier to control

```python

list_1 = [x for x in range(5)]
list_2 = [x * x for x in range(5)]
list_3 = [x for x > 2 in range(5)]

```

### enumerate function

`enumerate` is a built-in python function that returns both the index and value of each element in a list or list-like object (sets, tuples...).\
It is usually used in for loops when we want to get both the index and values from an iterable.

```python
names = ['Franklin', 'Michael', 'Trevor']

for i, e in enumerate(names):
    print(i, e)
```

Note that: i and e are abitrary names, you can name them however you want, the one defined first will be the index and the one after the value

### zip function:

The zip function takes a collection of iterables, and couples each element with the same index into a set

```python
stu_name = ['Steve', 'Alex']
stu_grade [12, 13]

print(list(zip(stu_name, stu_grade))) 

```

we use ``list()`` to print out the actual returned iterable, as zip returns the memory address\
here's an example where we use a list comprehension and the zip function to compute the weighted average grade

```python
grades = [10.0, 12.5, 14.75]
coef = [4, 2, 4]

average_grade = sum(grade * coef for grade, coef in zip(grades, coef)) / sum(coef)
```
#### weighted average using zip:
```python
grades = [10.0, 12.5, 14.75]
coef = [4, 2, 4]

average_grade = sum(grade * coef for grade, coef in zip(grades, coef)) / sum(coef)
```