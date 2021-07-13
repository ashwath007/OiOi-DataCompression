# Enter your code here. Read input from STDIN. Print output to STDOUT

n,m = input().split(' ')
arr = list(map(int, input().split(' ')))
A = set(map(int, input().split(' ')))
B = set(map(int, input().split(' ')))
print(arr)
print(A)
print(B)
score = 0
for i in range(len(arr)):
    if arr[i] in A:
        print("A")
        score = score + 1
    elif arr[i] in B:
        print("B")
        score = score - 1
    else:
        continue

print(score)
# Enter your code here. Read input from STDIN. Print output to STDOUT

n,m = input().split(' ')
arr = list(map(int, input().split(' ')))
A = list(map(set, input().split(' ')))
B = list(map(set, input().split(' ')))
print(arr)
print(A)
print(B)
score = 0
for i in range(len(arr)):
    if arr[i] in A:
        score = score + 1
    elif arr[i] in B:
        score = score - 1
    else:
        continue

print(score)
