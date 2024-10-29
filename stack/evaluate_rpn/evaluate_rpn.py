from typing import List


class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        
        tmp = [] 
        for t in tokens:
            if t == "+":
                tmp.append(int(tmp.pop()) + int(tmp.pop()))

            elif t == "-":
                a = int(tmp.pop())
                b = int(tmp.pop())

                tmp.append(b - a)

            elif t == "*":
                tmp.append(int(tmp.pop()) * int(tmp.pop()))
                
            elif t == "/":
                a = int(tmp.pop())
                b = int(tmp.pop())

                tmp.append(b / a)

            else:
                tmp.append(t)

        return int(tmp.pop())


sol = Solution()
tokens = ["1","2","+","3","*","4","-"]
print(sol.evalRPN(tokens))
         
