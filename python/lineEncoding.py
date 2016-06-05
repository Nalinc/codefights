#Question: https://python.web.id/blog/find-substrings-for-line-encoding-cf/

import re
def lineEncoding(s):
    grub = [ m.group(0) for m in re.finditer(r"(\w)\1*", s )]
    numb = 0
    out  = []
    for i in grub:
        numb += 1
        if len(i) > 1:
            out.append(grub[numb-1].replace(grub[numb-1], str(len(i))+i[0]))
        else:
            out.append(i)
    return ''.join(out)

'''
>>>
s = "aabbbc"
>>> lineEncoding(s)
"2a3bc"
>>>
>>> s = "abbcabb"
>>> lineEncoding(s)
"a2bca2b"
>>>
>>> s = "abcd"
>>> lineEncoding(s)
"abcd"
>>>
'''
