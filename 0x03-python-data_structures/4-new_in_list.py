#!/usr/bin/python3

def new_in_list(my_list, idx, element):
    copy = my_list.copy()
    if idx < 0:
        return copy
    elif idx >= len(my_list):
        return copy
    else:
        copy.insert(idx, element)
        return copy
