#!/usr/bin/python3

def no_c(my_string):
    new_string = my_string.translate(str.maketrans('', '', 'cC'))
    return new_string
