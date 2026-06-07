# Sliding window pattern

# i =0

# arr = [1,2,3,4]



# for j in arr:
    
#     if(condition):
#         #shrink window 
#         i += 1
  
#    #    update answer




#sliding window problems -> max substring without repeating character


# str1 = "abcefgiijk"

# maxLen = 0 

# left = 0 

# st1 = set()

# for right in range(len(str1)):
    
   
    
#     while str1[right] in st1:
#         st1.discard(str1[left])
#         left+=1
  
    
#     st1.add(str1[right])
        
#     maxLen = max(maxLen,right-left+1)    
 

# print(maxLen)

# Max sum in subarray of k size 


# arr = [6, 28, 27, 25, 24]
# k = 3

# left = 0
# maxSum = 0
# currSum = 0

# for right in range(len(arr)):
    
#     currSum += arr[right]
    
    
#     if right - left + 1 > k:
#         currSum -= arr[left]
#         left += 1
    
   
#     if right - left + 1 == k:
#         maxSum = max(maxSum, currSum)

# print(maxSum)


# average of all in array 

# arr = [1,3,2,6,-1,4,1,8,2]
# k = 5   
# left = 0

# windowSum = 0
# totalAverage = []


# for right in range(len(arr)):
#     windowSum += arr[right]
    
#     if(right-left+1 >k):
#         windowSum -= arr[left]
#         left+=1
    
    
#     if(right-left+1 == k):
#         totalAverage.append(windowSum/k)
    
    


# print(totalAverage)


#print the first negative of all subarray 

# arr = [12, -1, -7, 8, -15, 30, 16, 28]

# k = 3

# q = []

# left = 0

# ans = []

# for right in range(len(arr)):

  
#     if arr[right] < 0:
#         q.append(arr[right])

    
#     if right - left + 1 > k:

       
#         if len(q) > 0 and arr[left] == q[0]:
#             q.pop(0)

#         left += 1

#     # jab exact window size mil jaye
#     if right - left + 1 == k:

       
#         if len(q) > 0:
#             ans.append(q[0])
#         else:
#             ans.append(0)

# print(ans) 

# max subarray sum of window k 

# arr = [2,1,5,1,3,2]

# n = len(arr) 

# k =3 

# left = 0 

# windowSum = float('-inf') 
# maxSum = 0
# for right in range(n):
#     windowSum += arr[right]
    
    
#     if(right-left+1>k):
#         windowSum -= arr[left]
#         left+=1
    
    
#     if(right-left+1 ==k):
#         maxSum = max(maxSum,windowSum)
        



# print(maxSum) 


# Max number of vowels in a substring of k window 

# vowelsArr  = ['a','e','i','o','u']

# maxVowelCount =0 
# windowVowelCount = 0 

# str1 = "aeiou" 

# left =0 
# k =2 


# for right in range(len(str1)): 
    
#     if(vowelsArr.__contains__(str1[right])):
#         windowVowelCount+=1
    
    
#     if(right-left+1 >k):
#         if(vowelsArr.__contains__(str1[left])):
#             windowVowelCount-=1
#         left+=1
    
    
#     if(right-left+1 ==k):
#         maxVowelCount = max(maxVowelCount,windowVowelCount)
        
        
# print(maxVowelCount)

# max occurence of one in a subarray 

# arr = [1,0,1,0,1]

# n = len(arr) 
# k =3 
# left = 0
# maxCount = 0
# windowCount = 0 

# for right in range(n):
#     if (arr[right] == 1):
#         windowCount +=1 
    
    
#     if(right-left+1 >k):
#         if (arr[left] == 1):
#             windowCount -=1
#         left+=1
        
    
#     if(right-left+1 ==k):
#         maxCount = max(maxCount,windowCount)
        
        


# Find Maximum Sum of Any Window of Size K Containing Only Unique Elements



# left =0 

# arr = [1,5,4,2,9,9,9] 

# st1 = {} 



# k = 3 

# maxSum =0 
# windowSum = 0


# for right in range(len(arr)):
      
#       windowSum += arr[right]
#       st1[arr[right]] = st1.get(arr[right], 0) + 1
      
#       if(right-left+1 >k):
#           windowSum -= arr[left]
#           st1[arr[left]] -=1 
          
#           if(st1[arr[left]] == 0):
#               st1.pop(arr[left])
          
#           left+=1
      
      
#       if(right-left+1 == k):
#           if(len(st1) == k):
#            maxSum = max(windowSum,maxSum)
          
      
     


# print(maxSum)

#Find all anagrams in a list 

# s = "aaaaa"

# p = "aa" 

# left = 0 

# pfreq = {} 

# ans = []

# windowFreq = {}



# for pf in range(len((p))):
#     pfreq[p[pf]] = pfreq.get(p[pf],0) + 1
    

# for right in range(len(s)):
    
#     windowFreq[s[right]] = windowFreq.get(s[right],0) + 1
    
#     if(right-left+1 > len(p)):
#         windowFreq[s[left]] -= 1
        
#         if(windowFreq[s[left]] == 0):
#             windowFreq.pop(s[left])
        
        
#         left+=1
        
    
#     if(right-left+1 == len(p)):
#         if(len(windowFreq) == len(p) and windowFreq == pfreq):
#             ans.append(left)
    
    
    

# print(ans)    


#Number of Subarrays of Size K With Average Greater Than or Equal to Threshold 

# arr = [2,2,2,2,5,5,5,8]

# k = 3

# threshold = 4 
# windowSum = 0 
# left=0
# count = 0


# for right in range(len(arr)):
    
#     windowSum += arr[right]
    
#     if(right-left+1 > k):
#         windowSum-=arr[left]
#         left+=1
    
    
#     if(right-left+1 == k):
#         if((windowSum/k) >= threshold ):
#             count+=1
    
    
# print(count)


# max elemtent in every window of size k

arr = [1,3,1,2,0,5]

