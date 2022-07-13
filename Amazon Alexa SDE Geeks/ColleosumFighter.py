# Input:
# N = 2
# A[] = {1, 3, 5, 2, 1, 1}
# Output: 6
# Explanation: 

# Fighter 1 and 4 will be removed. 
# Then S1=(3+5)=8 and S2=(1+1)=2. 
# s1-s2 = 8-2 = 6.

# Input:
# N = 2
# A[] = {1, 1, 5, 3, 7, 7}
# Output:
# -4 
# Explanation: 

# The best way is to remove Fighter 1 and 5.
# S1 - S2 = (1+5) - (3+7) = -4.

A = [1, 3, 5, 2, 1, 1]
N = 2
k = len(A) - N
sublists = []
def subA(li, k):
    if k == len(li):
        if not li in sublists:
            sublists.append(li)
        return
    for i in li:
        sub = li[:]
        sub.remove(i)
        result = subA(sub, k)
        
        if not result in sublists and result:
            sublists.append( result)

subA(A, k)
anslist = []
for i in sublists:
    GRP1 = i[:len(i)//2]
    GRP2 = i[len(i)//2:]

    anslist.append(sum(GRP1) - sum(GRP2))
print(max(anslist))


