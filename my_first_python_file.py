array = []
def howsum(n, arr, num={}):
    if(n == 0):
        return []
    if(n in num):
        return num[n]
    elif(n < 0):
        return None
    for i in arr:
        howsum(n - i, arr, num)
        array.append(i)

        
    num[n] = False


howsum(4000, [20, 20, 30])
print(array)
