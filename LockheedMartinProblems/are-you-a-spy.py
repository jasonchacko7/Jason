from unittest import case
import re

a = int(input())
for b in range(a):
    user_entry = input()
    user_entry = user_entry.split('|')
    response = (user_entry[1]).lower()
    pattern_for_regex = r"[^a-z]"
    response = sorted(re.sub(pattern_for_regex, "", response))
    response = set(response)
    user_entry = set((user_entry[0]).lower())
    if response.issubset(user_entry):
        print("That's my secret contact!")
    else:
        print("You're not a secret agent!")