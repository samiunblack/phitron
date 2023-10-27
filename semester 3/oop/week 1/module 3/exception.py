try:
    result = 10 / 0
except ZeroDivisionError:
    print("Division by zero")
finally:
    print("No matter what")