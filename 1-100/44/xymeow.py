class Solution(object):
    def isMatch(self, s, p):
        """
        :type s: str
        :type p: str
        :rtype: bool
        """
        # if not s or not p: return False
        lenp = len(p)
        idp = 0
        ids = 0
        pstar = -1
        sstar = -1
        while ids < len(s):
        	if idp < lenp and (s[ids] == p[idp] or p[idp] == '?'):
        		ids += 1
        		idp += 1
        	elif idp < lenp and p[idp] == '*':
        		pstar = idp
        		idp += 1
        		sstar = ids
        	elif pstar >= 0:
        		# if has star and unmatch, backtrack to last star
        		idp = pstar + 1
        		sstar += 1
        		ids = sstar
        	else:
        		return False
        # corner case
        while(idp < lenp and p[idp] == '*'):
            idp += 1
        return idp == lenp
