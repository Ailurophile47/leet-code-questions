class Solution(object):
    def rotateString(self, s, goal):
       return len(s)==len(goal) and (s+s).find(goal)!=-1