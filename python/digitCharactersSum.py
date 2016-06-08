#Question: https://python.web.id/blog/digitcharacterssum-cf/

def digitCharactersSum(ch1, ch2):
    x1 = ord(ch1) - ord('0')
    x2 = ord(ch2) - ord('0')
    if x1 + x2 < 10:
        return chr(ord('0') + x1 + x2)
    else:
        return '1' + chr(ord('0') + (x1 + x2) % 10)
