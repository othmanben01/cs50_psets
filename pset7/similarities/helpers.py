from nltk.tokenize import sent_tokenize


def lines(a, b):
    """Return lines in both a and b"""
    # TODO
    a_lines = a.split("\n")
    for line in a_lines:
        line = line.lstrip().rstrip()
    b_lines = b.split("\n")
    for line in b_lines:
        line = line.lstrip().rstrip()
    a_lines = set(a_lines)
    b_lines = set(b_lines)

    result = a_lines.intersection(b_lines)

    return list(result)


def sentences(a, b):
    """Return sentences in both a and b"""
    # TODO
    a_sentences = sent_tokenize(a)
    for sentence in a_sentences:
        sentence = sentence.lstrip().rstrip()

    b_sentences = sent_tokenize(b)
    for sentence in b_sentences:
        sentence = sentence.lstrip().rstrip()

    a_sentences = set(a_sentences)
    b_sentences = set(b_sentences)

    result = a_sentences.intersection(b_sentences)
    return list(result)


def substrings(a, b, n):
    """Return substrings of length n in both a and b"""
    # TODO
    a = a.lstrip().rstrip()
    a_substrings = substringHelper(a, n)

    b = b.lstrip().rstrip()
    b_substrings = substringHelper(b, n)

    a_substrings = set(a_substrings)
    b_substrings = set(b_substrings)

    result = a_substrings.intersection(b_substrings)
    return list(result)


def substringHelper(a, n):
    result = []
    length = len(a)
    start = 0
    end = n
    while (end <= length):
        result.append(a[start:end])
        start += 1
        end += 1
    return result

