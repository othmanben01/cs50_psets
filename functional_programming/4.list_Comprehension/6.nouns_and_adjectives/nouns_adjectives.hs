nouns = ["hobo","frog","pope"]
adjectives = ["lazy","grouchy","scheming"]
formatedstr = [adjective ++ " " ++ noun | adjective <- adjectives, noun <- nouns]
