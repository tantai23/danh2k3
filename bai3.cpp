Insertion Sort:
def insertion_sort(arr):
    for i in range(1, len(arr)):
        key = arr[i]
        j = i - 1
        while j >= 0 and arr[j] > key:
            arr[j + 1] = arr[j]
            j -= 1
        arr[j + 1] = key

def print_array(arr):
    for num in arr:
        print(num, end=" ")
    print()

# Nhập vào số nguyên n
n = int(input("Nhập vào số nguyên n: "))

# Khởi tạo một danh sách để chứa các số nguyên
numbers = []

# Nhập vào n số nguyên
for i in range(n):
    num = int(input("Nhập số nguyên thứ {}: ".format(i + 1)))
    numbers.append(num)

# Copy danh sách để sử dụng cho thuật toán sắp xếp
sorted_numbers = numbers.copy()

# Sắp xếp danh sách bằng thuật toán Insertion Sort
insertion_sort(sorted_numbers)

# In ra dãy số sau khi sắp xếp
print("Dãy số sau khi sắp xếp bằng Insertion Sort:")
print_array(sorted_numbers)