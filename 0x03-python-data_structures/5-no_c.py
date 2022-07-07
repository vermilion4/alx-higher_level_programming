#!/usr/bin/python3

def no_c(my_string):
    chars = 'Cc'
    for char in chars:
        my_string = my_string.replace(char, '')
    return my_string
