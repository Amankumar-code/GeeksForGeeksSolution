def maximumAdjacent(sizeOfArray, arr):
    for i in range(len(arr)-1):
        print (max(arr[i],arr[i+1]),end=" ")
    
