"""
a = int(input())
for b in range (a):
    user = input()
    user_input = user.split("|")
    a_needed = user_input[0].count("A")
    b_needed = user_input[0].count("B")
    c_needed = user_input[0].count("C")
    d_needed = user_input[0].count("D")
    e_needed = user_input[0].count("E")
    f_needed = user_input[0].count("F")
    g_needed = user_input[0].count("G")
    h_needed = user_input[0].count("H")
    i_needed = user_input[0].count("I")
    j_needed = user_input[0].count("J")
    k_needed = user_input[0].count("K")
    l_needed = user_input[0].count("L")
    m_needed = user_input[0].count("M")
    n_needed = user_input[0].count("N")
    o_needed = user_input[0].count("O")
    p_needed = user_input[0].count("P")
    q_needed = user_input[0].count("Q")
    r_needed = user_input[0].count("R")
    s_needed = user_input[0].count("S")
    t_needed = user_input[0].count("T")
    u_needed = user_input[0].count("U")
    v_needed = user_input[0].count("V")
    w_needed = user_input[0].count("W")
    x_needed = user_input[0].count("X")
    y_needed = user_input[0].count("Y")
    z_needed = user_input[0].count("Z")

    a_available = user_input[1].count("A")
    b_available = user_input[1].count("B")
    c_available = user_input[1].count("C")
    d_available = user_input[1].count("D")
    e_available = user_input[1].count("E")
    f_available = user_input[1].count("F")
    g_available = user_input[1].count("G")
    h_available = user_input[1].count("H")
    i_available = user_input[1].count("I")
    j_available = user_input[1].count("J")
    k_available = user_input[1].count("K")
    l_available = user_input[1].count("L")
    m_available = user_input[1].count("M")
    n_available = user_input[1].count("N")
    o_available = user_input[1].count("O")
    p_available = user_input[1].count("P")
    q_available = user_input[1].count("Q")
    r_available = user_input[1].count("R")
    s_available = user_input[1].count("S")
    t_available = user_input[1].count("T")
    u_available = user_input[1].count("U")
    v_available = user_input[1].count("V")
    w_available = user_input[1].count("W")
    x_available = user_input[1].count("X")
    y_available = user_input[1].count("Y")
    z_available = user_input[1].count("Z")
    if (a_needed == a_available and b_needed == b_available and c_needed == c_available and d_needed == d_available and e_needed == e_available and f_needed == f_available and g_needed == g_available and h_needed == h_available and i_needed == i_available and j_needed == j_available and k_needed == k_available and l_needed == l_available and m_needed == m_available and n_needed == n_available and o_needed == o_available and p_needed == p_available and q_needed == q_available and r_needed == r_available and s_needed == s_available and t_needed == t_available and u_needed == u_available and v_needed == v_available and w_needed == w_available and x_needed == x_available and y_needed == y_available and z_needed == z_available):
        if user_input[0] == user_input[1]:
            print(user, "= NOT AN ANAGRAM")
        else:
            print(user, "= ANAGRAM")
    else:
        print(user, "= NOT AN ANAGRAM")
^^bad version^^
"""


#better version
a = int(input())
for b in range(a):
    user = input()
    user_input = user.split("|")
    left = sorted(user_input[0])
    right = sorted(user_input[1])
    if user_input[0] != user_input[1]:
        if left == right:
            print(user, "= ANAGRAM")
        else:
            print(user, "= NOT AN ANAGRAM")
    else:
        print(user, "= NOT AN ANAGRAM")

#better version
"""
from collections import Counter
a = int(input())
for b in range(a):
    user = input()
    user_input = user.split("|")
    left = user_input[0].strip().lower()   # convert to lowercase
    right = user_input[1].strip().lower()  # convert to lowercase

    if user_input[0] != user_input[1]:
        if Counter(left) == Counter(right):
            print(user, "= ANAGRAM")
        else:
            print(user, "= NOT AN ANAGRAM")
    else:
        print(user, "= NOT AN ANAGRAM")
"""