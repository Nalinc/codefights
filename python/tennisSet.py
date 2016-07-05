#Question: https://python.web.id/blog/determine-if-given-score-possible-ended-tennis-set-cf/

def tennisSet(score1, score2):
    if score1 < score2:
        tmp = score1
        score1 = score2
        score2 = tmp
    
    if score2 != 5 and score1 == 6 or score2 == 6: # before: if ......
        return True
    return False
