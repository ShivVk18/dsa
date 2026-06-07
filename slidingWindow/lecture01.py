arr = [1,4,2,10,23,3,1,0,20]
k = 4 

left = 0


ans = 0 
windowSum = 0 

# for (int right =0;right<arr.length:rught++){ 
# }

for right in range(len(arr)):
    
    windowSum += arr[right]
    
    
    if(right-left+1 > k):
        windowSum -= arr[left] 
        # windowSum = windowSum - arr[left]
        left+=1
    
    if(right-left+1 == k):
        ans = max(windowSum,ans)
    
    
print(ans)
        
        