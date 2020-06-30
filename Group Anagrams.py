class Solution(object):
    def groupAnagrams(self, strs):
        """
        :type strs: List[str]
        :rtype: List[List[str]]
        """
        d = {}
        result = []
        for i in strs:
            l = sorted(i)  
            s = " ".join(l)
            if s in d:
                d[s].append(i)
            else:
                d[s] = [i]
        for i in d.values():
            result.append(i)
        return result
        
