#Question: https://python.web.id/blog/task-goal-cf/

def tasksTypes(deadline, day):
    today = 0
    upcoming = 0
    later = 0
    dead = []
    for i in deadline:
        if i == day or i < day:
            today += 1
        elif i >= day+1 and i <= day+7:
            upcoming += 1
        else:
            later += 1
    dead.append(today)
    dead.append(upcoming)
    dead.append(later)
    return dead

'''
>>> deadline = [1, 2, 3, 4, 5]
>>> day = 2
>>> tasksTypes(deadline, day)
[2, 3, 0]
>>> deadline = [1, 2, 4, 2, 10, 3, 1, 4, 5, 4, 9, 8]
>>> day = 1
>>> tasksTypes(deadline, day)
[2, 8, 2]
>>> deadline = [1]
>>> day =  1
>>> tasksTypes(deadline, day)
[1, 0, 0]
>>> deadline = [8]
>>> day = 1
>>> tasksTypes(deadline, day)
[0, 1, 0]
>>> deadline = [9]
>>> day = 1
>>> tasksTypes(deadline, day)
[0, 0, 1]
>>>
'''
