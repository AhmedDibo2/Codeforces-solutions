# by (while loop)
num = int(input())
while num:
    n1 , n2 = map(int , input())
    if(n1 > n2):
        print(0)
    else:
        print( n2 - n1)
    num -= 1

#****************************#
# by (for loop)
num = int(input())
for i in range(num): 
    n1 , n2 = map(int , input().split())
    if(n1 < n2):
        print(n2 - n1)
    else:
        print(0)
    