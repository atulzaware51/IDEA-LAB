import collections

# Define the list
L1 = [1, 2, 2, 3, 2, 3, 4, 5]

# Define the function to find the most repetitive element
def find_most_frequent(input_list):
    
    #Finds the most frequent element in a list.

    #Args:   input_list: The list to analyze.

    #Returns: The most frequent element in the list.
    
    if not input_list:
        return None
    counts = collections.Counter(input_list)
    most_common_element = counts.most_common(1)[0][0]
    return most_common_element

# Find the most repetitive element
most_repetitive_element = find_most_frequent(L1)

# Print the result
print(f"The most repetitive element in the list is: {most_repetitive_element}")
