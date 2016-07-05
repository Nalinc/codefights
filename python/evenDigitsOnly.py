#Question: https://python.web.id/blog/evendigitsonly-cf/

def evenDigitsOnly(n):
    for i in list(str(n)):
        if int(i) % 2 != 0:
            return False
    return True
