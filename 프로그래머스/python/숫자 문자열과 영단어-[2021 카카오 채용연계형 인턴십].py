def solution(s):
    nums = {'zero':'0', 'one':'1', 'two':'2', 'three':'3', 'four':'4', 'five':'5', 'six':'6', 'seven':'7', 'eight':'8', 'nine':'9'}
    res = ''
    c = ''
    for i in s:
        if i.isdigit():            
            res += i
            continue
        else:
            c += i
            if c in nums:
                res += nums[c]
                c = ''
    answer = int(res)
                
    return answer



# 모범답안

# def solution(s):
#     nums = {
#         'zero': '0', 'one': '1', 'two': '2',
#         'three': '3', 'four': '4', 'five': '5',
#         'six': '6', 'seven': '7', 'eight': '8', 'nine': '9'
#     }

#     for n in nums:
#         s = s.replace(n, nums[n])

#     return int(s)