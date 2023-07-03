from . import partition

def quicksort(arr, low, high):
    
    if low < high:
        
        arr, mid = partition.partition(arr, low, high)
        
        quicksort(arr, low    , mid - 1)
        quicksort(arr, mid + 1, high   )
        
    return arr