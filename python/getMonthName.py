def getMonthName(mo):
    months = {
        1: "Jan", 2: "Feb", 3: "Mar", 4:"Apr", 
        5: "May", 6: "Jun", 7: "Jul", 8:"Aug", 
        9: "Sep", 10: "Oct", 11: "Nov", 12: "Dec"
    }
    if mo in months.keys():
        return months.get(mo)
    return "invalid month"

'''
>>> getMonthName(1)
"Jan"
>>> getMonthName(0)
"invalid month"
>>>
'''
