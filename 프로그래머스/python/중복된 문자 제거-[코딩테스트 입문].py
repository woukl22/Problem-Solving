def solution(my_string):
    answer = ''
    list = []
    for i in my_string:
        if i in list:
            continue
        else:
            list.append(i)
            answer+=i
    return answer


    # 모범 답안

    # def solution(my_string):
    # answer = ''
    # exclusive_letters = set(my_string) # set은 그 자체로 중복을 제거합니다.
    # for letter in my_string:  
    #     if letter in exclusive_letters: # O(1)의 빠른 containment test
    #         answer += letter # 앞쪽부터 차례로 이어붙이고
    #         exclusive_letters.discard(letter)  # 쓴 것은 제외해줍니다. O(1)

    # return answer