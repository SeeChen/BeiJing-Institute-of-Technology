def partition(arr, low, high):
    
    i     = low - 1
    pivot = arr[high]
    
    for j in range(low, high):
        
        if arr[j] <= pivot:
            
            i = i + 1
            arr[i], arr[j] = arr[j], arr[i]
            
    arr[i + 1], arr[high] = arr[high], arr[i + 1]
            
    return arr, (i + 1)