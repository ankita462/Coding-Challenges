class Solution(object):
    def backspaceCompare(self, S, T):
        """
        :type S: str
        :type T: str
        :rtype: bool
        """
        s=t=""
        for i in S:
            if i=='#':
                if s:
                    s=s[:-1]
            else:
                s+=i
        for i in T:
            if i =='#':
                if t:
                    t=t[:-1]
            else:        
                t+=i
        print(t,s)        
        return s==t    
        
