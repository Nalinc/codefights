#Question: https://python.web.id/blog/find-hyperlink-cf/

import re
def findHyperlink(text):
    start = '<a href=\"'
    end = '">'
    return re.search('%s(.*)%s' % (start, end), text).group(1)

'''
>>> text = "<a href=\"http://www.example.org\">Example1</a>"
>>> findHyperlink(text)
"http://www.example.org"
>>>
>>> text = "a href=\"http://www.wrong.org\"<a href=\"correct\">Example2 a href /a</a> URL"
>>> findHyperlink(text)
"correct"
>>>
>>> text = "URL a href=\"http://www.wrong.org\"<a href=\"\">Example3 a href /a</a> URL href"
>>> findHyperlink(text)
Empty
>>>
>>> text = "a href=\"URL\"<a href=\"href=\"\"\"> Example4</a>"
>>> findHyperlink(text)
"href=\"\""
>>>
'''
