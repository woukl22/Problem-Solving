def solution(s):
    answer = s
    list = []
    for i in s:
        if i in list:
            answer = answer.replace(i, '')
        else:
            list.append(i)
    answer = ''.join(sorted(answer))
        
    return answer




    # 모범 답안
    #def solution(s):
    # letters = list(s)  # 스트링을 리스트로 쪼개는 방법
    # answer_list = []

    # for letter in letters:
    #     if letters.count(letter) == 1:
    #         answer_list.append(letter)

    # answer_list.sort()
    # answer = ''.join(answer_list)

    # return answer
