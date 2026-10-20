# Exercises and Correction:
## Discovering how passing by value works for:
### Immutables:
```python
def increment(val):
    val += 1
    return val

x = 10
print(x)
y = increment(x)
print(y)
```
### Mutables:
```python
def add_grades(grades):
    grades.append(10)

grades = [9, 12, 11]
add_grades(grades)
print(grades)
```
## The NoneType
```python
a = None
print(a, type(a))
```
## Handling Numeric Input
```python
name = input("Enter your name: ")
age_text = input("Enter your age: ")

age = int(age_text)
next_year = age + 1

print(f"Hello {name}, next year you will be {next_year}")
```
## A Function That Executes all Arithmetic Operations On Two Floating Point Numbers
```python
def mini_calc(num1, num2):
    return num1 + num2, num1 - num2, num1 * num2, num1 / num2, num1 // num2, num1 % num2
operations = ["sum", "dif", "mul", "div", "int div", "remainder"]

x = float(input("Enter your first number: "))
y = float(input("Enter your second number: "))
results = mini_calc(x, y)

print(f"numbers given: {x}, {y}")

for i, e in enumerate(operations):
    print('operation ' + operations[i] + ' ' + results[i])
```