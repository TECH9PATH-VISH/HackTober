# TODO: Fix this code so it counts ALL instances of the letter 'a' (both lowercase 'a' and uppercase 'A') in the sentence.
# Bug: It only looks for lowercase 'a' and misses uppercase 'A's



sentence = "Learning Data Structures and Algorithms"
target = 'a'
count = 0

for char in sentence:
    if char == target:
        count += 1

print("Total occurrences of 'a':", count)
