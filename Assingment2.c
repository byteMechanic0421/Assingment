//q1
/*# Sample array of student marks
student_marks = [78, 85, 92, 67, 88]

# Increase each mark by 5
updated_marks = [mark + 5 for mark in student_marks]

# Print the updated array
print(updated_marks)
*/

//q2
/*# Sample array of student marks
student_marks = [78, 85, 92, 67, 88, 35, 54, 72, 45]

# Function to determine the grade based on marks
def calculate_grades(marks):
    grades = []
    for mark in marks:
        if mark >= 75:
            grades.append('A')
        elif mark >= 60:
            grades.append('B')
        elif mark >= 40:
            grades.append('C')
        else:
            grades.append('D')
    return grades

# Get the grades for the student marks
student_grades = calculate_grades(student_marks)

# Print the marks along with their corresponding grades
for mark, grade in zip(student_marks, student_grades):
    print(f'Mark: {mark}, Grade: {grade}')
*/

//q3

/*# Sample array of student marks
student_marks = [78, 85, 92, 99, 88, 99, 67]

# Function to find the first occurrence of the score of 99
def find_first_occurrence(marks, target_score):
    try:
        index = marks.index(target_score)
        return index
    except ValueError:
        return -1  # Return -1 if the score is not found

# Target score to find
target_score = 99
first_occurrence_index = find_first_occurrence(student_marks, target_score)

# Print the result
if first_occurrence_index != -1:
    print(f'The first occurrence of the score {target_score} is at index: {first_occurrence_index}')
else:
    print(f'The score {target_score} is not found in the array.')
*/

//q4


/*# Sample array of student marks
student_marks = [78, 99, 85, 99, 92, 67, 99, 88]

# Function to count occurrences of a specific score
def count_score(marks, target_score):
    count = marks.count(target_score)
    return count

# Target score to count
target_score = 99
count_of_ninety_nine = count_score(student_marks, target_score)

# Print the result
print(f'The number of students who scored {target_score} is: {count_of_ninety_nine}')
*/


//q5

/* # Sample array of student marks
student_marks = [78, 85, 92, 67, 88]

# Calculate the sum of all scores
total_sum = sum(student_marks)

# Print the result
print(f'The sum of all scores is: {total_sum}')
*/

//q6

/*# Sample array of student marks
student_marks = [78, 85, 92, 67, 88]

# Calculate the sum of all scores
total_sum = sum(student_marks)

# Calculate the number of scores
count = len(student_marks)

# Calculate the average score
average_score = total_sum / count if count > 0 else 0

# Print the result
print(f'The average score is: {average_score:.2f}')
*/

//q7
/*# Sample array of student marks
student_marks = [78, 85, 92, 67, 88, 99]

# Function to determine if each score is even or odd
def check_even_odd(marks):
    results = []
    for mark in marks:
        if mark % 2 == 0:
            results.append((mark, 'Even'))
        else:
            results.append((mark, 'Odd'))
    return results

# Get the results for even or odd checks
even_odd_results = check_even_odd(student_marks)

# Print the results
for mark, status in even_odd_results:
    print(f'Score: {mark}, Status: {status}')
*/

//q8

/*# Sample array of student marks
student_marks = [78, 85, 92, 67, 88, 99]

# Calculate the minimum and maximum scores
min_score = min(student_marks)
max_score = max(student_marks)

# Print the results
print(f'The minimum score is: {min_score}')
print(f'The maximum score is: {max_score}')
*/


//q9
/*
# Sample array of marks
student_marks = [1, 3, 20, 4, 1, 0, 5, 9]

# Function to find a peak element
def find_peak_element(arr):
    n = len(arr)
    
    if n == 0:
        return None  # No elements in the array
    
    # Check for peak at the first element
    if n == 1 or arr[0] >= arr[1]:
        return arr[0]
    
    # Check for peak at the last element
    if arr[n-1] >= arr[n-2]:
        return arr[n-1]
    
    # Check for peaks in the middle of the array
    for i in range(1, n - 1):
        if arr[i] >= arr[i - 1] and arr[i] >= arr[i + 1]:
            return arr[i]
    
    return None  # No peak found

# Find a peak element
peak_element = find_peak_element(student_marks)

# Print the result
if peak_element is not None:
    print(f'A peak element is: {peak_element}')
else:
    print('No peak element found in the array.')
*/


//q10

/*# Sample array of marks
student_marks = [1, 2, 3, 4, 5, 10, 13, 17, 18, 19, 20]

# Function to check if a number is prime
def is_prime(num):
    if num <= 1:
        return False
    for i in range(2, int(num**0.5) + 1):
        if num % i == 0:
            return False
    return True

# Function to count prime numbers in the array
def count_primes(arr):
    prime_count = 0
    for number in arr:
        if is_prime(number):
            prime_count += 1
    return prime_count

# Count the prime numbers in the student_marks array
prime_count = count_primes(student_marks)

# Print the result
print(f'The number of prime numbers in the array is: {prime_count}')
*/

//q11

/*# Sample array of marks
student_marks = [78, 85, 92, 67, 88]

# Function to print the array
def print_array(arr):
    print("Array:", arr)

# Print the original array
print("Original Array:")
print_array(student_marks)

# Insert an element at the front
student_marks.insert(0, 95)  # Inserting 95 at the front
print("\nArray after inserting 95 at the front:")
print_array(student_marks)

# Insert an element at a specific position (e.g., index 2)
student_marks.insert(2, 90)  # Inserting 90 at index 2
print("\nArray after inserting 90 at index 2:")
print_array(student_marks)

# Insert an element at the end
student_marks.append(100)  # Inserting 100 at the end
print("\nArray after inserting 100 at the end:")
print_array(student_marks)
*/

//q12

/*# Sample array of marks
student_marks = [78, 85, 92, 67, 88]

# Function to print the array
def print_array(arr):
    print("Array:", arr)

# Print the original array
print("Original Array:")
print_array(student_marks)

# Delete an element from the front
front_deleted = student_marks.pop(0)  # Removing the first element
print(f"\nArray after deleting {front_deleted} from the front:")
print_array(student_marks)

# Delete an element from a specific position (e.g., index 2)
if len(student_marks) > 2:  # Check if index 2 exists
    pos_deleted = student_marks.pop(2)  # Removing element at index 2
    print(f"\nArray after deleting {pos_deleted} from index 2:")
    print_array(student_marks)
else:
    print("\nNo element exists at index 2 for deletion.")

# Delete an element from the end
if student_marks:  # Check if the array is not empty
    end_deleted = student_marks.pop()  # Removing the last element
    print(f"\nArray after deleting {end_deleted} from the end:")
    print_array(student_marks)
else:
    print("\nThe array is empty, no element to delete from the end.")
*/

//q13

/*# Sample array of marks
student_marks = [78, 85, 92, 67, 88, 85, 92]

# Function to identify duplicates
def find_duplicates(arr):
    seen = set()
    duplicates = set()
    
    for number in arr:
        if number in seen:
            duplicates.add(number)
        else:
            seen.add(number)
    
    return duplicates

# Find duplicates in the student_marks array
duplicate_numbers = find_duplicates(student_marks)

# Print the result
if duplicate_numbers:
    print(f'Duplicates found: {duplicate_numbers}')
else:
    print('-1')
*/