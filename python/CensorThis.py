#Question: https://python.web.id/blog/censorthis-censor-the-words-cf/

def CensorThis(text, forbiddenWords):
  return ' '.join([ t.replace(t, "*" * len(t)) if t.lower() in forbiddenWords else t for t in text.split() ])

'''
text: "The cat does not like the fire"
forbiddenWords: ["cat", "fire"]
Expected Output: "The *** does not like the ****"

text: "The cat does not like the therapy"
forbiddenWords: ["the",  "like"]
Expected Output: "*** cat does not **** *** therapy"
'''
