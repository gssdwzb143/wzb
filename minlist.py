def minlist():
    str = input()
    num = [int(n) for n in str.split()]
    n = len(num)
    addlist = 0
    maxlist = 0
    for i in range(0,n):
        for j in range(i,n):
            addlist = addlist + num[j]
            if (maxlist < addlist):
                maxlist = addlist
        addlist = 0

    return maxlist
# print(maxlist,end="")


