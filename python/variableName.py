#Question: https://python.web.id/blog/variablename-cf/

def variableName(name):
    for i in range(len(name)):
        if (not ('a' <= name[i] and name[i] <= 'z' or
                    'A' <= name[i] and name[i] <= 'Z' or
                    '0' <= name[i] and name[i] <= '9' or
                    name[i] == '_')):
            return False

    if '0' <= name[0] and name[0] <= '9':
        return False

    return True
