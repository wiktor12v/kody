#!/usr/bin/env python
# -*- coding: utf-8 -*-


class Stos:
    def __init__(self, maks=20):
        self.elementy = []
        self.maks = maks
        self.ostatni = 0

    def push(self, element):
        if self.ostatni >= self.maks:
            print("stos pełny!")
            return False
        self.elementy.append(element)
        self.ostatni += 1
        return True

    def pop(self):
        if self.ostatni < 1:
            print("stos pusty!")
            return False
        self.ostatni -= 1
        return self.elementy.pop()


def main(args):
    s = Stos()
    s.push(1)
    s.push(6)
    print(s.pop())
    print(s.pop())
    print(s.pop())
    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
