import time
import random

from algorithm import quicksort as qs

def sort(arr, length):
    
    sortArr = qs.quicksort(arr, 0, length - 1)
    
    return sortArr

if __name__ == '__main__':
    
    avg_time = 0
    
    for i in range(100):
        arr = list(range(1, 100001))
        random.shuffle(arr)
    
        length = len(arr)
        
        start_time = time.time()
        sortArr    = sort(arr, length)
        end_time   = time.time()
        
        total_time = end_time - start_time
        
        avg_time = (avg_time * i + total_time) / (i + 1)
        
        print("{:>3d} : Run Time: {:.2f} ms".format(i + 1, total_time * 1000))
        
    print("Avg Time: {:.4f} ms".format(avg_time * 1000))